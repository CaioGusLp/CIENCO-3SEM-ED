#include <iostream>
using namespace std;

int main() {
    int numAluno, numAlunoMaisAlto, numAlunoMaisBaixo;
    float altura, alturaMaisAlta ,alturaMaisBaixa ;

    for(int i = 1; i <= 2; i++) {
        cout << "Digite o número do aluno " << i << ": ";


        cout << "Digite a altura do aluno " << i << " em centímetros: ";
        cin >> altura;

        if(altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            numAlunoMaisAlto = numAluno;
        }

        if(altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            numAlunoMaisBaixo = numAluno;
        }
    }

    cout << endl << "O aluno mais alto é o número " << numAlunoMaisAlto << " com " << alturaMaisAlta << " cm." << endl;
    cout << "O aluno mais baixo é o número " << numAlunoMaisBaixo << " com " << alturaMaisBaixa << " cm." << endl;

    return 0;
}
