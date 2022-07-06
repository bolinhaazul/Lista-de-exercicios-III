#include <iostream>
#include <cstring>

using namespace std;

typedef struct Solteiros
{
    char nome[20];
    char sexo[4];
    int idade;
    char pessoa = 'Solteiro(a)';
};
typedef struct Casados
{
    char nome[20];
    char sexo[4];
    int idade;
    char pessoa = 'Casado(a)';
};
typedef struct Quantidade
{
    Casados casados;
    Solteiros solteiros;
};

int main()
{
    int h = 0, m = 0, c = 0;
    int total = 0;
    Quantidade quantidade[99];
    char estado_civil[10];
    cout << "Digite a quantidade de pessoas: ";
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cout << "Digite o estado civil: ";
        cin.getline(estado_civil, 10);
        if (strcmp(estado_civil, "solteiro") == 0)
        {
            cout << "Digite o nome: ";
            cin.getline(quantidade[i].solteiros.nome, 20);
            cout << "Digite masc para sexo masculino e fem para sexo feminino: ";
            cin.getline(quantidade[i].solteiros.sexo, 4);
            if (strcmp(quantidade[i].solteiros.sexo, "masc") == 0)
            {
                h++;
            }
            else if (strcmp(quantidade[i].solteiros.sexo, "fem") == 0)
            {
                m++;
            }
            else
            {
                cout << "Opcao invalida!" << endl;
            }
            cout << "Digite a idade: ";
            cin >> quantidade[i].solteiros.idade;
        }
        else if (strcmp(estado_civil, "casado") == 0)
        {
            c++;
            cout << "Digite o nome: ";
            cin.getline(quantidade[i].casados.nome, 20);
            cout << "Digite masc para sexo masculino e fem para sexo feminino: ";
            cin.getline(quantidade[i].casados.sexo, 4);
            cout << "Digite a idade: ";
            cin >> quantidade[i].casados.idade;
        }
        else
        {
            cout << "Opcao invalida!" << endl;
            return main();
        }
    }
    cout << "-x-x-x-x-x- Os solteiros sao -x-x-x-x-x-" << endl;
    for (int i = 0; i < total; i++)
    {
        cout << quantidade[i].solteiros.nome << endl;
        cout << quantidade[i].solteiros.idade << endl;
        cout << quantidade[i].solteiros.sexo << endl;
        cout << quantidade[i].solteiros.pessoa << endl;
    }
    cout << "O total de homens solteiros e: " << h << endl;
    cout << "O total de mulheres solteiros e: " << m << endl;
    cout << "-x-x-x-x-x- Os casados sao -x-x-x-x-x-" << endl;
    for (int i = 0; i < total; i++)
    {
        cout << quantidade[i].casados.nome << endl;
        cout << quantidade[i].casados.idade << endl;
        cout << quantidade[i].casados.sexo << endl;
        cout << quantidade[i].casados.pessoa << endl;
    }
    cout << "O total de casados e: " << c << endl;
    return 0;
}