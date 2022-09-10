#include <stdio.h>

 

int main(void)

{

	    int num;


	        printf("Enter a number: \n");
		scanf("%d", &num);

			if (num > 0)
				printf("%d is positive \n", num);
	
			else if (num < 0)
				printf("%d is negative \n", num);

			else
				printf("is zero \n");
		
			return (0);

}
