#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
string check_string(string s)
    {
    stack<char> query_char;
    
    for(int i=0; i < s.size(); i++)
        {
        switch(s[i]){
            case '(':
            case '{':
            case '[':
            query_char.push(s[i]);
            break;
            
            case ')':
            if(query_char.empty()||query_char.top()!='('){
                return "NO";
            }
            else{
                query_char.pop();
                }
                break;
            
            case '}':
            if(!query_char.empty()&&query_char.top()=='{'){
            query_char.pop();
            }
            else{
                return "NO";
            }
            break;
            case ']':
            if(!query_char.empty()&&query_char.top()=='['){
            query_char.pop();
            }
            else{
                return "NO";
            }
            break;
          }
        }
    if(query_char.empty()){
    return "YES";
    }
    else{
    return "NO";
    }
   }

int main(){
    long int t;
    cin >> t;
   for(long int a0 = 0; a0 < t; a0++)
    {
        string s;
        cin >> s;
        cout << check_string(s) << "\n";
   }
  }
