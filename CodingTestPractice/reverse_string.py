import sys

def input():
    return sys.stdin.readline().rstrip()

res = []
st = list(input())
while st:
    res.append(st.pop())
print("".join(res))
