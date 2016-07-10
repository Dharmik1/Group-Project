#include <iostream>
#include <vector>

using namespace std;

int main(){
  //declaring a vector and variable
  vector<int> vec;
  int a;

//adding elements to the vector
  for(a=0; a<5; a++){
    vec.push_back(a);
  }

//printing out the values in the vector
  for(a = 0; a < 5; a++){
      cout << "value of vec [" << a << "] = " << vec[a] << endl;
   }

   return 0;
}