#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    //input number of queries 
    long int N;
    cin >> N;
    stack <long int> list_items; //make two stack of track and list 
    stack <long int> track_items;
    
    for( long int i=0;i<N;i++)
        {
        int query_type;
        cin >> query_type;
        switch(query_type){  // using 3 cases to find 1) push element 2) pop element and 3) find maximum element 
        case 1:
            long int value;
            cin >> value;
            if(list_items.empty()){
            list_items.push(value);
            track_items.push(value);    
            }
            else{
                list_items.push(value);
                long int a=track_items.top();
                if(a>value){
                    track_items.push(a);
                  }
                else{
                    track_items.push(value);
                }
                }
            break;
        case 2:
            if(!list_items.empty()){
            list_items.pop();
            track_items.pop();
            }
            break;
        case 3:
            cout<< track_items.top()<<"\n";
            break; 
            };
        }
    return 0;
}
