#include <iostream>
#include<algorithm>

using namespace std;
int main() {
    cout<<"Hello World!";
    int arr[]={5,6,10,10,10,12,13,13,31,31,31,35,66};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=10;
    auto it =find(arr,arr+n,key);
    cout<<it-arr<<"\n";
    bool a=binary_search(arr,arr+n,key);
    if(a){
    cout<<"present"<<"\n";
    }
    else{
        cout<<"absent";
    }
    int* lb=lower_bound(arr,arr+n,key);
    cout<<"this is lower bound"<<lb<<"\n";
    int* ub=upper_bound(arr,arr+n,key);
     cout<<"this is uppper bound"<<ub<<"\n";
     cout<<"number of time no repeated is"<<ub-lb;

}
