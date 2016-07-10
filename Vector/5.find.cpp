#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 using namespace std;

int main()
  {
    // Creating a vector containing integers
    vector<int> values = {1,2,3,4,5,6,7};
    
    vector<int>::const_iterator it;
    
     values.push_back(10);
     values.push_back(15);
     values.push_back(18);
     values.push_back(19);
     
    int number;
    cout<< "Enter the number you want to find"<<endl;
    cin>>number;
     
     it = find (values.begin(), values.end(), number);
        if (it != values.end())
    cout << "Element "<< number << " found in values"<<endl;
  else
    cout << "Element "<< number << " not found in values" <<endl;;
     
}