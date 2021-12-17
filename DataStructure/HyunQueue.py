'''
    push(x) - input x to queue
    pop() - delete last element of queue and return it
    size() - return length of queue
    empty() - return boolean that checks whether queue has an element
    front() - return first element in queue
    back() - return last element in queue
'''
class HyunQueue:
    def __init__(self):
        self.que = []

    def push(self, x):
        self.que.append(x)

    def pop(self):
        return self.que.pop(0) if self.que else -1

    def size(self):
        return len(self.que)

    def empty(self):
        return not self.que

    def front(self):
        return self.que[0] if self.que else -1

    def back(self):
        return self.que[-1] if self.que else -1

if __name__ == "__main__":
    q = HyunQueue()
    q.push(1)
    q.push(2)
    print(q.front())
    print(q.back())
    print(q.size())
    print(q.empty())
    print(q.pop())
    print(q.pop())
    print(q.pop())
    print(q.size())
    print(q.empty())
    q.push(3)
    print(q.empty())
    print(q.front())
    print(q.back())
