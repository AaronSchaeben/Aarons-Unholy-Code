#include <iostream>

int iterative(int q, int n){
  long out = q;
  //repeat multiplication with q n-times
  for(int i=1; i<n; i++){
    out *= q;
  }
  return out;
}

int recursive(int q, int n){
  //reduce number of iterations by using q^{2n} = q^n * q^n
  if(n%2 == 0 && n!=0){
    return recursive(q, n/2) * recursive(q, n/2);
  }
  //break condition
  else if(n>1){
    return q*recursive(q, n-=1);
  }
  else{
    return q;
  }
}

int main(){ 
  int q, n;
  std::cout << "Declare integers q, n>0 to calcualte q^n. \n" << "q = ";
  std::cin >> q;
  std::cout << "n = ";
  std::cin >> n;
  if(n<0){
    std::cerr << "Error: n must be a positive integer. \n";
    return 1;
  }
  std::cout << recursive(q, n);
  return 0;
}