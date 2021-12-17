# Bubble Sort
# Big-O (N^2)
def HyunBubble(numbers):
    for i in range(len(numbers), 1, -1):
        for j in range(i-1):
            if numbers[j] > numbers[j+1]:
                numbers[j], numbers[j+1] = numbers[j+1], numbers[j]
    return numbers

test = [7,4,5,1,3]
print(HyunBubble(test))