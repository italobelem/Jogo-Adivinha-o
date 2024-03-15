#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    printf("------------------------------------------------\n");
    printf("jogo do akinator numeral\n");
    printf("------------------------------------------------\n");
    

    int chute;
    int tentativas;
    int acertou;
    int dificuldade;
    
    double pontos = 1000;

    srand(time(0));
    int segredinho = rand() % 100;
    
    printf("Escolhe a dificuldade ai bacana ");
    printf("\n(1) Facil (2) Medio (3) Dificil");
    printf("\nEscolhe ");
    scanf("%d", &dificuldade);

    switch (dificuldade){
    case 1:
        (tentativas = 20);
        break;
    case 2:
        (tentativas = 15);
        break;
    default:
        (tentativas = 7);
        break;
    }
    
    printf("\nA dificuldade foi: %d", dificuldade);

    for (int i = 1; i <= tentativas; i++) {

        printf("\nchance %d\n", i);

        printf("\nda teu palpite \n");
        scanf("%d", &chute);
        
        printf("------------------------------------------------\n");
        printf("teu palpite foi %d\n", chute);

        if (chute < 0){
            printf("usa negativo nao ze faz favor \n");
            i--;
            continue;

        }

        int acertou = chute == segredinho;

        if (acertou){
            break;
        }
            
        else if (chute < segredinho){
            printf("------------------------------------------------\n");
            printf("EH MAIOR QUE ISSO AI\n");
            printf("------------------------------------------------\n");
        }
            
        else {
            printf("------------------------------------------------\n");
            printf("EH MENOR\n");
            printf("------------------------------------------------\n");
        }

        double pontosperdidos = abs(chute - segredinho) / 2.0;
        pontos = pontos - pontosperdidos;

       }

    printf("\nACABOOOOOOOOOOOOOU\n");

    if (acertou){

        printf("------------------------------------------------\n");
        printf("\n acertou hein parabens\n");
        printf("------------------------------------------------\n");
        printf("\ntua pontuacao oia: %.2f", pontos);
    }

    else{

        printf("\ntu errou o numero era %d", segredinho);

    }

}
