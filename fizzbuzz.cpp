#include <iostream>
using namespace std;

int main() {


  //for loop for print number 1 to 100
  for (int i=1; i <=100; i++) {
    //if loop to check if both 3 and 5 satify the condition
    if (i%3 == 0 && i%5 == 0) {
        //print fizz buzz when it's a multiple of 3 and 5
        cout << "FizzBuzz \n";
    } else if (i%3 == 0) {
        //print fizz when it's multiple of 3
        cout << "Fizz \n";
    } else if (i%5 == 0){
        //print buzz when it's multiple of 5
        cout << "Buzz \n";
    } else {
        //print number when its not multiple of 3 or 5
        cout << i << "\n";
    }
    
  }
  return 0;
}
