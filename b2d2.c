#include <stdio.h>
#include <stdlib.h> // For exit() function
int main()
{
    int   binary_val, decimal_val = 0, base = 1, rem;
    char c[1000];
    FILE *fptr;
    int i=0;
    if ((fptr = fopen("binary.txt", "r")) == NULL)
    	{
        printf("Error! opening file");
        				// Program exits if file pointer returns NULL.
        exit(1);         
    	}

    					// reads text until newline 
    	fscanf(fptr,"%[^\n]", c);

    	printf("Data from the file //binary.txt//:%s\n", c);
    	fclose(fptr);
   	printf("c is %p\n",c);  

	printf("c0 is %d\n",c[0]);

  while(c[i] != '\0')
	{
	printf("c%d is %d\n",i,c[i]);
	i++;
	}
	printf("len is %d\n",i);
	int len=i;
	int j = atoi(c);
//	printf("j is %d\n",j);

        printf("The Binary number is = %d \n", j);


  while  (j > 0)
                {
                rem = j % 10;
                decimal_val = decimal_val + rem * base;
                j = j / 10 ;
                base = base * 2;
                }
                printf("Its decimal equivalent is = %d \n", decimal_val);
		 
return 0;
}

