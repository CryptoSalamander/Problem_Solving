def solution(s):
    answer = ''
    for st in s.split(" "):
        for i in range(len(st)):
            if i % 2 == 0:
                answer += st[i].upper()
            else:
                answer += st[i].lower()
        answer += ' '
    print(answer)
    return answer[:-1]