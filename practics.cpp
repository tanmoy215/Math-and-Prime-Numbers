#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
     int n;
     cout<<"enter n : ";
     cin>>n;
     cout<<isprime(n)<<endl;
    return 0;
}