#include<stdio.h>//biblioteca de comunicao com o usário
#include<stdlib.h>//biblioteca de alocação de espaço de memória
#include<locale.h>//biblioteca de alocações de texto por região
#include<string.h>//biblioteca responsável por cuidar das strings

     int registro()// função responsável por cadastrar os usuários no sistema

{   // início da criação de variaveis//string
    char arquivo [40]; //variaveis
    char cpf [40];//variaveis
    char nome [40];//variaveis
    char sobrenome [40];//variaveis
    char cargo[40];//variaveis
    // fim da criação de variáveis//string
    
    printf("Por favor, digite o cpf a ser cadastrado:\n");//Coletar informações do usuário
    scanf("%s", cpf);//%s refere-se a string
    
    strcpy (arquivo, cpf); //responsável por cuidar dos valores das strings
    
    FILE *file; // criar um arquivo no banco de dados
    file = fopen(arquivo,"w");//cria o arquivo e o "W" WRITTER"
    fprintf(file, cpf); // salva o valor variavél
    fclose(file); // fecha o arquivo
    
    file= fopen(arquivo, "a");
    fprintf(file,"\nCPF:");
    fclose(file);
    
    printf("Por favor, digite o nome a ser cadastrado:\n");//informação que o cliente vai digitar
    scanf("%s",nome);//%s refere-se a string
	
	file=fopen(arquivo,"a");
	fprintf(file, nome);
	fclose(file);
	
	file= fopen(arquivo, "a");// responsável por deixar as informações separadas no arquivo
    fprintf(file,"\nNome:");
    fclose(file);
	
	printf("Por favor, digite o sobrenome a ser cadastrado:\n");//informação que o cliente vai digitar
	scanf("%s",sobrenome);//%s refere-se a string
	
	file=fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file= fopen(arquivo, "a");// responsável por deixar as informações separadas no arquivo
    fprintf(file,"\nSobrenome:");
    fclose(file);
	
	printf("Por favor, digite o cargo a ser cadastrado:\n");//informação que o cliente vai digitar
	scanf("%s",cargo);//%s refere-se a string
	
	file=fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	file= fopen(arquivo, "a");// responsável por deixar as informações separadas no arquivo
    fprintf(file,",");
    fclose(file);
	
    system("pause");	   
    

}
  
  
    int consulta ()	
{
   

   setlocale(LC_ALL, "Portuguese");//Definição de linguagem

   char cpf[40];//variavel
   char conteudo [200];//variavel
   
   printf("Digite o CPF a ser consultado:\n");//coletando informações do usuário
   scanf("%s", cpf);//refere-se a strig
   
   FILE *file;
   file = fopen(cpf,"r"); 
    
   {
   if(file == NULL)

   printf("Não foi possível localizar o usuário!.\n");//informação mostrada para o usuário
   
  }
  

  	while(fgets (conteudo, 200, file) != NULL)
	
{  
	printf ("\nEssas são as informações do usuário:\n\n");
	printf("%s", conteudo);//%s refere-se a string
	printf("\n\n");
	
}
       system("pause");
}
  
    int deletar ()
  
{   

  char cpf[40];//string
  
  printf ("Por favor, digite o CPF a ser deletado:\n");//coleta informçãoes do usuário
  scanf("%s",cpf);//refere-se string
  
  remove(cpf);//remove o usário
  
  FILE *file;
  file = fopen (cpf,"r");
  
  if(file == NULL)
  
  {
  	
  	printf("O usuário foi deletado.\n");//informação mostrada para o usuário
  	system("pause");  
	
  }
  	
}
	

    int main()//o programa começa a ser executado
    {
	
	int opcao=0;//Definindo as variavéis
	int laco=1;
	char senhadigitada[10]="a";//string onde sera cadastrada a senha que usuário digitar
	int comparacao;//compara as dusa variaveis

	
	printf("CARTÓRIO DA EBAC\n\n");//inicio do sistema.
	printf("Login de admistrador!\n\n Digite a sua senha:"); //informação que sera mostrada para o usuário digitar a sua senha
    scanf("%s",senhadigitada);//informação que sera armazenada na string
    
    comparacao= strcmp(senhadigitada,"admin");//string que compara as duas strings
    
	
	if(comparacao == 0 )//validacao da senha
	
	            
      {
					 		   
	             system("cls");//limpa a dela
                 for(laco=1;laco=1;)  
           {
	
	             system("cls");//resposável por limpar a tela
	
	
                 ;setlocale(LC_ALL, "Portuguese");//Definição de linguagem

                 printf("CARTÓRIO DA EBAC\n\n");//ínicio do menu
                 printf("\t1-Registrar o nome\n");//seleçao do usuário
                 printf("\t2-Consultar nomes\n");//seleção do usuário
                 printf("\t3-Deletar nomes\n");// seleção do usuário
                 printf("\t4-Sair do sistema\n");//seleção do usuário
                 printf("Opção:");//Fim do menu



scanf("%d",&opcao);//Armazenando a escolha do usuário


                 system("cls");//Resposável por limpar a tela
    
                 switch(opcao)//inicio da selação do menu
	
	{
	
                  case 1:
                  registro();//chamada de funções
	              break;
	
                  case 2:
	              consulta();//chamada de funções
	              break;
	
                  case 3:
	              deletar ();//chama de função
	              break; 
	
                  case 4:
	              printf("Obrigado por utilizar o sistema.\n");
	              return 0;
                	break	
	
            	 ;default://qualquer outra opção que não seja de 1 a 4 vai dar erro
            	 printf; ("Essa opção não está dispónivel\n");//informação mostrada para o usuário
            	 system("pause");
               	 break;
				   
				   }//fim da seleção

          


}
   

        
}
            
     else
	 printf("senha incorreta!");  
         
}







