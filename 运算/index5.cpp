#include <iostream>
using namespace std;
/**
 * @brief 球体积，用double，float计算结果偏差较大
 * 
 * @return int 
 */

int main()
{
    double r;
    scanf("%lf", &r);
    double v = 4 / 3.0 * 3.14 * r * r * r;
    printf("%.2f", v);
    return 0;
}