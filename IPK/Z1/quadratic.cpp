#include <iostream>
#include <cmath>

//function quadratic() that solves quadratic equation given coefficients
int quadratic(double a, double b, double c){
  //catch a = b = c
  if (a == b && a == c) {
    std::cout << "Given coefficients do not yield an unambiguous result (a = b = c).\n";
    return 1;
  }
  //catch a = 0
  else if(a == 0) {
    std::cout << "a must not be equal to 0.\n";
    return 1;
  }
  //catch negative root argument as imaginary case
  else if(b*b - 4*a*c < 0) {
    std::cout << "Given coefficients yield an imaginary result.\n";
    return 1;
  }
  //print result
  else {
    double x_1 = -b/(2*a) + std::sqrt(b*b - 4*a*c)/(2*a);
    double x_2 = -b/(2*a) - std::sqrt(b*b - 4*a*c)/(2*a);
    std::cout << "x_1 = " << x_1 << "\n" << "x_2 = " << x_2 << "\n";
    return 0;
  }
}

int main(){
  //user input
  double a_in, b_in, c_in;
  std::cout << "Enter the coefficients a, b, c in the quadratic equation ax^{2} + bx + c = 0:\n";
  std::cout << "a = " << std::flush;
  std::cin >> a_in;
  std::cout << "b = " << std::flush;
  std::cin >> b_in;
  std::cout << "c = " << std::flush;
  std::cin >> c_in;
  //call function to calculate result
  if(quadratic(a_in, b_in, c_in) == 0){
    return 0;
  }
  else {
    // catches imaginary and ambiguous case to prompt no coefficients bt rerunning main() function
    std::cout << "Please check input and retry.\n";
    main();
  }
}