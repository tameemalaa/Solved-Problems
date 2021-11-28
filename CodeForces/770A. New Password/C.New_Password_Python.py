# This Soultion is Created by  Abdelrahman Nawar

import string
alphabet = list(string.ascii_lowercase)

def handle_input():
    n,k = tuple(map(int,input().split()))
    return n,k

n,k = handle_input()

password = ""
for i in range(n):
    password += alphabet[i%k]
print(password)