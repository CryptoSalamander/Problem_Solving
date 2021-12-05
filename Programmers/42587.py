from collections import deque
def solution(priorities, location):
    que = deque()
    for i in range(len(priorities)):
        que.append((priorities[i], i))
    cnt = 0
    while que:
        v = que.popleft()
        is_print = True
        for item in que:
            if item[0] > v[0]:
                is_print = False
                break
        if not is_print:
            que.append(v)
        if is_print:
            cnt += 1
            if v[1] == location:
                return cnt