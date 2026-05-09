#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,2,1,5,1};
    int largest=arr[0];
    for(int i=0;i<5;i++){if(largest<arr[i]){ 
            largest=arr[i];
        }
    }
    cout<<largest;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number of element to be in array";
//     cin>>n;
//     int arr[n],i;
//     for(i=0;i<n;i++){
//         cout<<"enter element in an arr";
//         cin>>arr[i];
        
//     }
//     for( i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     int max=arr[0];
//     for( i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<endl<<max<<"is the greatest number";

// }