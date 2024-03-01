#include <iostream>

using namespace std;

int main () {
  int sum = 0, val = 0;
  
  for(;cin >> val;){
	  sum += val;
  }
  cout << "Sum is: " << sum << endl;
  return 0;  
}