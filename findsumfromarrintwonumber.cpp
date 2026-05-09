#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter number of arr";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    int x;
    cout<<endl<<"enter the number whoes sums of two number you want ";
    cin>>x;
    vector<int> v(2); 
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=1;j<n;j++){
            if(arr[i]+arr[j]==x){
                    v[0]=i;
                    v[1]=j;  
                    flag=false;
            }
        }    
        if(flag==false) break;
    }
    cout<<v[0]<<v[1];
    
    

}