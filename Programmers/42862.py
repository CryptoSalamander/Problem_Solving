def solution(n, lost, reserve):
    reserve_ = set(reserve) - set(lost)
    lost_ = set(lost) - set(reserve)
    for item in reserve_:
        if item-1 in lost_:
            lost_.remove(item-1)
        elif item+1 in lost_:
            lost_.remove(item+1)
    answer = n - len(lost_)
    return answer