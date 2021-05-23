#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
    // seed of PRNG
    srand(time(NULL));

    // Random number between [0; 1023]
    int sb = rand() % 1024;

    // Apresentation
    printf(" Hello, i am the mage of numbers\n you are stuck in my spell\n To break the spell tell me the number i'm thinking hi hi hi\n \n Tip: its between [0; 1023]\n");

   while (true)
  {

    // Choosen number
    double numE = GetDouble();
    
    // Numeric distance variables (sb:Spellbreaker, m:more, l:less)
    double sb15m = sb + 15;
    double sb15l = sb - 15;
    double sb60m = sb + 60;
    double sb60l = sb - 60;
    double sb240m = sb + 240;
    double sb240l = sb -240;
    double sb480m = sb + 480;
    double sb480l = sb - 480;

    // Between (numE, 15]
    if (numE > sb && numE <= sb15m && numE != 666 && numE != 24 && numE <= 1023|| numE != 666 && numE != 24 && numE < sb && numE >= sb15l && numE >= 0)
    {
     printf("It was close!\n");
    }

    // Between (15, 60]
    else if (numE > sb15m && numE <= sb60m && numE <= 1023 && numE != 24 && numE != 666)
    {
     printf("a little less, young man take it easy\n");
    }
    else if (numE < sb15l && numE >= sb60l && numE >= 0 && numE != 24 && numE != 666)
    {
     printf("increase the number, let's do it\n");
    }

    // Between (60, 240]
    else if (numE > sb60m && numE <= sb240m && numE <= 1023 && numE != 24 && numE != 666 || numE != 24 && numE != 666 && numE < sb60l && numE >= sb240l && numE >= 0)
    {
     printf("Oops !, wrong, keep using your intuition you are on the right track\n");
    }

    // Between (240, 480]
    else if (numE > sb240m && numE <= sb480m && numE <= 1023 && numE != 24 && numE != 666 || numE < sb240l && numE >= sb480l && numE >=0 && numE != 24 && numE != 666)
    {
     printf("Wrong, I recommend to keep trying\n");
    }

    // Greater than 480
    else if (numE > sb480m && numE <= 1023 && numE != 24 && numE != 666 || numE < sb480l && numE >= 0 && numE != 24 && numE != 666)
    {
     printf("Wrong ugly, wrong rude\n");
    }

    // Positive numbers
    else if (numE < 0)
    {
     printf("Don't kick negative numbers, idiot!  >:( \n ");
    }

    // Limit
    else if (numE > 1023)
    {
     printf("The limit is 1023, don't try to screw me\n");
    }

    //  ͡° ͜ʖ ͡°
    else if (numE == 24)
    {
     printf(" ͡° ͜ʖ ͡°\n");
    }

    // Number of the beast
    else if (numE == 666)
    {
     printf ("👁 \n");
    }

    // Spellbreaker
    else
    {
     printf("Congratulations, you are free ( ✧≖ ͜ʖ≖)\n");
     return(0);
    }
  }
}
