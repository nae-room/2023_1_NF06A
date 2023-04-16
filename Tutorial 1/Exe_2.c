/*
Here's the following code:

• Compile and execute the program.
• Does it work? why?
• Add a break point to the line that need to be changed.
• Determine with the help of the debugger the necessary change.
*/

#include <stdio.h>

int main()
{
    int i=0;
    int j=5;
   
    printf("Division de j par i = %d", j/i);

    return 0;
}

// 실행 안됨 왜냐? 0으로 나누니까