#include<bits/stdc++.h>
using namespace std;
void fun(vector<bool>& sieve){
  int n = sieve.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j+=i){
            sieve[j]=0;
        }
    }
}
int main(){                     //this method call Sieve eratosthenesis
    int n;
    cout<<"enter number n : ";
    cin>>n;
     n = n-1;
    vector<bool> sieve(n+1,1); //1 means true and 0 means false
     fun(sieve);
     if(n<=2) cout<<"Final ans is : "<<0<<endl;
     sieve[0] =0;
     sieve[1] = 0;
     int count = 0;
     for(int i=2;i<=n;i++){
        if(sieve[i]==1) count++;
     }
     cout<<"Final ans is : "<<count<<endl;
    return 0;
}