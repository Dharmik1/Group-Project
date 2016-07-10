#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
 
int numbers[]={1,2,3,4,5,6,7};
list<int> myList(7);

std::copy( numbers , numbers+7, myList.begin() );

for(list<int>::const_iterator it = myList.begin(); 
    it != myList.end(); it++)
{
    cout<<*it<<endl;
}
return 0;
}