#include <iostream>
using namespace std ;

int main(){
    int n , k;
    cin >> n  >> k;
    string  num;
    int res = 0 ;
    while(n--){
        bool arr[k+1] {false} ;
        bool flag = true ;
        cin >> num ;
        int lenth = num.length();
        for(int i = 0; i < lenth ; i++){
            if(num[i] - '0' <= k){
                arr[num[i] - '0'] = true ;
            }
        }
        for(int i = 0 ; i <= k ;i++){
            if(arr[i] == false) flag = false ;
        }
        if(flag == true ) res++ ;
    }
    cout << res ;
}