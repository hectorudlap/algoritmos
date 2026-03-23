/*
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a,b,r;
    int buenas=0,malas=0;
    float score;
    srand(time(NULL));

    do{
        a= rand()%10+1;
        b= rand()%10+1;
        printf("\nCuánto es %d por %d: ",a,b);
        scanf("%d",&r);
        if((a*b)==r)
        {
            printf("Correcto!");
            buenas++;
        }
        else if (r!=0)
        {
            printf("Ups, incorrecto, la respuesta es %d \n",(a*b));
            malas++;
        }

    }while(r!=0);
    score = ((float)buenas/(malas+buenas))*100;
    printf("Tu calificación es %.1f\n",score);
    printf("Bye, estudia mucho!");
}