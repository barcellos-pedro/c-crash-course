#include <stdio.h>   // for print statements
#include <stdbool.h> // boolean type

int main()
{
    int age = 26;
    float score = 7.8;
    char grade = 'A';
    char name[] = "Pedro";
    bool alive = false;

    printf("Hello %s\n", name);
    printf("I am %d years old\n", age);
    printf("Your score is: %f (or) %0.1f\n", score, score);
    printf("Your grade is: %c\n", grade);
    printf("Am i alive? %d", alive);

    return 0;
}