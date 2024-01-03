#include <iostream>
using namespace std;
string remove_p(string s){
    int j=0;
    string res="";
    for(int i=0;i<s.size();i++){
        if(s[i]==41){
            j--;
        }
        if(j!=0){
            res=res+s[i];
        }
        if(s[i]==40){
            j++;
            
        }
            
    }
    
    return res;
}
int main() {
    // Write C++ code here
 string s="(()())(()())(())";
 string ans=remove_p(s);
 cout<<ans;
}