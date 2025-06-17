#include <iostream>
#include <bits/stdc++.h>
// Watch pepcoding video tutorial to understand this question best : https://youtu.be/QDBrZFROuA0?feature=shared
// to fully understand this concept, refer 04_recursion flow and watch video attached to it


using namespace std;

void hanoi(int n, string a = "A", string b = "B", string c = "C"){
    if(n==0) return; // Since we do not have any disk, we will not print anything

    // This will print the instructions to move disk from a to c via b while following the rules
    hanoi(n-1,a,c,b); 
    
    // Additional shifting
    cout<<n<<" "<<a<<" -> "<<b<<endl;
    
    // This will print the instruction to move disk from c to b via a while following the rules
    hanoi(n-1,c,b,a);

}

int main(){
    int n;
    cin>>n;
    hanoi(n);
    return 0;
}