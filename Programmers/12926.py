def solution(s, n):
    answer = ''
    for ch in s:
        if 'A' <= ch <= 'Z':
            if 'A' <= chr(ord(ch)+n) <= 'Z':
                answer += chr(ord(ch)+n)
            else:
                answer += chr(ord(ch)+n-ord('Z')+ord('A')-1)
        elif 'a' <= ch <= 'z':
            if 'a' <= chr(ord(ch)+n) <= 'z':
                answer += chr(ord(ch)+n)
            else:
                answer += chr(ord(ch)+n-ord('z')+ord('a')-1)
        else:
            answer += ch
    return answer