# Python3 program to find count 
# of divisors in n! 

# allPrimes[] stores all prime 
# numbers less than or equal to n. 
allPrimes = []; 

# Fills above vector allPrimes[] 
# for a given n 
def sieve(n): 

	# Create a boolean array "prime[0..n]" 
	# and initialize all entries it as true. 
	# A value in prime[i] will finally be 
	# false if i is not a prime, else true. 
	prime = [True] * (n + 1); 

	# Loop to update prime[] 
	p = 2; 
	while(p * p <= n): 
		
		# If prime[p] is not changed, 
		# then it is a prime 
		if (prime[p] == True): 
			
			# Update all multiples of p 
			i = p * 2; 
			while(i <= n): 
				prime[i] = False; 
				i += p; 
		p += 1; 

	# Store primes in the vector allPrimes 
	for p in range(2, n + 1): 
		if (prime[p]): 
			allPrimes.append(p); 

# Function to find all result of 
# factorial number 
def factorialDivisors(n): 

	sieve(n); # create sieve 

	# Initialize result 
	result = 1; 

	# find exponents of all primes 
	# which divides n and less than n 
	for i in range(len(allPrimes)): 
		
		# Current divisor 
		p = allPrimes[i]; 

		# Find the highest power (stored in exp)' 
		# of allPrimes[i] that divides n using 
		# Legendre's formula. 
		exp = 0; 
		while (p <= n): 
			exp = exp + int(n / p); 
			p = p * allPrimes[i]; 

		# Multiply exponents of all 
		# primes less than n 
		result = result * (exp + 1); 

	# return total divisors 
	return result; 

# Driver Code 
print(factorialDivisors(int(input()))); 

# This code is contributed by mits 

