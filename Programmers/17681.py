def solution(n, arr1, arr2):
    map1 = []
    map2 = []
    map3 = []
    answer = [[0]*n for _ in range(n)]
    final = []
    for i in range(n):
        map1.append(str(f"{arr1[i]:0{n}b}"))
        map2.append(str(f"{arr2[i]:0{n}b}"))
    for i in range(n):
        combine = ""
        for j in range(n):
            if map1[i][j] == '1' or map2[i][j] == '1':
                combine += '#'
            else:
                combine += ' '
        final.append(combine)
    return final