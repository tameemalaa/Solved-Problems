// Solution By: Mahmoud Akram
#include <iostream>

using namespace std;

int main()
{
    int anton=0,danik=0,n;
    string games;
    cin>>n>>games;
    for (auto win:games){
        if(win=='A')
            anton++;
        else
            danik++;
    }
    if(anton>danik)
        cout<<"Anton";
    else if(anton==danik)
        cout<<"Friendship";
    else
        cout<<"Danik";

}