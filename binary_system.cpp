#include <iostream>
#include <conio.h>
 
using namespace std;

void bin_s(int n){
  if (n >= 2)
    bin_s(n / 2);
  cout << n % 2;
}
 
int main(){
  int n;
  cin >> n;
  bin_s(n);

  _getch();
  return 0;
}