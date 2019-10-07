#include <stdio.h>
#include <stdlib.h>

    
int simetrica(int a[3][3], int n)
{ 
	int sim = 1;

	int i, j;
 
    while (sim && i < n)
    {
    	j = 0;
        while (sim && j < i)
        {
        	sim = a[i][j] == a[j][i];
            j = j + 1;
        }
        
        i = i + 1;
      
    }

       return sim;
}
   
int main(void)
{
    int mat[3][3] = {0};

    srand(time(NULL));
    
    for (int i = 0; i < 3; ++i)
    {
       	for (int j = 0; j < 3; ++j)
       	{
       		mat[i][j] = rand() % 10;
       	}
    }	

    if (simetrica(mat, 3)) 
    {
    	printf("A matriz é simetrica\n");
    }
    else
   	{
    	printf("A matriz nao é simetrica\n");
    }
    
   	return 0;
}