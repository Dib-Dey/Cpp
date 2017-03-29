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
long int sum_vector(vector<long int> &x){
    long int sum=0;
    for(long int i=0;i<x.size();i++){
        sum+=x[i];
        }
    return sum; 
}


int main(){
    long int n1;
    long int n2;
    long int n3;
    cin >> n1 >> n2 >> n3;
    vector<long int> h1(n1);
    for(long int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
    }
    vector<long int> h2(n2);
    for(long int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
    }
    vector<long int> h3(n3);
    for(long int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
    }
    long int height1=sum_vector(h1);
    long int height2=sum_vector(h2);
    long int height3=sum_vector(h3);
    
    while((height1!=height2 || height2!=height3) && height1>0 && height2>0 && height3>0){
           long int new_height1=height1-h1[0];
           long int new_height2=height2-h2[0];
           long int new_height3=height3-h3[0];
        
             if(new_height1 >=new_height2 && new_height1 >=new_height3){
                h1.erase(h1.begin());
                height1=new_height1;
             }
        else{
              if(new_height2 >=new_height1 && new_height2 >=new_height3){
                h2.erase(h2.begin());
                height2=new_height2;
              }
            else{
                h3.erase(h3.begin());
                height3=new_height3;
                }
            }
           }
        
      /*  print (h1);
        print (h2);
        print (h3);*/
   
       if(height1==0 || height2==0 || height3==0)
       cout << "0";
      else
       cout << sum_vector(h1);  
    return 0;
}
