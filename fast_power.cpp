#include <iostream>
#include <conio.h>

using namespace std;

double fast_power(double a, int n){
    if (n == 0) return 1;
    if (n % 2 == 0)
        return fast_power(a * a, n / 2);
    else return a * fast_power(a, n - 1);
}
int main() {
  double a; int n;
  cin>>a>>n;
  cout<<fast_power(a, n);

  _getch();
  return 0;
//}