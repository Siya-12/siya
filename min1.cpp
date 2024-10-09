#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout<<"\n Enter size of array";
    // cin>>n;
    int arr[5];
    cout<<"\nEnter the values of array";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<5;i++)
    {
       mini=min(mini,arr[i]);
    }

    cout<<mini<<endl;
    return 0;
}


// array
// loops
// max
// SECOND MAX