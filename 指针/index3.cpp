#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2;
    int n = 4;
    char *pc1, *pc2;
    p1 = (int *)10000;
    p2 = (int *)20000;
    cout << "1) " << p2 - p1 << endl; // (20000 - 10000) / sizeof int
    pc1 = (char *)p1;
    pc2 = (char *)p2;
    cout << "2) " << pc1 - pc2 << endl; // (10000 - 20000) / sizeof char
    return 0;
}