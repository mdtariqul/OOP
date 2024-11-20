#include <iostream>
#include "brac bank.h"
using namespace std;

int main()
{
  bracbank a(1000);
  citybank b(2000);

  brac_print(a);
  city_print(b);

print(b,a);

b.credit_trans(a);

brac_print(a);

return 0;
}
