#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
// Fun��o para calcular a m�dia de dois n�meros
float calcularMedia(float num1, float num2) {
    return (num1 + num2) / 2.0;
}

int main() {
		setlocale(LC_ALL, "Portuguese");
    // Vari�veis
    float numero1, numero2;

    // Solicita��o da entrada do usu�rio
    printf("Informe o primeiro n�mero: ");
    scanf("%f", &numero1);

    printf("Informe o segundo n�mero: ");
    scanf("%f", &numero2);

    // Chamada da fun��o para calcular a m�dia
    float media = calcularMedia(numero1, numero2);

    // Exibi��o da mensagem com a m�dia
    printf("A m�dia dos n�meros %.2f e %.2f �: %.2f\n", numero1, numero2, media);

    return 0;
}
