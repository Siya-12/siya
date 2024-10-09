#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    // cout<<"\n Enter size of array";
    // cin>>n;
    int arr[10],secondmax=INT_MIN;
    cout<<"\nEnter the values of array";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
int maxi=INT_MIN;
    for(int i=0;i<10;i++){
      if(arr[i]>maxi)
      {secondmax=maxi;
      maxi=arr[i];}
   else if(marks[i]>secondmax){
    secondmax=marks[i];
   }

    // maxi=max(maxi,arr[i]);
    }

    cout<<maxi<<endl;
    return 0;
}