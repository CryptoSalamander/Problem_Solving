def solution(a, b):
    l = sorted([a,b])
    return sum(range(l[0], l[1]+1))