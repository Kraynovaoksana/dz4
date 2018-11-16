#include <iostream>
#include <cstdlib> // для srand и rand
#include <ctime> // для time

void swap(int & a, int & b){
  a += b;
  b = a - b;
  a -= b;
}

// a - max, c - min
void fun(int & a, int & b, int & c) {
  if (a < b) { swap(a, b); }
  if (a < c) { swap(a, c); }
  if (b < c) { swap(b, c); }
}

// a - min, c - max
void fun2(int & a, int & b, int & c) {
  if (a > b) { swap(a, b); }
  if (a > c) { swap(a, c); }
  if (b > c) { swap(b, c); }
}

int main() {
  srand(time(NULL));
  int a = rand(), b = rand(), c = rand();
  std::cout << "a: " << a << std::endl << "b: " << b << std::endl <<
    "c: " << c << std::endl << std::endl;
  fun(a, b, c);
  std::cout << "a: " << a << std::endl << "b: " << b << std::endl <<
    "c: " << c << std::endl << std::endl;
  fun2(a, b, c);
  std::cout << "a: " << a << std::endl << "b: " << b << std::endl <<
    "c: " << c << std::endl << std::endl;
  return 0;
}
