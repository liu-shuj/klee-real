/*
 * First KLEE tutorial: testing a small function
 */

#include <klee/klee.h>

double get_sign(double x) {
  if (x == 0.0)
     return 0.0;
  
  if (x < 0.0)
     return 2.0;
  else 
     return 1.0;
} 

int main() {
  double a;
  klee_make_symbolic(&a, sizeof(a), "a");
  return get_sign(a);
} 
