def solution(n):
    tmp = sorted(list(str(n)), reverse=True)
    return int("".join(tmp))