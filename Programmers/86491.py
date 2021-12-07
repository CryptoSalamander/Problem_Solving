def solution(sizes):
    w_mx, h_mx = -1, -1
    for i in range(len(sizes)):
        if sizes[i][0] < sizes[i][1]:
            sizes[i][0], sizes[i][1] = sizes[i][1], sizes[i][0]
        if sizes[i][0] > w_mx:
            w_mx = sizes[i][0]
        if sizes[i][1] > h_mx:
            h_mx = sizes[i][1]
    answer = w_mx*h_mx
    return answer