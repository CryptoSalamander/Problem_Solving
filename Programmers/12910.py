def solution(arr, divisor):
    answer = []
    for num in arr:
        if num % divisor == 0:
            answer.append(num)
    if answer:
        return sorted(answer)
    else:
        return [-1]