#include <stdio.h>
#include <math.h>

int main() {
    int numAl;
    int alPas = 0, alRep = 0;
    
    printf("Insira o numero de alunos: ");
    scanf("%d", &numAl);

    for (int i = 0; i < numAl; i++) {
        float nota;

        printf("Insira a nota do aluno numero %d: ", i+1);
        scanf("%f", &nota);

        if (nota >= 9.5) {
            alPas++;
        }
        else {
            alRep++;
        }
    }

    printf("Aprovaram %d alunos, e reprovaram %d alunos", alPas, alRep);

    return 0;
}