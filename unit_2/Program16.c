/*
    Find the output of the following program:

    main()
    {
        int a=0;
        if (a=0)
            printf("Hyderabad\n");
        else
            printf("Amaravathi\n");
    }
*/

#include<stdio.h>
main()
{
    int a=0;
    if (a=0)
        printf("Hyderabad\n");
    else
        printf("Amaravathi\n");
}

/*
    OUTPUT:
        Amaravathi
    (
        The system generated the following warning regarding the 'main':
        "warning: return type defaults to 'int' [-Wimplicit-int]
        main()
        ^~~~  "
    )
*/