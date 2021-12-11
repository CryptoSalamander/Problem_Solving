def solution(n):
    tmp = list(str(n))
    answer = []
    while tmp:
        answer.append(int(tmp.pop()))
    return answer