#include <iostream>
#include <cstring>

using namespace std;

typedef struct Filme
{
    char titulo[30];
    char genero[15];
    int ano;
    int horas;
    int minutos;
};
void comediameubacana(Filme filme[])
{
    cout << "-x-x-x-x-x-x-x-x-x OS FILMES DE COMEDIA SAO -x-x-x-x-x-x-x-x-x" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(filme[i].genero, "comedia") == 0)
        {
            cout << "Titulo: " << filme[i].titulo << endl;
        }
    }
}
int main()
{
    Filme filme[5];
    char titulo[30], genero[15];
    int ano, horas, minutos;
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o titulo: ";
        cin.getline(filme[i].titulo, 30);
        cout << "Digite o genero: ";
        cin.getline(filme[i].genero, 15);
        cout << "Digite o ano: ";
        cin >> filme[i].ano;
        cout << "Digite as horas: ";
        cin >> filme[i].horas;
        cout << "Digite os minutos: ";
        cin >> filme[i].minutos;
        cin.ignore();
    }
    comediameubacana(filme);
    return 0;
}
