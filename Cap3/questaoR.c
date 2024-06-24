#include <stdio.h>

int main(){
	
    int votosValidosA, votosValidosB, votosValidosC, votosNulos, votosBrancos, totalEleitores, 
    percentualValidos, percentualA, percentualB, percentualC, percentualNulos, percentualBrancos;

    printf("Votos validos candidato A: ");
    scanf("%d", &votosValidosA);

    printf("Votos validos candidato B: ");
    scanf("%d", &votosValidosB);

    printf("Votos validos candidato C: ");
    scanf("%d", &votosValidosC);

    printf("Votos Nulos: ");
    scanf("%d", &votosNulos);

    printf("Votos Brancos: ");
    scanf("%d", &votosBrancos);

    totalEleitores = votosValidosA + votosValidosB + votosValidosC + votosBrancos + votosNulos;

    percentualValidos = (votosValidosA + votosValidosB + votosValidosC) * 100 / totalEleitores;

    percentualA = votosValidosA * 100 / totalEleitores;
   
    percentualB = votosValidosB * 100 / totalEleitores;

    percentualC = votosValidosC * 100 / totalEleitores;

    percentualNulos = votosNulos * 100 / totalEleitores;

    percentualBrancos = votosBrancos * 100 / totalEleitores;

  
    printf("Total de Eleitores: %d \n", totalEleitores);

    printf("Percentual de votos validos: %d%% \n", percentualValidos);

    printf("Percentual de votos candidato A: %d%% \n", percentualA);

    printf("Percentual de votos candidato B: %d%% \n", percentualB);

    printf("Percentual de votos candidato C: %d%% \n", percentualC);

    printf("Percentual de votos Brancos: %d%% \n", percentualBrancos);

    printf("Percentual de votos Nulos: %d%% \n", percentualNulos);

	return 0;
}
