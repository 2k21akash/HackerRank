#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
    std::string s1, s2;
    // scanf("%c", &s1);
    std::cin >> s1;
    std::cin >> s2;
    // scanf("%c", &s2);
    printf("%d %d\n", s1.size(), s2.size());
    std::string res = s1 + s2;
    // printf("%c", &res);
    std::cout << res << std::endl;

    char first = s1[0];
    s1[0] = s2[0];
    s2[0] = first;

    // printf("%c %c", s1, s2);
    std::cout << s1 << " " << s2 << std::endl;
    return 0;
}
