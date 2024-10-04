#include<stdio.h>
#include<math.h>

double adicao(double a, double b){
    double soma;
    soma = a + b;
    return soma;
}

double subtracao(double a, double b){
    double sub;
    sub = a - b;
    return sub;
}

double potenciacao(double a, double b){
    double potencia;
    potencia = pow(a, b);
    return potencia;
}

double raiz_quadrada(double a){
    double raiz;
    raiz = sqrt(a);
    return raiz;
}


int main(){
    double n1, n2;
    int op;

    while(op != 0){
        printf("\n##### MENU #####\n0 - Sair\n1 - Adicao\n2 - Subtracao\n3 - Potenciacao\n4 - Raiz quadrada\n");
        printf("\nDigite sua opcao: ");
        scanf("%d", &op);

        switch(op){
            case 0:
                break;
            case 1:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\nDigite um outro numero: ");
                scanf("%lf", &n2);
                printf("\nA adicao de %.2f e %.2f resulta em: %.2f", n1, n2, adicao(n1, n2));
                break;
            case 2:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\nDigite um outro numero: ");
                scanf("%lf", &n2);
                printf("\nA subtracao de %.2f e %.2f resulta em: %.2f", n1, n2, subtracao(n1, n2));
                break;
            case 3:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\nDigite um outro numero: ");
                scanf("%lf", &n2);
                printf("\nA potenciacao de %.2f e %.2f resulta em: %.2f", n1, n2, potenciacao(n1, n2));
                break;
            case 4:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);
                printf("\nA raiz quadrada de %.2f resulta em: %.2f", n1, raiz_quadrada(n1));
                break;
            default:
                printf("\nOperacao invalida!\n");
                break;
        }
    }


    return 0;
}
