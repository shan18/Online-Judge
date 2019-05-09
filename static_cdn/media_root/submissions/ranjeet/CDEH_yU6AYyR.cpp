#include <cstdio>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;
#define MAXN 100000
#define MAXI 1000000000
vector<int> inp;
vector<int>::iterator up;
int T, N, K, P;
bool solve(){
    int disp = 2*P ;
    sort(inp.begin(), inp.end());
    
    for(int i=0;i<N;i++){
        int val = inp[i];
        val = val+disp;
        up = upper_bound(inp.begin(), inp.end(), val);
        int idx = (up - inp.begin());
        if (idx-i>=K)
            return false;
    }
    return true;
}
int main(){
    int a;
    scanf("%d", &T);
    assert(T>0);
    assert(T<=10);
    while(T--){
        inp.clear();
        scanf("%d %d %d", &N, &K, &P);
        assert(N>0);
        assert(N<=MAXN);
        assert(K>0);
        assert(K<=MAXN);
        assert(P>=0);
        assert(P<=MAXI);
        for(int i=0;i<N;i++){
            scanf("%d", &a);
            assert(a>=-MAXI);
            assert(a<=MAXI);
            inp.push_back(a);
        }
        if(solve())
            printf("YES\n");
        else
            printf("NO\n");
    }
}