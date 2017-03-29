#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N; //number of queries
    cin >> N;
    stack<int> stack_order;
    stack<int> stack_reverse_order;
    for(int i=0; i < N; i++){
        int Q;
        cin >>Q; //type of queries 
        if(Q==1){
            int input;
            cin >> input;
            stack_order.push(input);
        }
        else{
            if(stack_reverse_order.empty()){
            while(!stack_order.empty()){
            stack_reverse_order.push(stack_order.top());
            stack_order.pop();
             } 
            }
           if(!stack_reverse_order.empty()){
                if(Q==2)
                stack_reverse_order.pop();
                if(Q==3)
                cout << stack_reverse_order.top() << "\n";
                }
            }    
        }
    return 0;
}
