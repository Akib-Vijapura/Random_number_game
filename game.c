#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random, guess, attempt = 1;
    srand(time(0));
    random = rand() % 100 + 1;

    //  printf("The randome number is : %d",random);

    do
    {
        printf("Enter your number between 1 to 100\n");
        scanf("%d", &guess);
        if (random < guess)
        {
            printf("Please enter lower number!\n");
        }
        else if (random > guess)
        {
            printf("Please enter higher number\n");
        }
        else
        {
            printf("you guessed it in %d attempt\n", attempt);
        }
        attempt++;
    } while (guess != random);

    return 0;
}