#include <iostream>
using namespace std;
int main() {
  int a,b,c;
  cin >> a >> b >>c;
  int t=0;
  if(a==b && a==c)
  {t=3;}
    
  if(((a==c || b=c) && a!=b))
  {t=2;}
  if((a==b && (a!=c || b!=c)))
  {t=2;}
  cout << t;
  return 0;
}
