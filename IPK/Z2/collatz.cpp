#include <iostream>

void collatz(long number){
  //go through steps while given numbers are not reached
  do{
    //case even
    if (number % 2 == 0){
      number /= 2;
    }
    //case odd
    else{
      number *= 3;
      number += 1;
    }
  }
  while (number != 1 && number != 0 && number != -1 && number != -5 && number != -17);
  std::cout << "The result is: " << number << "\n";
}

int main(){
  //use long instead of int to test large 64 bit integers
  long number;
  std::cout << "Please input an integer number: \n";
  std::cin >> number;
  collatz(number);
  return 0;
}