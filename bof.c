#include <stdio.h>
#include <stdlib.h>

void    secret_func()
{
    system("/bin/sh");
}


int     main(void)
{
    char buff[40];
    setvbuf(stdout, NULL, _IONBF, 0);
    printf("3arf gha t solvi ma3arfch wlah la solviti\nwa golihom\n");
    fgets(buff, 400, stdin);
    return (0);
}
