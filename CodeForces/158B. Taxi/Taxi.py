# Solution by : Abdelrahman Nawar

from math import ceil
_= int(input())
g = list(map(int, (input(" ").split(" "))))
n1 = g.count(1)
n2 = g.count(2)
n3 = g.count(3)
n4 = g.count(4)
n1 = n1-n3 if (n1 - n3) > 0 else 0
ans = n4 + n3 + ceil((n2*2 + n1)/4)  
print(ans)