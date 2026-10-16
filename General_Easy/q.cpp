#include <iostream>
using namespace std ;

int main(){
    int letters[27];
    for(int i = 1; i < 27 ;i++){
        letters[i] = i;
    }
    string test;
    cin >> test ;
    int pointer = 1;
    int res = 0 ;
    for(int i = 0 ; i < test.length();i++){
        int pointer2 = test[i] - 'a' + 1 ;
        if(pointer2 - pointer <= 13 && pointer <= pointer2){
            res += pointer2 - pointer ;
        }else if (pointer2 - pointer >= 13 &&  pointer <= pointer2 ){ 
            res += pointer - pointer2 + 26 ;
        }else if(pointer - pointer2 >= 13 && pointer >= pointer2){
            res += pointer2 - pointer + 26 ;
        }else if(pointer - pointer2 <13 ){
            res += pointer - pointer2 ;
        }
        pointer = pointer2 ;
    }
    cout << res ;
}