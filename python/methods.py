# List methods
myList = [5, 8, 4, 7, 8, 9]
print("LIST METHOD----------------")
myList.append(4)   # adds element at last
myList.remove(4)   #remove first occurence of element
myList.extend([8, 2]) 
myList.reverse()
myList.insert(0, 11)
myList.pop()
myList.sort()
myList.clear() # empty whole list
print(f'Number of occurences of 8 is : {myList.count(8)}')
print(myList) 


# Tuple methods
myTuple = (1, 2, 3, 4, 6, 2, 3)
print("TUPLES METHOD----------------")
print(f'Number of occurence of 2 is : {myTuple.count(2)}')
print(myTuple.index(4))


# set methods
print("SETS METHOD----------------")
mySet = {1, 2, 3, 4}

mySet.add(5)            # Adds a new element
mySet.update([6, 7])    # Adds multiple elements
mySet.remove(3)         # Removes 3, throws error if not found
mySet.discard(10)       # Removes 10, no error if not found
print(f'pop method {mySet.pop()}')             # Removes and returns a random element
# mySet.clear()           # Clears the set
print(mySet)
# Set operations
set1 = {1, 2, 3}
set2 = {3, 4, 5}
union_set = set1.union(set2)        # Combines sets
print(union_set)
intersection_set = set1.intersection(set2) # Common elements
print(intersection_set)
difference_set = set1.difference(set2)     # Unique to set1
print(difference_set)


