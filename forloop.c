#include <stdio.h>
void main()
{     
    int j,n,i,mul=1;
    
      
    
	printf("The first 10 natural numbers are:\n");
	
    for(j=1;j<=8;j++){
        printf("\n%d mulification table\n\n",j);
        for (i=1;i<=10;i++)
	{     
       mul=j*i;
       printf("%d x %d=%d\n",j,i,mul);
        
	}
    
    }
   

}
