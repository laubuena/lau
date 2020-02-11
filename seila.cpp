#include <stdio.h>
#include <stdlib.h>


main()
{ float p , v , r , n , t ;
    
    printf("\ndigite numero de mols:\n");
    scanf("%f",&n);
    printf("\ndigite volume:\n");
    scanf("%f",&v);
    printf("\ndigite temperatura:\n");
    scanf("%f",&t);
    r= (8,8)*1/(10*10*10*10*10);
    p=(r*n*t)/v;
    printf("\n\npressao eh : %.5f",p);

		system("PAUSE");
}

