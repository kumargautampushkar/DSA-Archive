#include <bits/stdc++.h>
using namespace std;

vector <string> num = {"zero","one","two","three","four",
    "five","six","seven","eight","nine"};

void spell(int x){
    if(x==0) return;
    spell(x/10);
    string word = num[x%10];
    cout<<word<<" "; 
}

int main(int argc, char const *argv[]){
    int k;
    cin>>k;
    spell(k);cout<<endl;
    return 0;
}
