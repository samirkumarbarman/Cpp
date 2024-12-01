#include<iostream>
using namespace std;

int main(){
    int n;
     cout <<"Enter n=";
     cin >>n;

    int sum = 0;

    for(int i=0, i <=n, i++){
        sum+=i;
    }
    cout<<"Total sum="<<sum<<endl;
    return 0;
}