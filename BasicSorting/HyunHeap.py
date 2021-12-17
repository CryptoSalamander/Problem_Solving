# Heap Sort
# Big-O (NlogN)
import heapq
def HyunHeap(numbers):
    result = []
    heapq.heapify(numbers)
    while numbers:
        result.append(heapq.heappop(numbers))
    return result

test = [7,4,5,1,3]
print(HyunHeap(test))