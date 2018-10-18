/**
* Program that performs Collatz conjecture check for
* a given input provided by user. It then displays number
* of iterations of the termination function that performs
* the check until 1 is reached.
*
* Completion time: (20 min)
*
* @author Kyle Jeffreys, Rubert Acuna
* @version (1.0)
*/

////////////////////////////////////////////////////////////////////////////////
//INCLUDES

#include <stdio.h>
#include <stdlib.h>
int termination(int);
/*
 * 
 */
int main(int argc, char** argv) {
    int input;
    printf("Give an integer for Collatz conjecture check\n");
    scanf("%d", &input);
    printf("%d iterations are executed for this input", termination(input));
    return (EXIT_SUCCESS);
}

int termination(int input)
{
    int iterations = 0;
    
    while(input != 1)
    {
        if(input % 2 == 0)
        {
            input = input / 2;
        }
        else
        {
            input = (3*input) +1;
        }
        iterations++;
    }
    
    return iterations;
}

