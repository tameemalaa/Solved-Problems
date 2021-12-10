// Solution By: Mahmoud Akram
#include <iostream>
using namespace std;

int main()
{
    string word;
    cin>>word;
    while(word.find("WUB")!=-1){
        int x=word.find("WUB");

        if(x==0)
            word.erase(x,3);
        else{
            word.replace(x,3," ");
        }
    }
    cout<<word;
}