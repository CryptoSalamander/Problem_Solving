def solution(phone_book):
    my_list = []   
    answer = True
    for item in phone_book:
        my_list.append((len(item), item))
    my_list = sorted(my_list, key=lambda x: (x[1],x[0]))
    for i in range(len(phone_book)-1):
        if my_list[i+1][1].startswith(my_list[i][1]):
            return False
    return answer