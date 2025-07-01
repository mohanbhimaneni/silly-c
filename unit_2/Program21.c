/*
    Find the output of the following program:

    main()
    {
        int a=1,b;
        switch(a)
        {
            case 1: b=10;
            case 2: b=20;
            case 3: b=30;
        }//switch
        printf("b=%d",b);
    }//main
*/
#include<stdio.h>
main()
{
    int a=1,b;
    switch(a)
    {
        case 1: b=10;
        case 2: b=20;
        case 3: b=30;
    }//switch
    printf("b=%d",b);
 }//main

 /*
    OUTPUT:
        b=30
 */