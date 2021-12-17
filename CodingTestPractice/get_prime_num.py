# get prime numbers in range(1, N)
# GetPrimeNoOpt - No Optimization
# GetPrimeSqrt - Sqrt Optimization
# GetPrimeEratosthenes - Sieve of Eratosthenes
import math, time

def GetPrimeNoOpt(n):
    res = []
    for i in range(2, n+1):
        is_prime = True
        for j in range(2, i):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            res.append(i)
    return res

def GetPrimeSqrt(n):
    res = []
    for i in range(2, n+1):
        is_prime = True
        for j in range(2, int(math.sqrt(i))+1):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            res.append(i)
    return res

def GetPrimeEratosthenes(n):
    chk = [True]*(n+1)
    res = []
    chk[0], chk[1] = False, False
    for i in range(2, int(math.sqrt(n))+1):
        if chk[i]:
            res.append(i)
            j = 2
            while i*j <= n:
                chk[i*j] = False
                j += 1
    res = [x for x in range(n+1) if chk[x]]
    return res
start = time.time()
print(GetPrimeNoOpt(100000))
print(f"{(time.time() - start)*1000}ms")
start = time.time()
print(GetPrimeSqrt(100000))
print(f"{(time.time() - start)*1000}ms")
start = time.time()
print(GetPrimeEratosthenes(100000))
print(f"{(time.time() - start)*1000}ms")