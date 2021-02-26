from itertools import combinations
def solution(numbers):
    answer = set()
    for c in combinations(numbers,2):
        answer.add(sum(c))
    answer = sorted(list(answer))
    return answer