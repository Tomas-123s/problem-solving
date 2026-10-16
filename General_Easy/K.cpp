#include <iostream>
#include <vector>
using namespace std ;
vector <long long> arr(51);
vector <bool> status(51,false) ;

bool Prime( long long num){
    if(num <= 1) return false ;
    if(num ==2 )return true ;
    if(num % 2 == 0) return false ;
    for(long long i = 3 ; i * i <=  num ; i += 2){
        if(num % i == 0){
            return false ;
        }
    }
    return true ;
}

void Fibonacci_Prime(){
    arr[1] = 0;
    arr[2] = 1;
    for(int i = 3 ; i <= 50 ; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for(int i = 3 ; i <=50 ; i++){
        status[i] = Prime(arr[i]) ;
    }
}

int main(){
    long long test , n;
    cin >> test ;
    Fibonacci_Prime() ;
    while(test--){
        cin >> n ;
        if(status[n]){
            cout << "prime" <<endl;
        }else{
            cout << "not prime" << endl;
        }
    }
}