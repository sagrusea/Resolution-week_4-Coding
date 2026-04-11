#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {
    double a, b, answer;
    char operator;
    const char *error = NULL;
    if (argc = 4) 
    {
        a = atof(argv[1]);
        operator = argv[2][0];
        b = atof(argv[3]);

    } else 
    {
    printf("enter first number:\n");
    scanf("%lf", &a);
    
    printf("enter operator:\n");
    scanf(" %c", &operator);

    printf("enter second number:\n");
    scanf("%lf", &b);
    }
   

    if (operator == '+')
    {
        answer = a + b;
    } else if (operator == '-')
    {
        answer = a - b;
    } else if (operator == '*' || operator == 'x')
    {
        answer = a * b;
    } else if (operator == '/')
    {
        answer = a / b;
    } 
    else
    {
        error = "I dont know this operation!";
    }
    
    if (error)
    {
        printf(error);
    }
    else 
    {
        printf("Answer: %lf", answer);
    }
    
    
}