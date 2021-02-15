def solution(dartResult):
    score = []
    for idx, ch in enumerate(dartResult):
        if ch in '1234567890':
            if ch == '1' and dartResult[idx+1] == '0':
                score.append(10)
            elif ch == '1' and dartResult[idx+1] != '0':
                score.append(1)
            elif ch == '0':
                if idx != 0:
                    if dartResult[idx-1] != '1':
                        score.append(0)
                else:
                    score.append(0)
            else:
                score.append(int(ch))
        elif ch == 'D':
            score[-1] = score[-1]**2
        elif ch == 'T':
            score[-1] = score[-1]**3
        elif ch == '*':
            if len(score) > 1:
                score[-2] = score[-2]*2
                score[-1] = score[-1]*2
            else:
                score[-1] = score[-1]*2
        elif ch == '#':
            score[-1] = -score[-1]
    answer = sum(score)
    return answer