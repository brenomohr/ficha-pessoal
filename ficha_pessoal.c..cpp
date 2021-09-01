#include <stdio.h>
#include <string.h>
 
int main(void) {
	
	
	struct ficha {
		char nome[20];
		char email[20];

	};

struct ficha pessoal;
char email[20]={"teste@hotmail.com"};
int arroba,ponto,passa,maior,c_P,c_S,i;
int tam=strlen(email);
char nome[20];

printf ("Insira seu nome: ");
gets (nome);

printf("Insira seu email: ");
scanf("%s",&email);
 
 for (i = 0; i < tam; i++) {
   if(i > 3){   
     maior=1;   
   }
   if(email[i] == '@'){
    arroba=1;
 
   }
   if(arroba == 1 &&  email[i+1] >= 3){
    c_P=1;
   }
   if(email[i]=='.'){
        ponto=1;
   }
 
  if(ponto==1 && email[i+1] >=2){
        c_S=1;
   }
 
if(maior==1 && arroba == 1 && c_P==1 && c_S ==1){
    passa=1;
}else{
    passa=0;
}
 
 
}  
 
if(passa==1){
    printf("\n-------------- DADOS CADASTRADO CORRETAMENTE --------------\n");
    printf("\nNome: %s\n",&nome);
    printf("Email: %s\n",&email);
}else{
    printf("\nDigite um email valido\n");
}
 
 return 0;
 
}
