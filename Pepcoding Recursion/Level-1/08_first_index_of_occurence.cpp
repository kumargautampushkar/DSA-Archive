#include <iostream>
#include <vector>

using namespace std;

// This code does the same thing as code below
// But it traverses whole array and returns answer at returning time

int fio1(vector <int> &v, int n, int num){
    if(n==v.size()) return -1;
    int x = fio1(v,n+1,num);
    if(v[n] == num) return n;
    else return x; 
    // return fio(v,n+1,num);
}


// This code returns output as soon as it findes first occurence and does not go deeper into the array
int fio(vector <int> &v, int n, int num){
    if(n==v.size()) return -1;
    if(v[n] == num) return n;
    int x = fio(v,n+1,num);
    return x;
}



int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int num;
    cin>>num;

    auto ans = fio(v,0,num);
    cout<<ans<<endl;
    //ans = fio1(v,0,num);
    //cout<<ans<<endl;
    return 0;
}