#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid = fork(); //Krijojme nje process te ri
    int counter = 0;
    if (fork == 0)
    {
        counter += 10;
    }
    else if (fork > 0)
    {
        counter += 5;
    }
    else 
    {
        printnf("Procesi i ri nuk u krijua!");        
    }
    printf("Vlera e counter eshte: %d\n", counter);
    return 0;
}