#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int q = 1 ;
    for(int i = 0 ; i < (n /2) + 1 ; i++){
        for(int j = 0 ; j < i ; j++){
            cout <<'*';
        }
        if(i == (n / 2 )){
            cout << 'X';
        }else{
            cout << '\\';
        }
        for(int m = i ; m < n - 2 - i; m++){
            cout << '*' ;
        }
        if(i != (n / 2 )){
            cout <<'/';
        }
        for(int j = 0 ; j < i ; j++){
            cout <<'*';
        }
        cout <<endl ;
    }
    for(int i = (n / 2); i > 0 ; i--){
        for(int j = i - 1 ; j > 0 ; j--){
            cout <<'*' ;
        }
        cout << '/' ;
        for(int m = 0 ;m < (2 * q) - 1 ; m++){
            cout <<'*' ;
        }
        cout << '\\' ;
        for(int j = i - 1 ; j > 0 ; j--){
            cout <<'*' ;
        }
        q++; 
        cout << endl ;
    }
}