#include <bits/stdc++.h>
using namespace std;

string processStr(string s) {
        string ans="";
        for(int i = 0; i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                ans.push_back(s[i]);
                cout<<ans<<endl;
            }
            
            else if(s[i]=='#'){
                string temp=ans;
                ans+=temp;;
                cout<<ans<<endl;
            }
            else if(s[i]=='*'){
                if(ans.size()>0){
                    ans.pop_back();
                    cout<<ans<<endl;
                }
            }
            else if(s[i]=='%'){
                if(ans.size()>0) 
                    reverse(ans.begin(),ans.end());
                cout<<ans<<endl;
            }
        }
        return ans;
    }

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    auto ans = processStr(s);
    cout<<endl;
    cout<<ans<<endl;
    return 0;
}
