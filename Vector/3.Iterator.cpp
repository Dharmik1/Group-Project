#include <iostream>
#include <vector>
#include <string>
 using namespace std;
int main()
{
    // Creating a vector containing integers
    vector<int> values = {1,2,3,4,5,6,7};
    vector<int>::const_iterator it;
    
 
    // Iterate and print values of vector
    for( it= values.begin(); it != values.end(); ++it) {
        cout << *it << '\n';
    }
}