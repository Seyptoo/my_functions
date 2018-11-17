#include <stdio.h>
#include <stdbool.h>

int len(char *params)
{
    int cpt = 0;

    while (params[cpt])
        
        if(!params[cpt] == cpt){
            cpt = cpt + 1;

        } else {
            return 0;
        }

    printf("%d\n", cpt);
}

int main(void)
{
    len("true");
    return 0;
}
