from collections import defaultdict


def solution(record):
    answer = []
    dic = defaultdict(str)
    for item in record:
        inp = item.split()
        if inp[0] == "Enter":
            dic[inp[1]] = inp[2]
        elif inp[0] == "Change":
            dic[inp[1]] = inp[2]

    for item in record:
        inp = item.split()
        if inp[0] == "Enter":
            answer.append(f"{dic[inp[1]]}님이 들어왔습니다.")
        elif inp[0] == "Leave":
            answer.append(f"{dic[inp[1]]}님이 나갔습니다.")

    return answer