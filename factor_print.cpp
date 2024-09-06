#include<bits/stdc++.h>
using namespace std;
int c = 0;
void factor(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            c++;
        }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
        c++;
    }
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
  factor(n);
  cout<<endl;
  if(c>1)   cout<<"It is Composite number"<<endl;
  else if(n==1) cout<<"Its is not composite nor Prime Number"<<endl;
  else   cout<<"It is Prime Number"<<endl;
    return 0;
}