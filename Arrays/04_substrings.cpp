#include<bits/stdc++.h>
using namespace std ;

int main(){
string s="abc";
string ans="";
  for(int i = 0; i < s.size(); i++) {
        for(int j = i; j < s.size(); j++) {
            ans += s.substr(i, j - i + 1);
        }
    }
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<",";
}
return 0;
}