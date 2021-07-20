#include <bits/stdc++.h>

using namespace std;

int maxvote(int a, int b, int c){
    if(a>b && a>c){
        return 'aaa';
    }
    if(b>a && b>c){
        return 'bbb';
    }
    if(c>a && c>b){
        return 'ccc';
    }
}


int main(){
    int aaa=0, bbb=0, ccc=0, nota=0;
    char vote;
    int v;
    cin>>v;
    
    for (int i=1;i<=v ;i++ ){
        cout<<"Press 1 to vote for AAA"<<endl;
        cout<<"Press 2 to vote for BBB"<<endl;
        cout<<"Press 3 to vote for CCC"<<endl;
        cout<<"Press 4 to vote for NOTA"<<endl;
       cin>>vote;
       while(vote<=4){
       switch(vote){
    
          case '1':
          aaa++;
          break;
          case '2':
          bbb++;
          break;
          case '3':
          ccc++;
          break;
          case '4':
          nota++;
          break;
          default: 
          cout<<"invalid input"<<endl;
          break;
}
//cout<<"\n Enter your vote:\t";
//cin>>vote;
}
    }

cout<<"Number of votes for AAA: "<<aaa<<endl;
cout<<"Number of votes for BBB: "<<bbb<<endl;
cout<<"Number of votes for CCC: "<<ccc<<endl;
cout<<"Number of NOTA: "<<nota<<endl;

cout<<"Team "<<maxvote(aaa,bbb,ccc)<<" wins the vote"<<endl;
return 0;
}