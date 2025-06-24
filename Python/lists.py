mylist = ["banana", "cherry" , "apple","cherry"]
print(mylist)
print(len(mylist))

#A list can contain different data types and it also allows duplicate elements
item = mylist[0]
print(item)

item = mylist[1]
print(item)

item = mylist[2]
print(item)

item = mylist[3]
print(item)

item = mylist[-1]
print(item)

item = mylist[-2]
print(item)

item = mylist[-3]
print(item)


for i in mylist:
    print(i)
    
if "cherry" in mylist:
    print("yes")
else:
    print("no")
    
mylist.append("lemon")
print(mylist)

#insertion at specific place
mylist.insert(1, "blueberry")
print(mylist)

#deletion of item return the last item
item = mylist.pop()
print(item)
print(mylist)

#removal of specific item
item = mylist.remove("apple")

print(mylist)

#this delete all the elements from the list
item = mylist.clear()
print(mylist)


#make you list reverse
stationary = ["pencil","eraser","pen","scale","sharpner","highlighter"]
stationary.reverse()
print(stationary)

#sort in alphabatical order
compus_box = stationary.sort()

print(stationary)

#sort in numerical order
number = [2,5,9,-1,0,35]
number.sort()
print(number)

#sort without change in current list
number = [6,8,1,0,-5,-32,90]
new_list =  sorted(number)
print(new_list)
print(number)

#list manipulation
mutable = [0] * 5
print(mutable)

#adding two or more list
finite = [1,5,7,8,9]
both_list = mutable + finite
print(both_list)

#slicing of list
a = finite[1:4]#last element is excluded
print(a)
#step indexing in a list
c = finite[::2]
print(c)

#nice trick to reverse list
b = finite[::-1]
print(b)

animal = ["lion", "tiger","zebra","eagle","elephant","deer","goat","cow","hen","sheep","horse"]

all_animal = animal.copy() #or use list(animal)

all_animal.append("camel")

print(all_animal)
print(animal)

#copy by slicing
my_animals = animal[:]
print(my_animals)

#multiply list
multiply = [i*i for i in finite]
print(multiply)