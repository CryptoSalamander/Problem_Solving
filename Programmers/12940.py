def solution(n, m):
    tmp = n*m
    if n < m: 
        n, m = m, n
    while True:
        if n % m == 0:
            break
        else:
            n, m = m, n%m
    return [m, tmp//m]