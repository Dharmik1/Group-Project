#include <iostream>
#include <vector>
#include <string>
 using namespace std;
int main()
{
    // Create a vector containing integers
    vector<int> values = {1,2,3,4,5,6,7} ;

 
    // Iterate and print values of vector
    for(int n : values) {
        cout << n << '\n';
    }
}