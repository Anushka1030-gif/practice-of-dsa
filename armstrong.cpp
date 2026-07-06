#include<iostream>
using namespace std;
int armstrong(int x){
    int ld,sq=0,a=x;
    for(int i=0;i<=x;i++){
        ld=x%10;
        sq=sq+(ld*ld*ld);
        
    }
    if(sq==a){
        cout<<"the number is armstrong";
    }
    else{
        cout<<"the number is not a armstrong";
    }
    return sq;
}

int main(){
    
    int n;
    cout<<"enter a number to know that to is a armstrong";
    cin>>n;
    armstrong(n);
    
    
    return 0;
}