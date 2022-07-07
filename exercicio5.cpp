#include <iostream>
#include <cstring>

using namespace std;

typedef struct Solteiros
{
    string nome;
    char sexo;
    int idade;
    char pessoa = 'Solteiro(a)';
};
typedef struct Casados
{
    string nome;
    char sexo;
    int idade;
    char pessoa = 'Casado(a)';
};
typedef struct Quantidade
{
    Casados casados[99];
    Solteiros solteiros[99];
};

int main()
{
    int h = 0, m = 0, c = 0, continua = 0, j = 0;
    Quantidade quantidade;
    char estado_civil;
    do
    {
        cout << "Digite c para casado e s para solteiro: ";
        cin >> estado_civil;
        if (estado_civil = 's')
        {
            cout << "Digite o nome: " << endl;
            cin >> quantidade.solteiros[j].nome;
            cout << "Digite m para sexo masculino e f para feminino: " << endl;
            cin >> quantidade.solteiros[j].sexo;
            if (quantidade.solteiros[j].sexo = 'm')
            {
                h++;
            }
            else if (quantidade.solteiros[j].sexo = 'f')
            {
                m++;
            }
            cout << "Digite a idade: ";
            cin >> quantidade.solteiros[j].idade;
        }
        else if (estado_civil = 'c')
        {
            c++;
            cout << "Digite o nome: ";
            cin >> quantidade.casados[j].nome;
            cout << "Digite m para sexo masculino e f para sexo feminino: ";
            cin >> quantidade.casados[j].sexo;
            cout << "Digite a idade: ";
            cin >> quantidade.casados[j].idade;
        }
        cout << "digite 0 para sair ou 1 para continuar: ";
        cin >> continua;
        j++;
    } while (continua);
    cout << "-x-x-x-x-x- Os solteiros sao -x-x-x-x-x-" << endl;
    for (int i = 0; i < j; i++)
    {
        cout << "Nome: " << quantidade.solteiros[i].nome << endl;
        cout << "Idade: " << quantidade.solteiros[i].idade << endl;
        cout << "sexo: " << quantidade.solteiros[i].sexo << endl;
        cout << "estado civil" << quantidade.solteiros[i].pessoa << endl;
    }
    cout << "O total de homens solteiros e: " << h << endl;
    cout << "O total de mulheres solteiras e: " << m << endl;
    cout << "-x-x-x-x-x- Os casados sao -x-x-x-x-x-" << endl;
    for (int i = 0; i < j; i++)
    {
        cout << "Nome: " << quantidade.casados[i].nome << endl;
        cout << "Idade" << quantidade.casados[i].idade << endl;
        cout << "sexo: " << quantidade.casados[i].sexo << endl;
        cout << "estado civil: " << quantidade.casados[i].pessoa << endl;
    }
    cout << "O total de casados e: " << c << endl;
    return 0;
}