#include <bits/stdc++.h>
using namespace std;

int fact(int n){
   if(n==0)
       return 1;
    else
      return n*fact(n-1);
}

void prime(int n){
    int c=0;
    for(int j=1;j<=n;j++){
        if(n%j==0)
            c++;
    }
    if(c==2){
        cout<<"prime ";
    }
    else{
        cout<<"the non prime factorial is "<<fact(n)<<endl;
    }
}

int main(){
    int n;
    cin>>n;
   prime(n);
   
   return 0;

}