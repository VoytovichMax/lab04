#include <stdio.h>
int main()
{
    int k, m, n, dd;//Змінні
    k = 2;
    m = 3;
    n = 1;
    if (k < n && k < m) //Якщо найменьше число k
    {
        if (n < m) //Якщо змінні йдуть так k < n < m
        {
            dd = m;
            m = n;
            n = dd;
        }
        else //Якщо змінні йдуть так k < m < n, або вони однакові
        {
            printf("Умова вже виконена");
        }
    }
    else if (m < k && m < n) //Якщо найменьше число m 
    {
        if (k < n) //Якщо змінні йдуть так m < k < n
        {
            dd = k;
            k = m;
            m = k;
        }
        else if (n < k) //Якщо змінні йдуть так m < n < k
        {
            dd = k;
            k = m;
            m = n;
            n = dd;
        }
        else //Якщо змінні n і k однакові
        {
            k = m;
            m = n;
        }
    }
    else if (n < k && n < m)  //Якщо найменьше число n
    {
        if (k < m) //Якщо змінні йдуть так n < k < m
        {
            dd = m;
            m = k;
            k = n;
            n = dd;
        }
        else if (m < k) //Якщо змінні йдуть так n < m < k
        {
            dd = n;
            n = k;
            k = dd;
        }
        else //Якщо змінні m і k однакові
        {
            k = n;
            n = m;
        }
    }
    else //Якщо числа однакові
    {
    	printf("Умова вже виконена");
    }
}
