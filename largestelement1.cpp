#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,2,1,5,1};
    int largest=arr[0];
    for(int i=0;i<5;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<largest;
}