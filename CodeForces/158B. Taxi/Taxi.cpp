// Solution by : Tameem Alaa El-Deen 
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float n3=0,n2=0,n1=0,n,n4=0;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        switch (x){
    case 1:
        n1++;
        break;
    case 2:
        n2++;
        break;
    case 3:
        n3++;
        break;
    case 4:
        n4++;
        }
    }
if ((n1 - n3) > 0){
    n1 = n1 -n3;
    }
else{
    n1 = 0;
}
cout << n4 + n3 + ceil((n2*2 + n1)/4);

}