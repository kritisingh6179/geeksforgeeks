// Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

// Example 1:

// Input:
// S = i.like.this.program.very.much
// Output: much.very.program.this.like.i
// Explanation: After reversing the whole
// string(not individual words), the input
// string becomes
// much.very.program.this.like.i

#include<bits/stdc++.h>
using namespace std;
 
class Solution{
  public:
  string reverseWords(string s){
    string temp="";
    int i=0;
    vector<string> vec;
    for(int i=0;i<s.size();i++){
      if(s[i]!='.'){
        temp+=s[i];
      }
      else{
        vec.push_back(temp);
        temp="";
      }
    }
    vec.push_back(temp);
    string ans="";
    for(int i=vec.size()-1;i>=0;i--){
      ans+=vec[i];
      if(i!=0)ans+=".";
    }
    return ans;
  }
};
int main(){
  int t;
  cin>>t;
  while(t--){
    striing s;
    cin>>s;
    Solution obj;
    cout<<obj.reverseWords(s)<<endl;
  }
}
