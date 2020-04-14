#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int age, i;
    printf("Enter age :\n");
    scanf("%d",&age);
    if (age >= 13 && age <= 19)
    {
        bool teenager = true;
    }
    else
    {
        bool tenager = false;
    }
    
}

/* https://en.wikibooks.org/wiki/C_Programming/stdbool.h
 * https://en.wikipedia.org/wiki/Boolean_expression
 * https://overiq.com/c-programming-101/operator-precedence-and-associativity-in-c/
 */