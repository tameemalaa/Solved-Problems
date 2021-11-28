// Solution By : Fadi Al-Ahmed Al-Omar

#include<iostream>
using namespace std;


int main(){
    // input handling while caring for the implementation
    int n,h;
    cin >> n;
    cin >> h;
    int people[n];
    for(int i=0;i<n;i++){
        cin >> people[i];
    }
    // finding if some people are taller and calculating the width
    int width = 0;
    for(int i=0;i<n;i++){
        if(people[i]>h){
            width++;
        }
        width++;
        
    }

    cout << width;


    return 0;
}