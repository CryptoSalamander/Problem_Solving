def solution(arr):
    answer = []
    tmp = 10
    for c in arr:
        if c != tmp:
            answer.append(c)
            tmp = c
    return answer