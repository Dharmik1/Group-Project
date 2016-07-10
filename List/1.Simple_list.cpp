#include <iostream>
#include <list>
using namespace std;
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
list<int>::const_iterator it;

for( it= myList.begin(); 
    it != myList.end(); it++)
{
    cout<<*it<<endl;
}
return 0;
} 