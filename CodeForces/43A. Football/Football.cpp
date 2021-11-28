// Solution by : Tameem Alaa El-Deen Sayed

    #include <iostream>
    #include <string>
    using namespace std; 

    int main(){
        int n , a ,b ;
        a = 0;
        b= 0 ;
        string r, h1 ,h2;
        cin >> n ;
        for (int i = 0 ; i< n; i++){
        cin >> r ;
        if (i==0){
            h1 = r; 
        }
        if (h1 ==r ){
            a++;
        }
        else {
            h2 = r ;
            b++;
        }
        }
        if (a>b){
            cout << h1;
        }
        else {
            cout << h2 ;
        }
    }