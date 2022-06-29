#2011102050ÓÚÎÄÇ¿third.py
ls=['a', 'b', 'c', 'a', 'b', 'c', 'd', 'e', 'f', 'b', 'a', 'a', 'd', 'a', 'c', 'e', 'a', 'c', 'b']
dict1 = {}
dict2 = {}
for i in range(0, len(ls)):
    list1 = dict1.keys()
    if ls[i] in list1:
        dict1[ls[i]] = dict1[ls[i]]+1
    else:
        dict1[ls[i]] = 1
for i in range(0, 3):
    key1 = max(dict1, key=dict1.get)
    dict2[key1] = dict1[key1]
    del dict1[key1]
print(dict2)
