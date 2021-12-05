def solution(a, b):
    days = [0,31,29,31,30,31,30,31,31,30,31,30]
    candi = ['FRI','SAT','SUN','MON','TUE','WED','THU']
    answer = ''
    d = b-1
    for i in range(a):
        d += days[i]
    answer = candi[d%7]
    return answer