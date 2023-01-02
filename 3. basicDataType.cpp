#include <stdio.h>

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    // std::cin >> a >> b >> c >> d >> e;
    // std::cout << a << std::endl << b << std::endl << c << std::endl << d << std::endl << e << std::endl;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d \n%ld \n%c \n%.3f \n%.9lf", a, b, c, d, e);
    return 0;
}