// Solution By: Mahmoud Akram

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   string alphabet="abcdefghijklmnopqrstuvwxyz",password="";
   int len,freq;
   cin>>len>>freq;
   int i=0;
   while(len--){
        i%=freq;
        password+=alphabet[i];
        i++;
   }
   cout<<password;
}