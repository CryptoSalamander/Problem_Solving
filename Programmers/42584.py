from collections import deque
def solution(prices):
    que = deque(prices)
    answer = []
    while que:
        price = que.popleft()
        tmp = 0
        for i in que:
            tmp += 1
            if price > i:
                break
        answer.append(tmp)
    return answer