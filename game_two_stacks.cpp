#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int g;
    cin >> g;//number of games 
    for(int a0 = 0; a0 < g; a0++){
        int n; //element in stack A
        int m; //element in stack B
        int x; //Max sum for the game 
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        //make two vector of sum where sum won't reach above the X
        
        vector<int> a_sum;
        vector<int> A;
        int sum_of_a=a[0];
        for(int i=0;i<n;i++){
            a_sum.push_back(sum_of_a);
            A.push_back(a[i]);
            sum_of_a+=a[i+1];
            if(sum_of_a > x)
                break;
        }
         
         vector<int> b_sum;
         vector<int> B;
         int sum_of_b=b[0];
         for(int i=0;i<m;i++){
            b_sum.push_back(sum_of_b);
            B.push_back(b[i]);
            sum_of_b+=b[i+1];
            if(sum_of_b > x)
                break;
        }
    //check if input went good in the vector of sum  
   /*     for(int i=0;i<b_sum.size();i++){
            cout << b_sum[i] << "\n";
        } */
        int running_sum=0;
        int counter=0;
   
         while (running_sum < x){
  
         int difference_in_stack= a_sum.size() - b_sum.size();
         cout << difference_in_stack << "\n"; // check the difference in stack 
         counter+=1;  
             if (difference_in_stack >=0){
                 running_sum+=A[0];
                 A.erase(A.begin());
                 a_sum.erase(a_sum.begin());
                 for(int k=b_sum.size();k>0;k--){
                     if(b_sum[k]<(x-running_sum)){
                         break;
                     }
                     else{
                     b_sum.pop_back();
                     B.pop_back();
                     }
                 }
             }
            else {
                 running_sum+=B[0];
                 B.erase(B.begin());
                 b_sum.erase(b_sum.begin());
                 for(int k=a_sum.size();k>0;k--){
                     if(a_sum[k]<(x-running_sum)){
                         break;
                     }
                     else{
                     a_sum.pop_back();
                     A.pop_back();
                     }
                 }
             }             
         } // while loop ends here 
    //cout << counter << "\n";
    }
    return 0;
}
