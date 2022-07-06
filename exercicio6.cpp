#include <iostream>
#include <cstring>

using namespace std;

struct Filme
{
    void informacoes(char titulo[30], char genero[15], int ano, int horas, int minutos)
    {
        cout << "Digite o titulo do filme: ";
        cin.getline(titulo, 30);
        cout << "Digite o genero do filme: ";
        cin.getline(genero, 15);
        cout << "Digite o ano do filme: ";
        cin >> ano;
        cout << "Digite a duracao do filme horas e minutos: ";
        cin >> horas >> minutos;
    }
};
int main()
{
    Filme filme;
    char titulo[30], genero[15];
    int ano, horas, minutos;
    filme.informacoes(titulo, genero, ano, horas, minutos);
    cout << "Titulo: " << titulo << endl;
    cout << "Genero: " << genero << endl;
    cout << "Ano: " << ano << endl;
    cout << "Duracao: " << horas << " horas e " << minutos << " minutos" << endl;
    return 0;
}