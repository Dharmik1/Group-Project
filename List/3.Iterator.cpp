#include <iostream>
#include <list>
using namespace std;
int main()
{
int b_num;
int e_num;

list<int> myList;
list<int>::const_iterator it;

myList.push_back(1);
myList.push_back(8);
myList.push_back(9);
myList.push_back(7);
myList.push_back(2);



for( it= myList.begin();  it != myList.end(); it++)
{
    cout<<*it<<endl;
}
return 0;
}  
  
