def solution(brown, yellow):
    blocks = brown+yellow
    for w in range(blocks, 0, -1):
        if blocks % w == 0:
            h = blocks // w
            if 2*w + 2*h - 4 == brown:
                return [w, blocks // w]