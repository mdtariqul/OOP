#include <iostream>
#include "quad.h"

using namespace std;

int main()
{
    quad sq1(10);
    quad sq2(10,20);
    quad sq3(10,20,90);
    cout << "for sq1  "<<"area="<<sq1.get_area()<< "  peri="<<sq1.get_pre() << endl;
    cout << "for sq2  "<< "area="<<sq2.get_area()<< "  peri="<<sq2.get_pre() << endl;
    cout <<"for sq3  "<<"area="<<sq3.get_area()<< "  peri="<<sq3.get_pre() << endl;
    return 0;
}
