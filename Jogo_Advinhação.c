#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("                        ---                     \n ");               
printf("                    -        --                   \n") ;         
printf("                --( /     \ )XXXXXXXXXXXXX         \n");           
printf("            --XXX(   O   O  )XXXXXXXXXXXXXXX-       \n");        
printf("           /XXX(       U     )        XXXXXXX\       \n");         
printf("         /XXXXX(              )--   XXXXXXXXXXX\      \n");        
printf("        /XXXXX/ (      O     )   XXXXXX   \XXXXX\   \n");
printf("        XXXXX/   /            XXXXXX   \   \XXXXX----        Jogo \n ");      
printf("        XXXXXX  /          XXXXXX         \  ----  -        da \n");      
printf("---     XXX  /          XXXXXX      \           ---       Advinhação\n");    
printf("  --  --  /      /\  XXXXXX            /     ---=       \n");   
printf("    -        /    XXXXXX              '--- XXXXXX       \n ");  
printf("      --\/XXX\ XXXXXX                      /XXXXX       \n ");  
printf("        \XXXXXXXXX                        /XXXXX/ \n");
printf("         \XXXXXX                         /XXXXX/       \n ")  ;
printf("           \XXXXX--  /                -- XXXX/       \n ");
printf("            --XXXXXXX---------------  XXXXX--         \n ");
printf("               \XXXXXXXXXXXXXXXXXXXXXXXX-             \n");
printf("                 --XXXXXXXXXXXXXXXXXX- ");

    
    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;

    srand(time(0));
    int numerosecreto =rand() % 100;

    while(!acertou) {
        printf("Qual é o seu %d ° chute? \n", tentativas);
        scanf("%d", &chute);
        printf("---------------------------------------------\n");
        
        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;
        }
        
        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        
        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            
printf("                    .--,     \n");
printf("     .-.    __,,,__/    |      \n");
printf("    /   \-'`        `-./_      \n");
printf("    |    |               `)   \n");
printf("     \   `             `\ ;       \n");
printf("    /       ,        ,    |   \n");
printf("    |      /         : O /_  \n");
printf("    |          O  .--;__   '.   \n");
printf("    |                (  )`.  |   \n");
printf("    \                 `-` /  |    \n");
printf("     \          ,_  _.-./`  /    \n");
printf("      \          \``-.(    /    \n");
printf("      |           `---'   /--.   \n");
printf("    ,--\___..__        _.'   /--.   \n");
printf("  \          `-._  _`/    '    '.     \n");
printf("     .' ` ' .       ``    '        .    \n");
printf("\n");
            
        } else if(maior) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }
		
        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    	
    printf("Você fez %2.f pontos\n", pontos);
    printf("Obrigado por jogar!\n");

}
