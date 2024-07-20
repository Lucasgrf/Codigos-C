/******************************************************************************

Em uma suposta universidade, duas supostas disciplinas são correquisitos e são
lecionadas por um suposto mesmo professor. Como elas só fazem sentido juntas, o
suposto professor considera que as notas das duas disciplinas deveriam ser
unificadas. No entanto, tal medida poderia ser considerada injusta por alguns
alunos, que poderiam ter notas melhores em uma ou outra disciplina, já que uma
delas tem enfoque teórico e a outra mais prático. Ciente que esse argumento não é
de todo inválido e que de acordo com as competências individuais de cada um,
existem aqueles com maior aptidão para a teoria ou para a prática, sem nenhum
prejuízo para suas formações, o professor pensou em um esquema que pudesse ser
mais justo e até mesmo individualizado. Para unificar as notas, um peso 6 deveria
ser aplicado em uma das disciplinas e um peso 4 para a outra. Sendo que a disciplina
de maior peso seria justamente aquela em que o aluno obtivesse a maior nota
/����������� = *×,$'%-%.$) 0 1×,$'%-",$)

*01 8. Esse cálculo deve ser feito a cada
uma das três unidades e em cada unidade a disciplina de maior peso pode ser uma
diferente. Ao final do semestre, a média seria formada pela média aritmética comum
das três notas unificadas calculadas pela média ponderada.
Como esse cálculo pode ser complexo e erros podem ser cometidos, auxilie esse
suposto professor construindo um programa, em C, que leia as 6 notas, sendo 3 para
cada disciplina e calcule:

• A nota unificada de cada unidade, calculada pela média ponderada ao
aplicar o maior peso (6) na maior nota dessa unidade e o menor peso (4)
para a menor;
• A média total do semestre, calculada com a média aritmética das notas
das três unidades calculadas no item anterior;

Seu programa deve ter as seguintes características presentes do código-fonte e na
saída:
• As notas unificadas devem ser exibidas;
o Não precisa ser ao final, pode ser assim que forem calculadas.
• Junto com a média total do semestre, exiba o conceito referente à média,
de acordo com a tabela abaixo.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    float notaT1, notaT2, notaT3;
    float notaP1, notaP2, notaP3;
    float notaU1, notaU2, notaU3;
    float mediaTotal;
    char conceito;

    printf("Digite a primeira nota teorica: ");
    scanf("%f", &notaT1);
    printf("Digite a primeira nota pratica: ");
    scanf("%f", &notaP1);

    printf("Digite a segunda nota teorica: ");
    scanf("%f", &notaT2);
    printf("Digite a segunda nota pratica: ");
    scanf("%f", &notaP2);

    printf("Digite a terceira nota teorica: ");
    scanf("%f", &notaT3);
    printf("Digite a terceira nota pratica: ");
    scanf("%f", &notaP3);

    if (notaT1 > notaP1) {
        notaU1 = (6 * notaT1 + 4 * notaP1) / 10;
    } else {
        notaU1 = (6 * notaP1 + 4 * notaT1) / 10;
    }
    printf("\nNota unificada da primeira unidade: %.2f\n", notaU1);

    if (notaT2 > notaP2) {
        notaU2 = (6 * notaT2 + 4 * notaP2) / 10;
    } else {
        notaU2 = (6 * notaP2 + 4 * notaT2) / 10;
    }
    printf("\nNota unificada da segunda unidade: %.2f\n", notaU2);

    if (notaT3 > notaP3) {
        notaU3 = (6 * notaT3 + 4 * notaP3) / 10;
    } else {
        notaU3 = (6 * notaP3 + 4 * notaT3) / 10;
    }
    printf("\nNota unificada da terceira unidade: %.2f\n", notaU3);

    mediaTotal = (notaU1 + notaU2 + notaU3) / 3;

    if (mediaTotal >= 9) {
        conceito = 'A';
    } else if (mediaTotal >= 7.5) {
        conceito = 'B';
    } else if (mediaTotal >= 6) {
        conceito = 'C';
    } else if (mediaTotal >= 4) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }
    printf("\nMedia total do semestre: %.2f\n", mediaTotal);
    printf("Conceito: %c\n", conceito);

    return 0;
}
