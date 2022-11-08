#include <iostream>

int fibonacci(int N){
  long last = 0;
  long curr = 1;
  std::cout << "f_1 = 0\n";
  std::cout << "f_2 = 1\n";
  for (int i=3; i<=N; i++){
    curr = last + curr;
    last = curr - last;
    std::cout << "f_" << i << " = " << curr << "\n";
  }
  return(curr);
  
}

int main(){
  int N;
  std::cout << "Calculate the Fibonacci Series up to N = ";
  std::cin >> N;
  fibonacci(N);
  return 0;
}