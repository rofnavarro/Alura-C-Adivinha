#include <time.h>
#include <stdio.h>
#include "./ft_printf/ft_printf.h"

int	main()
{
	//	Início do jogo
	ft_printf("******************************************\n");
	ft_printf("***  Bem Vindo ao Jogo da Adivinhação  ***\n");
	ft_printf("******************************************\n");

	//	Seed do RNG
	srand(time(0));

	//	Variáveis do jogo
	int		numero_secreto;
	int		chute;
	int		acertou;
	int		dificuldade;
	int		total_tentativas;

	double	pontos;
	double	pontos_perdidos;

	//	Escolhendo o número secreto baseado no RNG e 
	//	definindo a pontuação inicial do jogador.
	numero_secreto = rand() % 100;
	pontos = 1000;
	
	//	Definindo a quantidade de tentativas relacionada 
	//	ao nível de dificuldade escolhido pelo jogador.
	ft_printf("Selecione um nível de dificuldade:\n");
	ft_printf("(1)  Fácil    (2)  Médio	   (3)  Difícil\n");
	ft_printf("Nível: ");

	scanf("%d", &dificuldade);

	switch (dificuldade)
	{
	case 1:
		total_tentativas = 20;
		break;
	case 2:
		total_tentativas = 15;
		break;
	default:
		total_tentativas = 7;
		break;
	}

	//	Loop principal do jogo
	for (int i = 1; i <= total_tentativas; i++)
	{
		//	Pegando o input do usuário como tentativa
		ft_printf("Tentativa %d de %d\n", i, total_tentativas);
		ft_printf("Chute um número: ");

		scanf("%d", &chute);

		//	Tratamento de números negativos
		if (chute < 0)
		{
			ft_printf("Somente números positivos!\n");
			i--;
			continue;
		}

		//	Verificação do número
		acertou = chute == numero_secreto;

		if (acertou)
			break;
		else if (chute > numero_secreto)
			ft_printf("\nSeu chute foi MAIOR do que o número secreto!\n");
		else
			ft_printf("\nSeu chute foi MENOR do que o número secreto!\n");
		
		//	Cálculo dos pontos do jogador
		pontos_perdidos = abs(chute - numero_secreto) / 2.0;
		pontos = pontos - pontos_perdidos;
	}

	//	Final do jogo
	ft_printf("\n");
	if (acertou)
	{
		ft_printf("*******************************************\n");
		ft_printf("********  Parabéns! Você acertou!  ********\n");
		ft_printf("*******************************************\n\n");
		printf("Você fez %.2f pontos!\n\n", pontos);
	}
	else
	{
		ft_printf("********  Que pena! Você perdeu!  ********\n");
		ft_printf("**********   Tente novamente!   **********\n");
	}
}
