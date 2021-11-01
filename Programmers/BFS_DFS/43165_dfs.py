def solution(numbers, target):
    answer = 0
    def dfs(cur, idx):
        if idx == len(numbers):
            if cur == target:
                nonlocal answer
                answer += 1
                return
        else:
            dfs(cur+numbers[idx],idx+1)
            dfs(cur-numbers[idx],idx+1)
    dfs(0,0)
    return answer



if __name__ == "__main__":
    N = [1,1,1,1,1]
    print(solution(N,3))