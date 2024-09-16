#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int smallestValue(int n){
        int sum =0;
     for(int i=1;i<sqrt(n);i++){
        if(n%i==0 && isprime(i)){
            int m = n;
            while(m%i==0){
                sum+=i;
                m/=i;
            }
        }
     }
     for(int i=sqrt(n);i>=1;i--){
        if(n/(n/i)==0 && isprime(n/i)){
            int m = n;
            while(m%(n/i)==0){
                sum+=(n/i);
                m/=(n/i);
            }
        }
     }
     if(sum==n) return n;
     return smallestValue(sum);
    
}
int main(){
     int n;
     cout<<"enter number : ";
     cin>>n;
    cout<<"Final ans is : "<<smallestValue(n)<<endl; 
}