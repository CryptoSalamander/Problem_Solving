from collections import deque
def solution(numbers, target):
    answer = 0
    queue = deque()
    queue.append([numbers[0],0])
    queue.append([-1*numbers[0],0])

    while queue:
        num_, idx = queue.popleft()
        idx += 1

        if idx < len(numbers):
            queue.append([num_+numbers[idx], idx])
            queue.append([num_-numbers[idx], idx])
        else:
            if num_ == target:
                answer += 1
    return answer

if __name__ == "__main__":
    N = [1,1,1,1,1]
    print(solution(N,3))
