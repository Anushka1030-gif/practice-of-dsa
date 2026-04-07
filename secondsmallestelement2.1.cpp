#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,5,7,8,3};
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<6;i++){
        if(smallest>arr[i]){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if (ssmallest<smallest && smallest){
            
        }
    }
}