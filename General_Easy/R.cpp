#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    int max = 0 , min = 101 ;
    int maxp = 0 , minp = 0 ;
    for(int i = 0  ; i < n ;i++){
        cin >> arr[i] ;
        if(arr[i] > max ) max = arr[i] , maxp = i+1 ;
        if(arr[i] <= min ) min = arr[i] , minp = i+1 ; 
    }
    if(maxp < minp){
        cout << (maxp - 1) + (n - minp) ;
    }else{
        cout << (maxp - 1) + (n - minp) - 1 ;
    }
}