#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"\n Enter size of array";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the values of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Hello ";
    return 0;
}