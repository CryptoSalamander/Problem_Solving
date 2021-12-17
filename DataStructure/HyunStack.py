'''
    push(x) - input x to stack
    pop() - delete last element of stack and return it
    size() - return length of stack
    empty() - return boolean that checks whether stack has an element
    top() - return top of stack
'''
class HyunStack():
    def __init__(self):
        self.stack = []

    def push(self,x):
        self.stack.append(x)

    def pop(self):
        return self.stack.pop() if self.stack else -1

    def size(self):
        return len(self.stack)

    def empty(self):
        return not self.stack

    def top(self):
        return self.stack[-1] if self.stack else -1

if __name__ == "__main__":
    q = HyunStack()
    q.push(1)
    q.push(2)
    print(q.top())
    print(q.size())
    print(q.empty())
    print(q.pop())
    print(q.pop())
    print(q.pop())
    print(q.size())
    print(q.empty())
    q.push(3)
    print(q.empty())
    print(q.top())