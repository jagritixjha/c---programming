#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int a;
  long int b;
  char c;
  float d;
  double e;
  cin >> a >> b >> c >> d >> e;
  printf("%i\n%ld\n%c\n%.3f\n%.9lf", a, b, c, d, e);
  return 0;
}
