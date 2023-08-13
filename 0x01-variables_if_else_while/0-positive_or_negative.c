#include <time.h>
/**
 * main - generate random numbers to detect -ve or +ve
 *
 * Return : always (0)
 *
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number: %d\n", n);
    
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }
    
    return (0);
