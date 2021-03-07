def solution(s):
    change = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    for i in range(10):
        s = s.replace(change[i], str(i))
    answer = int(s)
    return answer