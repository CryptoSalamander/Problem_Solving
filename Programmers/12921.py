import math
def solution(n):
    answer = 0
    chk = [True] * (n+1)
    chk[0], chk[1] = False, False
    for i in range(2,int(math.sqrt(n))+1):
        if chk[i]:
            for j in range(2, n//i+1):
                chk[i*j] = False
    for c in chk:
        if c:
            answer += 1
    return answer