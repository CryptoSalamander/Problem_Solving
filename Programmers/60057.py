def solution(s):
    mn = 99999999999
    if len(s) == 1:
        return 1
    for i in range(1, len(s)//2+1):
        idx = 0
        cnt = 1
        chk = len(s)//i
        result = ""
        while chk:
            if s[idx:idx+i] == s[idx+i:idx+i+i]:
                cnt += 1
            else:
                if cnt != 1:
                    result += (str(cnt)+s[idx:idx+i])
                else:
                    result += s[idx:idx+i]
                cnt = 1
            if len(s)-1 < idx+i:
                break
            else:
                idx += i
            chk -= 1
        if len(s)%i != 0:
            result += s[-(len(s)%i):]
        mn = min(mn, len(result))
    return mn