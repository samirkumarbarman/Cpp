#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int oddSum = 0;

    for(int i=0, i<=n, i++){
        if(n%2!==0){
            oddSum=i;
        }
    }

    cout <<"Total sum="<<oddSum<<endl;
    return 0;
}