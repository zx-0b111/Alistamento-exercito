#include <iostream>
using namespace std;

string nome;
string cor_cabelo;
string cor_olho;
int idade;
float altura;
float peso;

void filhoUnico() {
    if (altura >= 1.60 && peso >= 60) {
        cout << "Recruta:\n";
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Altura: " << altura << endl;
        cout << "Peso: " << peso << endl;
        cout << "Voce comeca na segunda feira.";
    }
    else {
        cout << "N�o atende os requisitos";
    }
}

void caracteristica() {
    
    cout << "Nome: ";
    cin >> nome;
    cin.clear();
    cout << "Idade: ";
    cin >> idade;
    cin.clear();
  
    if (idade >= 18) {
        cout << "Altura: ";
        cin >> altura;
        cin.clear();
        cout << "Peso: ";
        cin >> peso;
        cin.clear();
        cout << "Cor do cabelo: ";
        cin >> cor_cabelo;
        cin.clear();
        cout << "Cor do olho: ";
        cin >> cor_olho;
        cin.clear();

        int opcoes;
        cout << "\nFilho unico: \n";
        cout << "0. Sim\n";
        cout << "1. Nao\n";
        cout << "opcoes: ";
        cin >> opcoes;
        cin.clear();

        switch (opcoes) {
        case 0:
            filhoUnico();
            break;
        
        case 1:
            cout << "\nDispensado. Volte semana que vem para jurar a bandeira.";
            break;
        }
    }
    else {
        cout << "Voc� ainda n�o tem idade para se alistar no ex�rcito";
    }
}

int main()
{
    caracteristica();

    return 0;
}
