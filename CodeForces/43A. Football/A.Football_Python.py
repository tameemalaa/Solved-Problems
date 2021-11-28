# This Soultion is Created by  Abdelrahman Nawar


def handle_input():
    n = int(input())
    input_elements = []
    for line in range(n):
        nth_line  = input()
        input_elements.append(nth_line)
    return input_elements

 
goals = handle_input()


# using a hash (dictionary)
goals_counter = {}

for goal in goals:
    if goals_counter.get(goal):
        goals_counter[goal] += 1
    else:
        goals_counter[goal] = 1


winner_team = max(goals_counter,key=goals_counter.get) # sort based on the values
print(winner_team)