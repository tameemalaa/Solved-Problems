# This Soultion is Done by Abdelrahman Nawar

def handle_input():
    n,h = tuple(map(int,input().split()))
    
    heights = map(int, input().split())
    return h,heights


h,heights = handle_input()

road_width = 0
for height in heights:
    if height > h :
        road_width +=1
    road_width +=1

print(road_width)