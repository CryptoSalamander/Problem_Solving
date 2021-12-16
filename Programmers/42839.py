import math
from collections import defaultdict
from itertools import permutations
def solution(numbers):
    answer = 0
    mx = int("".join(sorted(list(numbers),reverse=True)))
    prime_list = get_prime(mx)
    result = []
    for i in range(1,len(numbers)+1):
        result += [int("".join(tmp)) for tmp in permutations(numbers,i)]
    result = list(set(result))
    for num in result:
        if num in prime_list:
            answer += 1
    return answer

def get_prime(n):
    result = []
    chk = [True]*(n+1)
    chk[0], chk[1] = False, False
    for i in range(2, int(math.sqrt(n))+1):
        if chk[i] == True:
            j = 2
            while i*j <= n:
                chk[i*j] = False
                j += 1
    for i in range(len(chk)):
        if chk[i]:
            result.append(i)
    return result