#include <iostream>
using namespace std;

string nome;
string cor_cabelo;
string cor_olho;
int *idade;
float *altura;
float *peso;

void inicializador() {
    idade = new int;
    altura = new float;
    peso = new float;
}

void filhoUnico() {
    if (*altura >= 1.60 && *peso >= 60) {
        cout << "\nRecruta:\n";
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << *idade << endl;
        cout << "Altura: " << *altura << endl;
        cout << "Peso: " << *peso << endl;
        cout << "\nVoce comeca na segunda feira.";
    }
    else {
        cout << "Não atende os requisitos";
    }
}

void caracteristica() {
    
    cout << "Nome: ";
    cin >> nome;
    cin.clear();
    cout << "Idade: ";
    cin >> *idade;
    cin.clear();
  
    if (*idade >= 18) {
        cout << "Altura: ";
        cin >> *altura;
        cin.clear();
        cout << "Peso: ";
        cin >> *peso;
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
            cout << "\nDispensado. Volte semana que vem para jurar a bandeira.";
            break;
        
        case 1:
            filhoUnico();
            break;
        }
    }
    else {
        cout << "Você ainda não tem idade para se alistar no exército";
    }
}

int main()
{
    inicializador();
    caracteristica();
    delete idade;
    delete altura;
    delete peso;

    return 0;
}
