// Solution By: Tameem Alaa El-Deen Sayed Bakr

#include <iostream>
using namespace std;
 
int main()
{
    int c=0;
    int n ;
    cin >> n ;
 
    while(n>=1)
    {
        if (n % 2 == 1 )
        {
            c++;
            n=n-1;
            n = n / 2 ;
        }
        else
           { n = n / 2 ;}
         
       
    }
    cout << c;
    return 0;
}