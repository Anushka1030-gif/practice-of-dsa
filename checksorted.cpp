#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,1,3,4};
    for(int i=1;i<5;i++){
        if(arr[i]<=arr[i-1]){
            cout<<"false";
            return 0;
        }
         
    }
    cout<< "true";
}
