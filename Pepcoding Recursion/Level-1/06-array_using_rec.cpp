#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void bwd(int arr[],int n){
    if(n==-1) return;
    cout<<arr[n]<<endl;
    bwd(arr,n-1);
}
void fwd(int arr[],int n){
    if(n==-1) return;
    fwd(arr,n-1);
    cout<<arr[n]<<endl;
}
int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bwd(arr,n-1);
    fwd(arr,n-1);
    return 0;
}