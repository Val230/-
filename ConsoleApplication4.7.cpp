// ConsoleApplication4.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
    // Zad 9
    int a; scanf_s("%d", &a);
    int b; scanf_s("%d", &b);
    if (a >= b || a <= 0 || b <= 0)
    {
        printf("Starter number(a) must be less then ending number(b) and both must not be 0.\n");
        return main();
    }
    for (int i = a; i <= b; i++)
    {
        if (i % 10 == 3)
        {
            printf("%d ", i);
        }
    }
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
