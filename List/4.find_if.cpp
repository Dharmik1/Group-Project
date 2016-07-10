#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

bool IsOdd (int i) {return ((i%2)==1);}

int main()
{

list<int> myList;
myList.push_back(1);
myList.push_back(1);
myList.push_back(8);
myList.push_back(9);
myList.push_back(7);
myList.push_back(8);
myList.push_back(2);
myList.push_back(3);
myList.push_back(3);


list<int>::iterator it = find_if (myList.begin(), myList.end(), IsOdd);
  cout << "The first odd value is " << *it << '\n';

return 0;
} 