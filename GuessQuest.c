#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess=1;
    srand(time(0));
    number = rand() % 1000 + 1;
    do
    {
        printf("\n Guess the number between 1 and 1000 : ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("\n Lower number please!");
        }
        else if (guess < number)
        {
            printf("\n Higher number please!");
        }
        else
        {
            printf("\n You guessed the correct number after %d attempt(s)!",nguess);
        }
        nguess++;
    } while (guess!=number);
    return 0;
}