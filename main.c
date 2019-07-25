#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    time_t seed;
    int choice = 0;  
    srand((unsigned)time(&seed));
    choice = rand()%3;
    switch(choice)
    {
        case 0:
        {
            printf("Kenneth's turn!\n");
            break;
        }
        case 1:
        {
            printf("Grahm's turn!\n");
            break;
        }
        case 2:
        {
            printf("Moe's turn!\n");
            break;
        }
        default:
        {
            printf("GAMMA RAY BURST!!!\n");
            exit(EXIT_FAILURE);
        }
    }
    return 0;
}