// ConsoleApplication4.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>


int main()
{
    // Zad 8
    int n; scanf_s("%d", &n);
    if (n < 2)
    {
        printf("Count of numbers must be bigger than 1.\n");
        return main();
    }
    int c;
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf_s("%d", &c);
        if (i < 2)
        {
            d = c;
        }
        else if (c < d)
        {
            d = c;
        }
    }
    printf("%d", d);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
