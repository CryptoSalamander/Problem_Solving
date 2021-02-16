def solution(nums):
    from collections import defaultdict
    dic = defaultdict(int)
    for item in nums:
        dic[item] += 1
    answer = min(len(nums)/2,len(dic))
    return answer