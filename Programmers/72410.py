def solution(new_id):
    new_id = new_id.lower()
    answer = ''
    allow_list = "0123456789abcdefghijklmnopqrstuvwxyz-_."
    for ch in new_id:
        if ch in allow_list:
            answer += ch
    while(True):
        if answer.find('..') != -1:
            answer = answer.replace('..','.')
        else:
            break
    if answer.startswith('.'):
        answer = answer[1:]
    if answer.endswith('.'):
        answer = answer[:-1]
    if len(answer) == 0:
        answer += 'a'
    if len(answer) >= 16:
        answer = answer[:15]
        if answer.endswith('.'):
            answer = answer[:-1]
    if len(answer) <= 2:
        cnt = 3 - len(answer)
        answer += answer[-1]*cnt
    return answer