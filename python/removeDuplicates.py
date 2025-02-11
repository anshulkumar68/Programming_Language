def removeDup(myList):
    myList.sort()

    j = 0
    for i in range(1, len(myList)):
        if(myList[i] != myList[j]):
            j += 1
            myList[j] = myList[i]

    return j + 1

myList = [8, 2, 3, 1, 5, 2, 2, 5]
newSize = removeDup(myList)

for i in range(newSize):
    print(myList[i], end=" ")

# ANOTHER WAY OF DOING IT USING SET
print('List after removing the duplicates')
uniqueList = sorted(set(myList))
print(uniqueList)

