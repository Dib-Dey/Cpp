/* Dibyendu Dey
* March 15, 2017
*------------------------------------------------------------------------------------------------------------------------------------
* Suppose there is a circle. There are N petrol pumps on that circle. Petrol pumps are numbered 1 to N. 
* You have two pieces of information corresponding to each of the petrol pump: (1) the amount of petrol that particular petrol pump will
* give, and (2) the distance from that petrol pump to the next petrol pump.
* Initially, you have a tank of infinite capacity carrying no petrol. You can start the tour at any of the petrol pumps. 
* Calculate the first point from where the truck will be able to complete the circle. Consider that the truck will stop at each of the 
* petrol pumps. The truck will move one kilometer for each litre of the petrol.
* ------------------------------------------------------------------------------------------------------------------------------------
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
//solve the problem using structure insead of queue  
struct pump{
    int petrol;
    int distance;
    struct pump *next; //have pointer 
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N; //number of pump
    cin >> N;
    queue<struct pump> address;
    for(int i=0;i<N;i++){
        struct pump tmp;
        cin >> tmp.petrol >>tmp.distance;
        address.push(tmp);
    }
   int help=0;
   int counter=0;
 
   for(int i=0;i<N;i++){
       struct pump tmp1=address.front();
        if(tmp1.petrol+help>tmp1.distance){
            help+=tmp1.petrol-tmp1.distance;
            address.pop();
        }
       else{
           help=0;
           address.pop();
           counter=i+1;     
       }
      }
 cout << counter << "\n";   
    return 0;
}