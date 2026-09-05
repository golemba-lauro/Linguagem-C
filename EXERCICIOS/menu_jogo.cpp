/*Exercício 2: Menu Interativo de Jogo (Laço while)
• Contexto:
• Você está criando o menu principal de um jogo. O menu deve continuar
aparecendo até que o jogador escolha a opção "Sair". • Proposta:
• Crie um programa que exiba um menu com as opções 
"1. Novo Jogo",
"2. Carregar Jogo",
"3. Configurações" e
 "4. Sair". Use umlaço while para que o menu seja reexibido após cada ação,
 até que o usuário digite 4.
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 int main (){
 	setlocale (LC_ALL,"Portuguese");
 	
 	
 	int opcao = 0; // Inicializa com um valor diferente de 4
 	
	printf("==== MENU PRINCIPAL====");
 	printf("\n");
 	
 	
 	// A condição é verificada ANTES de entrar no laço
 	while (opcao != 4) {
 		printf("\n*** Menu Principal ***\n");
 		printf("1. Novo Jogo\n");
		printf("2. Carregar Jogo\n");
		printf("3. Configurações\n");
		printf("4. Sair\n");
		printf("Escolha uma opção: ");
	
		scanf("%d", &opcao);
		
		switch (opcao) {
			 switch (opcao) {
            case 1:
                printf("\n>>> Iniciando um Novo Jogo...\n\n");
                // Aqui você adicionaria a lógica para iniciar um novo jogo.
                break; // 'break' impede que o código dos outros casos seja executado

            case 2:
                printf("\n>>> Carregando jogo salvo...\n\n");
                // Lógica para carregar um jogo.
                break;

            case 3:
                printf("\n>>> Abrindo o menu de Configurações...\n\n");
                // Lógica para as configurações.
                break;

            case 4:
                // Se o usuário digitar 4, esta mensagem é exibida
                // e a condição do 'while' (opcao != 4) se tornará falsa, encerrando o loop.
                printf("\n>>> Saindo do jogo. Obrigado por jogar!\n");
                break;

            default:
                // 'default' é executado se o usuário digitar qualquer valor
                // que não seja 1, 2, 3 ou 4.
                printf("\n>>> Opção inválida! Por favor, tente novamente.\n\n");
                break;
        }
 		
	 }
 	
 	
}
 	
 }
