#include <stdio.h>

int main() {
    // Declarção das variaveis
    int A, B;
    
    //Entrada de Dados(Leitura)
    printf("Digite o Valor de A:");
    scanf("%d", &A);
    printf("Digite o Valor de B:");
    scanf("%d", &B);
    //Processamento 
 
    
    //Saida
    printf ("\n soma %d", A+B);
    printf ("\n subtração %d", A-B);
    printf ("\n multiplicação %d", A*B);
    printf ("\n divisão %d", A/B);
    printf ("\n resto da divisão %d", A%B);
    printf ("\n resto divisão %d", B%A);  

    return 0;
}
