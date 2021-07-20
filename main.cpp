#include <iostream>
using namespace std;

int main(){
    
    int n1,n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
    
    char op;
    cout<<"Enter operator "<<endl;
    cin>>op;
    
    switch(op){
         case '1':
         cout<<"addition "<<n1+n2<<endl;
        break;
        case '2':
        cout<<"multiplication "<<n1*n2<<endl;
        break;
        case '3':
        cout<<"division "<<n1/n2<<endl;
        break;
        case '4':
        cout<<"subtraction "<<n1-n2<<endl;
        break;
        default:
        cout<<"invalid input"<<endl;
    }
    return 0;
}