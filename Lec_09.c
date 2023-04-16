#include <stdio.h>

int main()
{
    char c1, c2;
    printf("Enter two charaters : ");
    scanf("%c", &c1);
    scanf("%c", &c2); // reading a line break '\n'

    // The second character is not read
    printf("c1 = %c \nc2 = %c end of characters\n", c1, c2);
    return 0;
}