#include <bits/stdc++.h>
using namespace std;

int main(){
    int c=0; 
    int i=0;
    string s ("moha%n das karam chand ga*ndhi");      

  char chars[]="%#*0123456789+-/";
   s.erase(s.begin(),s.end(),chars[i]);
    while(s[i]){
       
        
       if(c==0){
            s[i]=toupper(s[i]);     
            c=1;
        }
       if(isspace(s[i])){
            s[i-1]=toupper(s[i-1]);       
            c=0;
        }
//         if(i==strlen(s)-1){
//            s[i]=toupper(s[i]);
//        }
            i++;
    }
    cout<<s<<endl;
    return 0;
}
    