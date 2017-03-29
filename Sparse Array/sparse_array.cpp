#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,Q;
    //N=number of strings and Q=Number of queries 
    cin >> N;
    //define the   
    vector<string> num_strings(N);
    
    for(int i=0;i<N;i++){
        cin >> num_strings [i];
       }
    //input number of queries 
    cin >> Q;
    
    vector<string> num_queries(Q);
    vector<int> counter(Q);
 
      for(int j=0;j<Q;j++){
        cin >> num_queries[j];
        }     
          
          for (int i=0;i<Q;i++){
                for(int k=0;k<N;k++){
                     if(num_strings[k]==num_queries[i])
                     counter[i]=counter[i]+1;
                  }
              }
      
          for(int j=0;j<Q;j++){
              cout << counter[j] << "\n";
              }

    
    return 0;
}