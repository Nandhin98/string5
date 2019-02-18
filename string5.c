
#include <bits/stdc++.h> 
using namespace std; 
void solve(string s, int k) 
{ 
    int count = 0, length = 0, pos = 0; 
  
    
    map<char, int> m; 
  
    for (int i = 0; i < s.length(); i++) {
      
      m[s[i]]++; 
        length++; 
        if (length > k){
            m[s[pos++]]--; 
            length--; 
        } 
  
        if (length == k && m[s[i]] == length) 
            count++; 
    } 
  
    cout << count << endl; 
} 
  
int main() 
{ 
    string s = "aaaabbbccdddd"; 
    int k = 4; 
  
    solve(s, k); 
  
    return 0; 
} 
