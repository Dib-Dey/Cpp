#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main() {
    int N;//number of query
    cin >> N;
    int q; //type of query
    //vector<char> items;
    stack<string> items;
    string S=""; //empty string
    string to_append;
    for(int i=0;i<N;i++)
        {
         cin >> q;
        switch(q){
            case 1: //append
                items.push(S);
                cin >> to_append;
                S+=to_append;
                break;
            case 2: //delete
                items.push(S);
                int k; //delete last k characteres from the current string  
                cin >> k;
                S.erase(S.size()-k,k);
                break;
            case 3: //print
                int a; //the number-th character to print
                cin >> a;
                cout << S[a-1] << "\n";
                break;
            case 4://undo
               if(!items.empty()){
               S=items.top();
               items.pop();
               }
              else{
                  S="";
              }
               break;
           }
       // cout << i << " " << "testing --> " << S << " compared to the stack top "<<items.top()<< '\n';
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
