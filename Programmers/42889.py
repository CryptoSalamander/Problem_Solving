from collections import Counter
def solution(N, stages):
    cnt = Counter(stages)
    stages = [0]*(N+3)
    f = []
    answer = []
    for i in range(N+1, 0, -1):
        stages[i] = stages[i+1] + cnt[i]
        if cnt[i] == 0:
            f.append((0, i))
        else:
            f.append((cnt[i] / stages[i], i))
    for item in sorted(f[1:N+1], key=lambda x: (-x[0], x[1])):
        answer.append(item[1])
    return answer