from collections import deque
def solution(progresses, speeds):
    answer = []
    progresses = deque(progresses)
    speeds = deque(speeds)
    while progresses:
        for i in range(len(progresses)):
            progresses[i] += speeds[i]
        if progresses[0] >= 100:
            cnt = 0
            while progresses:
                if progresses[0] >= 100:
                    progresses.popleft()
                    speeds.popleft()
                    cnt += 1
                else:
                    break
            answer.append(cnt)
    return answer