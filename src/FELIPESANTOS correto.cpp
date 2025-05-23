#include<stdio.h>//biblioteca de comunicao com o us�rio
#include<stdlib.h>//biblioteca de aloca��o de espa�o de mem�ria
#include<locale.h>//biblioteca de aloca��es de texto por regi�o
#include<string.h>//biblioteca respons�vel por cuidar das strings

     int registro()// fun��o respons�vel por cadastrar os usu�rios no sistema

{   // in�cio da cria��o de variaveis//string
    char arquivo [40]; //variaveis
    char cpf [40];//variaveis
    char nome [40];//variaveis
    char sobrenome [40];//variaveis
    char cargo[40];//variaveis
    // fim da cria��o de vari�veis//string
    
    printf("Por favor, digite o cpf a ser cadastrado:\n");//Coletar informa��es do usu�rio
    scanf("%s", cpf);//%s refere-se a string
    
    strcpy (arquivo, cpf); //respons�vel por cuidar dos valores das strings
    
    FILE *file; // criar um arquivo no banco de dados
    file = fopen(arquivo,"w");//cria o arquivo e o "W" WRITTER"
    fprintf(file, cpf); // salva o valor variav�l
    fclose(file); // fecha o arquivo
    
    file= fopen(arquivo, "a");
    fprintf(file,"\nCPF:");
    fclose(file);
    
    printf("Por favor, digite o nome a ser cadastrado:\n");//informa��o que o cliente vai digitar
    scanf("%s",nome);//%s refere-se a string
	
	file=fopen(arquivo,"a");
	fprintf(file, nome);
	fclose(file);
	
	file= fopen(arquivo, "a");// respons�vel por deixar as informa��es separadas no arquivo
    fprintf(file,"\nNome:");
    fclose(file);
	
	printf("Por favor, digite o sobrenome a ser cadastrado:\n");//informa��o que o cliente vai digitar
	scanf("%s",sobrenome);//%s refere-se a string
	
	file=fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file= fopen(arquivo, "a");// respons�vel por deixar as informa��es separadas no arquivo
    fprintf(file,"\nSobrenome:");
    fclose(file);
	
	printf("Por favor, digite o cargo a ser cadastrado:\n");//informa��o que o cliente vai digitar
	scanf("%s",cargo);//%s refere-se a string
	
	file=fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	file= fopen(arquivo, "a");// respons�vel por deixar as informa��es separadas no arquivo
    fprintf(file,",");
    fclose(file);
	
    system("pause");	   
    

}
  
  
    int consulta ()	
{
   

   setlocale(LC_ALL, "Portuguese");//Defini��o de linguagem

   char cpf[40];//variavel
   char conteudo [200];//variavel
   
   printf("Digite o CPF a ser consultado:\n");//coletando informa��es do usu�rio
   scanf("%s", cpf);//refere-se a strig
   
   FILE *file;
   file = fopen(cpf,"r"); 
    
   {
   if(file == NULL)

   printf("N�o foi poss�vel localizar o usu�rio!.\n");//informa��o mostrada para o usu�rio
   
  }
  

  	while(fgets (conteudo, 200, file) != NULL)
	
{  
	printf ("\nEssas s�o as informa��es do usu�rio:\n\n");
	printf("%s", conteudo);//%s refere-se a string
	printf("\n\n");
	
}
       system("pause");
}
  
    int deletar ()
  
{   

  char cpf[40];//string
  
  printf ("Por favor, digite o CPF a ser deletado:\n");//coleta inform��oes do usu�rio
  scanf("%s",cpf);//refere-se string
  
  remove(cpf);//remove o us�rio
  
  FILE *file;
  file = fopen (cpf,"r");
  
  if(file == NULL)
  
  {
  	
  	printf("O usu�rio foi deletado.\n");//informa��o mostrada para o usu�rio
  	system("pause");  
	
  }
  	
}
	

    int main()//o programa come�a a ser executado
    {
	
	int opcao=0;//Definindo as variav�is
	int laco=1;
	char senhadigitada[10]="a";//string onde sera cadastrada a senha que usu�rio digitar
	int comparacao;//compara as dusa variaveis

	
	printf("CART�RIO DA EBAC\n\n");//inicio do sistema.
	printf("Login de admistrador!\n\n Digite a sua senha:"); //informa��o que sera mostrada para o usu�rio digitar a sua senha
    scanf("%s",senhadigitada);//informa��o que sera armazenada na string
    
    comparacao= strcmp(senhadigitada,"admin");//string que compara as duas strings
    
	
	if(comparacao == 0 )//validacao da senha
	
	            
      {
					 		   
	             system("cls");//limpa a dela
                 for(laco=1;laco=1;)  
           {
	
	             system("cls");//respos�vel por limpar a tela
	
	
                 ;setlocale(LC_ALL, "Portuguese");//Defini��o de linguagem

                 printf("CART�RIO DA EBAC\n\n");//�nicio do menu
                 printf("\t1-Registrar o nome\n");//sele�ao do usu�rio
                 printf("\t2-Consultar nomes\n");//sele��o do usu�rio
                 printf("\t3-Deletar nomes\n");// sele��o do usu�rio
                 printf("\t4-Sair do sistema\n");//sele��o do usu�rio
                 printf("Op��o:");//Fim do menu



scanf("%d",&opcao);//Armazenando a escolha do usu�rio


                 system("cls");//Respos�vel por limpar a tela
    
                 switch(opcao)//inicio da sela��o do menu
	
	{
	
                  case 1:
                  registro();//chamada de fun��es
	              break;
	
                  case 2:
	              consulta();//chamada de fun��es
	              break;
	
                  case 3:
	              deletar ();//chama de fun��o
	              break; 
	
                  case 4:
	              printf("Obrigado por utilizar o sistema.\n");
	              return 0;
                	break	
	
            	 ;default://qualquer outra op��o que n�o seja de 1 a 4 vai dar erro
            	 printf; ("Essa op��o n�o est� disp�nivel\n");//informa��o mostrada para o usu�rio
            	 system("pause");
               	 break;
				   
				   }//fim da sele��o

          


}
   

        
}
            
     else
	 printf("senha incorreta!");  
         
}







