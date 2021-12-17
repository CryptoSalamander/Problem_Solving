# Quick Sort
# Big-O (N^2), Normally NlogN
def HyunQuick(numbers):
    if len(numbers) <= 1:
        return numbers
    pivot = numbers[len(numbers)//2]
    left, right, equal = [], [], []
    for num in numbers:
        if num < pivot:
            left.append(num)
        elif num > pivot:
            right.append(num)
        else:
            equal.append(num)
    return HyunQuick(left) + equal + HyunQuick(right)

test = [7,4,5,1,3]
print(HyunQuick(test))