#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main (){
	
int cod_acesso, cod_correto = 1234, senha_usuario, senha_correta = 9999, nova_tentativa;
printf("DIGITE O CODIGO DE ACESSO ");
scanf("%d", &cod_acesso);
if (cod_acesso == cod_correto){
	do {
		printf("DIGITE A SENHA DE ACESSO: ");
		scanf("%d", &senha_usuario);
		if (senha_usuario == senha_correta){
			printf("ACESSO PERMITIDO");
			nova_tentativa = 0;	
		}
		else{
			printf("Senha incorreta");
			printf("TENTAR NOVAMENTE : [1] OU SAIR DO SISTEMA [0]");
			scanf("%d", &nova_tentativa);
		}	
	}while(nova_tentativa == 1);	
}
else {
	printf("USUÁRIO INVÁLIDO");	
}			

}
