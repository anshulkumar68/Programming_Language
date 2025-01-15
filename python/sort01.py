# sort01
def sort(num):
    start = 0; end = len(num) - 1
    while start < end:
        if num[start] == 0:
            start+=1
        elif num[end] == 1:
            end-=1
        else:
            num[start], num[end] = num[end], num[start]
            start += 1
            end -= 1
    print(num)            

num = [1, 1, 0, 1, 1, 1, 0]
sort(num)