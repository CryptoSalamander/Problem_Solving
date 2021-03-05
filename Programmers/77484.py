def solution(lottos, win_nums):
    answer = []
    zero_cnt = 0
    correct = 0
    for i in lottos:
        if i == 0:
            zero_cnt += 1
        else:
            if i in win_nums:
                correct += 1
    if correct + zero_cnt >= 2:
        answer.append(7 - correct - zero_cnt)
    else:
        answer.append(6)

    if correct >= 2:
        answer.append(7 - correct)
    else:
        answer.append(6)
    return answer