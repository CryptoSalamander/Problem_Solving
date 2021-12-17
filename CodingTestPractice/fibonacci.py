import time

def recursion_fibo(n):
    return 1 if n<=2 else recursion_fibo(n-2) + recursion_fibo(n-1)

def dp_fibo(n):
    dp = [0] * (n+1)
    dp[0], dp[1] = 0, 1
    for i in range(2, n+1):
        dp[i] = dp[i-2] + dp[i-1]
    return dp[n]

start = time.time()
#print(f"Fibonacci at 40 with Recursion : {recursion_fibo(40)}, Time : {time.time() - start:.16f}sec")
start = time.time()
print(f"Fibonacci at 40 with Dynamic Programming : {dp_fibo(10000)}, Time : {time.time() - start:.16f}sec")
