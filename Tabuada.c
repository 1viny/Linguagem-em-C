#include <stdio.h>
#include <stdlib.h>

int main (){
	int x, num;
             printf("---TABUADA---\n\n");          
             
             printf("Informe um numero inteiro:  ");
             scanf("%d", &num);
             
             for(x=1; x<=10; x++){ // ++ ou x = x + 1;
             	printf("\n %d x %d = %d \n", x, num, x*num);
			 }
			                     
		  	printf("\nFim da tabuada!\n");	
			  		  				        
system("pause");	
}
