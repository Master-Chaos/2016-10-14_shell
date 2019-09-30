#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printhelp()
{
    printf("Help:\n");
    printf("2: gives out the current date and time.\n");
    printf("1: list all possible commands and gives a short description.\n");
    printf("0: exit the current program.\n");
}

void getDate()
{
    time_t t = time(NULL);
    struct tm date = *localtime(&t);
    printf("Currrent date is %d-%d-%d and the current time is %d:%d:%d.\n", date.tm_year + 1900, date.tm_mon + 1,date.tm_mday, date.tm_hour, date.tm_min, date.tm_sec);
}

int main()
{
    int inputletter = 1;
    printf("###########################################################################################################################################################\n");
    printf("######################################################### A very simple commandline #######################################################################\n");
    printf("###########################################################################################################################################################\n");
    printf("-->: ");
    while (inputletter != 0)
    {
        scanf("%d", &inputletter);

        switch (inputletter)
        {
            case 2: getDate(); break;
            case 1: printhelp(); break;
            case 0: exit(0);
            default: printf("WRONG COMMAND! Press 1 for help.\n");
        }
        printf("\n-->: ");
    }
    return 0;
}
