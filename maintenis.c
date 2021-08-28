#include <stdio.h>

int main()
{
    int QntTenisVendido;
    float TotaldeVendas, SalarioFixo, ValordaVenda, SalarioFinal;
       
    printf("didgite a quantidade de tenis vendido: ");
    scanf ("%d", &QntTenisVendido);
    printf("digite o total de vendas: ");
    scanf ("%f", &TotaldeVendas);
    printf("digite o salario fixo: ");
    scanf ("%f", &SalarioFixo);
    printf("digite o valor de cada venda: ");
    scanf ("%f", &ValordaVenda);
    
    SalarioFinal = SalarioFixo + ValordaVenda * QntTenisVendido + TotaldeVendas * 0.05;
    printf("Seu salario final é R$ %.2f", SalarioFinal);

    return 0;
}
