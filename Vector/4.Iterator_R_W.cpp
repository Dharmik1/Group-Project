#include <iostream>
#include <vector>
#include <string>
 using namespace std;
int main()
{
   int num;
    // Creating a vector containing integers
    vector<int> values = {1,2,3,4,5,6,7};
   
    vector<int>::iterator it;
   
    cout<<"Enter the number you want to insert at the start of the vector"<<endl;
    cin>>num;
    it = values.begin();
    it = values.insert ( it , num );
 
    // Iterate and print values of vector
    for( it= values.begin(); it != values.end(); ++it) {
         cout << *it << '\n';
    }
}