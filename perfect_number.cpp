#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int sum =0;
     for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                sum+=i+(n/i);
            }
     }
     cout<<sum-n<<endl;
    return 0;
}