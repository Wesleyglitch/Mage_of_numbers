#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
    // seed do PRNG
    srand(time(NULL));

    // Número pseudo-aleatório entre [0; 1023]
    int spellbreaker = rand() % 1024;

    // Início
    printf(" Olá, eu sou o mago dos numeros\n você está preso(a) em meu feitiço\n para se libertar, diga-me o número que estou pensando hi hi hi\n \n Dica: está entre [0; 1023]\n");

   while (true)
  {

    // Número escolhido
    double numE = GetDouble();
    
    // Variáveis de Distância numérica (sb:Spellbreaker, ma:Mais, me:Menos)
    double sb15ma = spellbreaker + 15;
    double sb15me = spellbreaker - 15;
    double sb60ma = spellbreaker + 60;
    double sb60me = spellbreaker - 60;
    double sb240ma = spellbreaker + 240;
    double sb240me = spellbreaker -240;
    double sb480ma = spellbreaker + 480;
    double sb480me = spellbreaker - 480;

    // Distância de 15 casas
    if (numE > spellbreaker && numE <= sb15ma && numE != 666 && numE != 24 && numE <= 1023|| numE != 666 && numE != 24 && numE < spellbreaker && numE >= sb15me && numE >= 0)
    {
     printf("Passou bem perto em!\n");
    }

    // Distância entre 60 e 15 casas
    else if (numE > sb15ma && numE <= sb60ma && numE <= 1023 && numE != 24 && numE != 666)
    {
     printf("Um pouco menos jovem, tenha calma\n");
    }
    else if (numE < sb15me && numE >= sb60me && numE >= 0 && numE != 24 && numE != 666)
    {
     printf("Aumente o número, vamos, você consegue\n");
    }

    // Distância entre 240 e 60 casas
    else if (numE > sb60ma && numE <= sb240ma && numE <= 1023 && numE != 24 && numE != 666 || numE != 24 && numE != 666 && numE < sb60me && numE >= sb240me && numE >= 0)
    {
     printf("Ops!, errou, continue usando sua intuição você está no caminho certo\n");
    }

    // Distância entre 480 e 240 casas
    else if (numE > sb240ma && numE <= sb480ma && numE <= 1023 && numE != 24 && numE != 666 || numE < sb240me && numE >= sb480me && numE >=0 && numE != 24 && numE != 666)
    {
     printf("Errou, recomendo continuar tentando\n");
    }

    // Distância maior do que 480 casas
    else if (numE > sb480ma && numE <= 1023 && numE != 24 && numE != 666 || numE < sb480me && numE >= 0 && numE != 24 && numE != 666)
    {
     printf("Errou feio, errou rude\n");
    }

    // Conjunto dos Naturais
    else if (numE < 0)
    {
     printf("Não chute números negativos, idiota!  >:( \n ");
    }

    // Limite das possibilidades
    else if (numE > 1023)
    {
     printf("O limite é até 1023, não tente me sacanear\n");
    }

    //  ͡° ͜ʖ ͡°
    else if (numE == 24)
    {
     printf(" ͡° ͜ʖ ͡°\n");
    }

    // Número da besta
    else if (numE == 666)
    {
     printf ("👁 \n");
    }

    // Número correto para quebrar o feitiço
    else
    {
     printf("Parabéns, você está livre ( ✧≖ ͜ʖ≖)\n");
     return(0);
    }
  }
}
