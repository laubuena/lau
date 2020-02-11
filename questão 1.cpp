#include <stdio.h>
#include <stdlib.h>

main()
{  
    float ti , tf ,t , p;
    printf("\nDIGITE T final e t inicial");
    scanf("%f %f",&tf , &ti);
    for(ti=t;t<=tf;t++)
	{
	p=(0.082*t)/4;
	printf("\npressao vai ser %.2f",p);
	}
	system("PAUSE");
}
