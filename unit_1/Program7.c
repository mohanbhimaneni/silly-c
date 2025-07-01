//To find simple interest and compound interest
/*
                       (PTr)
    Simple Interest = -------
                        100
*/
/*
                          /  r \ t
    Compound Interest = P(1+--- )  - P
                          \ 100/
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float principle, time, rate, Simple_Interest, Compound_Interest;
    printf("Enter the Principle amount, Time period and rate respectively\n");
    scanf("%f %f %f",&principle, &time, &rate);
    Simple_Interest=(principle*time*rate)/100;
    Compound_Interest=principle*pow(1+rate/100, time)-principle;
    printf("The Simple Interest is :%f\n", Simple_Interest);
    printf("The Compound Interest is :%f\n", Compound_Interest);
    return 0;
}