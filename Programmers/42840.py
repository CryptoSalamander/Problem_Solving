def solution(answers):
    answer = []
    a = [1,2,3,4,5] # 5
    b = [2,1,2,3,2,4,2,5] # 8
    c = [3,3,1,1,2,2,4,4,5,5] # 10
    corr = [-9999, 0,0,0]
    for idx,i in enumerate(answers):
        if i == a[idx%5]:
            corr[1] += 1
        if i == b[idx%8]:
            corr[2] += 1
        if i == c[idx%10]:
            corr[3] += 1
    for i in range(1,4):
        if corr[i] == max(corr):
            answer.append(i)
    return answer