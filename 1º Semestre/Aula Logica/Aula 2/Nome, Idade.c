#include <stdio.h>
main()
{
      int idade; 
      char nome[50]; // somente para caracteres (letras)
      printf("Digite a sua idade: ");
      scanf("%d",&idade);
      printf("Digite seu nome: ");
      _flushall(); //limpar buffer da mem�ria do teclado (caso n�o tenha esse comando ele vai pegar o ultimo comando que o teclado enviou, ou seja enter)
      gets(nome); // somente l� string
      printf("O seu nome: %s\nA sua idade: %d\n",nome,idade); //usa-se o "%s" nesse caso de char 
      system("pause");
}
