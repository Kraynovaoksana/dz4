#include <iostream>
int main() {
  int a = 4;
  float b = 3.4;
  double c = 56;
  std::cout << "a=" << a << std::endl;
  std::cout << "b=" << b << std::endl;
  std::cout << "c=" << c << std::endl;
  std::cout << "Адрес a=" << &a << std::endl;
  std::cout << "Адрес b=" << &b << std::endl;
  std::cout << "Адрес c=" << &c << std::endl;
  int *pa = &a;
  float *pb = &b;
  double *pc = &c;
  *pa += 2;
  *pb += 2;
  *pc += 2;
  std::cout << "*pa + 2=" << *pa<< std::endl;
  std::cout << "*pb + 2=" << *pb<< std::endl;
  std::cout << "*pc + 2=" << *pc<< std::endl;
  int *p;
  p = pa;
  std::cout << *p << std::endl;
  p = (int*)pb;
  std::cout << *p << std::endl;
  p = (int*)pc;
  std::cout << *p << std::endl;
  return 0;
}
