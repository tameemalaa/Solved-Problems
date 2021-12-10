# Solution by : Yousef Nefea 
a = 0
d = 0
_ = input()
inp = input()
for i in inp:
    if i == "A":
        a+=1
    else:
        d+=1
if a == d:
    print("Friendship")
elif a > d:
    print("Anton")
else:
    print("Danik")
        