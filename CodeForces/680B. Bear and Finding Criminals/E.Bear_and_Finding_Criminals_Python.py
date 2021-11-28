# This Soultion is Created by  Abdelrahman Nawar

def handle_input():
    n,a= tuple(map(int,input().split()))
    criminals = list(map(int, input().split()))
    return a,criminals


a,criminals = handle_input()


i = j = a-1
counter = 0
n = len(criminals)
while i >= 0  or j <= n-1 :
    if i >= 0  and j <= n-1 :
        if criminals[i] == 1 and criminals[j] == 1 and i != j:
            counter +=2
        elif criminals[i] == 1 and criminals[j] == 1:
            counter +=1
        i-=1
        j+=1
    elif i >=0 :
        if criminals[i] == 1:
            counter+=1
        i-=1
    else:
        if criminals[j] == 1:
            counter+=1
        j+=1

print(counter)
