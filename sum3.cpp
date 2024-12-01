#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int oddSum;

    for(int i=0; i<=n; i++){
        if(n%2!=0){
            oddSum+=i;
        }
    }

    cout <<"Total sum="<<oddSum<<endl;
    return 0;
}