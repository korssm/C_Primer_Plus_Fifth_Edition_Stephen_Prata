// распечатывает число 100 в десячичной, восьмеричной и шестнадцатеричгой  системах счисления
#include <stdio.h>
int main()
{
    int x = 100;

    printf("десятичное = %d; восьмеричное = %o; шестнадцатеричное = %x\n", x, x, x);
    printf("десятичное = %d; восьмеричное = %#o; шестнадцатеричное = %#x\n", x, x, x);
 
    return 0;
}