#include <iostream>
#include <list>
using namespace std;
int main()
{
int b_num;
int e_num;

list<int> myList;
list<int>::iterator it;

myList.push_back(1);
myList.push_back(8);
myList.push_back(9);
myList.push_back(7);
myList.push_back(2);


cout<<"Enter the number you want to insert at the start of list"<<endl;
cin>>b_num;
it=myList.begin();
myList.insert(it,b_num);

cout<<"Enter the number you want to insert at the end of list"<<endl;
cin>>e_num;
it=myList.end();
myList.insert(it,e_num);

for( it= myList.begin();  it != myList.end(); it++)
{
    cout<<*it<<endl;
}
return 0;
}  
  
