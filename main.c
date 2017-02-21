#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x[10],i;

    for(i=0;i<=5;i++){
        printf("Please enter the number : ");
        scanf("%d",&x[i]);
    }
    for(i=0;i<=5;i++){
        printf("%i value is : %i \n",i,x[i]);

    }
    return 0;
}
