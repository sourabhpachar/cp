#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={1,2,13,12,114,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    auto it =find(arr,arr+n,key);
    
    int k=it-arr;
    cout<<k;


}
