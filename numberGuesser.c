/*
Random Number Guesser created by Ayaan Shaikh
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
srand(time(0));
int num = rand();
int max, guess;

do {
printf("What is the highest number you wish the range of numbers to be? ");
scanf("%d", &max);
} while (max < 1);

num = num % max;

do {
    printf("Enter your guess: ");
    scanf("%d", &guess);
    
    if (guess < num) {
        printf("The number you inputted is less than the random number!\n");
    } else if (guess > num) {
        printf("The number you inputted is greater than the random number!\n");
    }
} while (num != guess);

if (guess == num) {
    printf("Correct! The number is indeed %d!\n", num);
}
    return 0;
}