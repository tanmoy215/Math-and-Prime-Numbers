#include<bits/stdc++.h>
using namespace std;
void fun(vector<bool>& sieve){
    int n = sieve.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j+=i){
            sieve[j] = 0;
        }
    }
}
int main(){
    vector<int> nums{2,4,3,7,10,6};
     int mx = nums[0];
      for(int i=0;i<nums.size();i++){
        mx = max(mx,nums[i]);
      }
      vector<bool> sieve(mx+1,1);
       if(mx+1 > 0) sieve[0] = 0;
       if(mx+1 > 1) sieve[1] = 0;
       fun(sieve);
       vector<int> primes;
       for(int i=2;i<sieve.size();i++){
        if(sieve[i]==1) primes.push_back(i);
       }
       vector<bool> taken(primes.size(),0);
       for(int i=0;i<nums.size();i++){
         int ele = nums[i];
         for(int j=0;j<primes.size();j++){
            if(ele<primes[j]) break;
            if(ele%primes[j]==0) taken[j]=1;
         }
       }
       int count = 0;
       for(int i=0;i<taken.size();i++){
         if(taken[i]==1) count++;
       }
       cout<<"Final ans is : "<<count<<endl;
    return 0;
}