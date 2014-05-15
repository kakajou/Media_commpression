#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define Max_I 6
#define Max_J 6

int main(int argc, char const *argv[])
{

	int matrix [Max_I] [Max_J];
	int i,j,k,inverce = 0;
	
	for (i = 0; i < Max_I; ++i)
	{
		for (j = 0; j < Max_J; ++j)
		{
			matrix[i][j]= j;
		}
	}

	for (i = 0; i < Max_I; ++i)
	{
		printf("\n\n");
		for (j = 0; j < Max_J; ++j)
		{
			 printf("  %d", matrix[i][j]);
		}
	}	

	printf("\n\n ======================= zig-zag ========================= ");

for (i = 0; i < Max_I; ++i)
{			
		printf("\n");	sleep(1);
if ( inverce==0 ) {			
			k=i;
			for (j = 0; j <= i; ++j)
			{
			 printf("  %d", matrix[k][j]);
			 k--;
			}
			inverce=1;
}else{
			k=0;
			for (j = i; j >= 0; --j)
			{
			 printf("  %d", matrix[k][j]);
			 k++;
			}
			inverce=0;
}			
	
}

for (i = 1; i < Max_I; ++i)
{			
		printf("\n");sleep(1);
if ( inverce== 0) {		
			k=Max_I-1;
			for (j = i; j < Max_J; ++j)
			{
			 printf("  %d", matrix[k][j]);
			 k--;
			}		
			inverce=1;
}else {
			k=Max_I-1;
			for (j = Max_J-1; j >=i; --j)
			{
			 printf("  %d", matrix[k][j]);
			 k--;
			}				
			inverce=0;
		}
}



	printf("\n");

	return 0;
}