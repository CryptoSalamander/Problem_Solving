from collections import deque
def solution(n):
    answer = 0
    que = deque()
    while True:
        que.appendleft(n%3)
        if n < 3:
            break
        else:
            n //= 3
    que.reverse()
    val = 3 ** (len(que)-1)
    for item in que:
        answer += item*val
        val //= 3
    return answer