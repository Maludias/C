#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	 setlocale(LC_ALL, "Portuguese");
	float nota1,nota2,nota3,nota4, media;
	char sn;
	nota1 = nota2 = nota3 = nota4 = media=0;
	
	printf("======== Média Escolar 1.0======== \n \n");
	
	printf("Digite a nota 1:  ");
	scanf("%f", &nota1);
	
		printf("Digite a nota 2:  ");
	    scanf("%f", &nota2);
	    
	    printf("Digite a nota 3:  ");
	    scanf("%f", &nota3);
	    
	    printf("Digite a nota 4:  ");
	    scanf("%f", &nota4);
					
		media = (nota1 + nota2 + nota3 + nota4)/ 4;			
					
	printf("Sua média é = %f\t", media );
	 
	 if (media >= 70)
	 {
	  printf("\tAluno aprovado!");
}
	 
	 
	 else 
	 {
	 
	 printf("\tAluno reprovado!\n");
}
	 
printf("\t Calcular outra nota? ");
	 scanf("%c", &sn);
	  
while (sn = "sim");
	{
	
	printf("======== Média Escolar 1.0======== \n \n");
	
	printf("Digite a nota 1:  ");
	scanf("%f", &nota1);
	
		printf("Digite a nota 2:  ");
	    scanf("%f", &nota2);
	    
	    printf("Digite a nota 3:  ");
	    scanf("%f", &nota3);
	    
	    printf("Digite a nota 4:  ");
	    scanf("%f", &nota4);
					
		media = (nota1 + nota2 + nota3 + nota4)/ 4;			
					
	printf("Sua média é = %f\t", media );
	 
	 if (media >= 70)
	 {
	  printf("\tAluno aprovado!");
}
	 else 
	 {
	 printf("\tAluno reprovado!");
	 getch();
}

}
	return 0;	  
	    
}

				
