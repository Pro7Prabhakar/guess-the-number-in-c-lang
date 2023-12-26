#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess, number, nGuesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // For 1 to 100 random numbers
    // printf("number=%d", number);

    printf("Guess the number between 1 to 100.\n--> ");
    scanf("%d", &guess);
    do
    {
        if (guess > number)
        {
            printf("Lower number please!\n");
            printf("Try again--> ");
            scanf("%d", &guess);
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
            printf("Try again--> ");
            scanf("%d", &guess);
        }
        
        nGuesses++;
    } while (guess != number);
        {
            printf("Congratulations!!! You guessed the correct number in %d attempts.", nGuesses);
        }
    return 0;
}