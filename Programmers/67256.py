from itertools import product


def solution(numbers, hand):
    answer = ''
    a = [(4, 2), (1, 1), (1, 2), (1, 3), (2, 1), (2, 2), (2, 3), (3, 1), (3, 2), (3, 3)]
    l_loc = (4, 1)
    r_loc = (4, 3)
    for i in numbers:
        if i in [1, 4, 7]:
            answer += 'L'
            l_loc = a[i]
        elif i in [3, 6, 9]:
            answer += 'R'
            r_loc = a[i]
        else:
            l_dist = abs(a[i][0] - l_loc[0]) + abs(a[i][1] - l_loc[1])
            r_dist = abs(a[i][0] - r_loc[0]) + abs(a[i][1] - r_loc[1])
            if l_dist > r_dist:
                answer += 'R'
                r_loc = a[i]
            elif r_dist > l_dist:
                answer += 'L'
                l_loc = a[i]
            elif r_dist == l_dist:
                if hand == "right":
                    answer += 'R'
                    r_loc = a[i]
                else:
                    answer += 'L'
                    l_loc = a[i]

    return answer