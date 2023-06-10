#include <iostream>
 int i, n;
bool is_prime = true;
void check_prime(int n)
{
    if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (i = 2; i <= n/2; ++i) 
  {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    std::cout << n << " is a prime number";
  else
    std::cout << n << " is not a prime number";
}

int main() {
   
   std::cout << "Enter a number ";
  std::cin >> n;
   check_prime(n);
 

  return 0;
}
