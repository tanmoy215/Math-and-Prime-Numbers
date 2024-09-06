#include<bits/stdc++.h>
using namespace std;
int hfact(int n){
  for(int i=2;i<=sqrt(n);i++){
     if(n%i==0) return n/i;
  }
  return 1;
}
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int count = 0;
    while(n>1){
        if(isprime(n)){
            count+=n;
            break;
        }
        int hf = hfact(n);
        count+=(n/hf);
         
        n=hf;
    }
    cout<<"Final ans is : "<<count<<endl;
    return 0;
}