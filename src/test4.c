#include <stdio.h>
int main()
{
    double x, y; //Змінні
    x = 2;
    if (x>1) //Якщо х більше 1
    {
        y = 1;
    }
    else if (x < -1) //Якщо х меньше -1
    {
        y = -1 / x;
    }
    else //Для х від -1 до 1
    {
        y = x * x;
    }
}
