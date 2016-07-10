#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 using namespace std;
int main()
{
   int num;
   int mycount;
    // Creating a vector containing integers
    vector<int> values = {1,2,3,4,5,4,7,8,5,2,1,4,7,3,9,5,2,1,4,5,1,4,6,4,5,9,7,3,2,4,3,5,3};
   
    vector<int>::iterator it;
   
    cout<<"Enter the number you want to count int the vector"<<endl;
    cin>>num;
  
    mycount = count (values.begin(), values.end(), num);
    cout << num  << " appears " << mycount  << " times.\n";
 
    
}