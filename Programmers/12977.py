from itertools import combinations
def solution(nums):
    answer = 0
    for c in combinations(nums, 3):
        num = sum(c)
        is_prime = True
        for i in range(3, num):
            if num % i == 0:
                is_prime = False
        if is_prime:
            answer+=1
    return answer