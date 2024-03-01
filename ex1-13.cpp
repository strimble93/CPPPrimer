#include <iostream>

using namespace std;

int main () {
  int sum = 0, val = 50;
  int min = 0, max = 0;
  cout << "Please input 2 numbers, each number in this range will then be printed." << endl;
  cin >> min >> max;
  cout << endl;
  
  if (min>max){
	  val = min;
	  min = max;
	  max = val;
  }
  
  for(;min<=max;++min){
	  cout << min << endl;
  }
  return 0;  
}