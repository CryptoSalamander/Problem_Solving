def solution(board, moves):
    answer = 0
    stack = [-1]
    for m in moves:
        for i in range(0, len(board)):
            if board[i][m-1] != 0:
                selected = board[i][m-1]
                board[i][m-1] = 0
                break
            else:
                selected = -999
        if stack[-1] == selected and selected != -999:
            stack.pop()
            answer += 2
        else:
            if selected != -999:
                stack.append(selected)
    return answer