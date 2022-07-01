#include <iostream>
#include <cstring>
using namespace std;
int i;
struct Endereco
{
    char rua[50];
    string numero;
    char bairro[10];
    char cidade[20];
};
typedef struct Dados
{
    Endereco endereco;
    char nome[30];
    string telefone;
};

int main()
{
    Dados dados[5];
    char aux[30];
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o nome: ";
        cin.getline(dados[i].nome, 30);
        cout << "Digite o telefone: ";
        cin >> dados[i].telefone;
        cout << "Rua: " << endl;
        cin.ignore();
        cin.getline(dados[i].endereco.rua, 50);
        cout << "Numero: " << endl;
        cin >> dados[i].endereco.numero;
        cout << "Bairro: " << endl;
        cin.ignore();
        cin.getline(dados[i].endereco.bairro, 10);
        cout << "Cidade: " << endl;
        cin.getline(dados[i].endereco.cidade, 20);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (strcmp(dados[j - 1].nome, dados[j].nome) > 0)
            {
                strcpy(aux, dados[j - 1].nome);
                strcpy(dados[j - 1].nome, dados[j].nome);
                strcpy(dados[j].nome, aux);
                strcpy(aux, dados[j - 1].endereco.rua);
                strcpy(dados[j - 1].endereco.rua, dados[j].endereco.rua);
                strcpy(aux, dados[j - 1].endereco.numero);
                strcpy(dados[j-1].endereco.numero, dados[j].endereco.numero)
                strcpy(aux, dados[j - 1].endereco.bairro);
                strcpy(dados[j - 1].endereco.bairro, dados[j].endereco.bairro);
                strcpy(aux, dados[j - 1].endereco.cidade);
                strcpy(dados[j - 1].endereco.cidade, dados[j].endereco.cidade);
                strcpy(aux, dados[j-1].telefone);
                strcpy(dados[j-1].telefone, dados[j].telefone)
            }
        }
    }
    cout << "-x-x-x-x-x-x-x-x-x DADOS EM ORDEM ALFABETICA -x-x-x-x-x-x-x-x-x" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nome: " << dados[i].nome << endl;
        cout << "Telefone: " << dados[i].telefone << endl;
        cout << "Rua: " << dados[i].endereco.rua << endl;
        cout << "Numero: " << dados[i].endereco.numero << endl;
        cout << "Bairro: " << dados[i].endereco.bairro << endl;
        cout << "Cidade: " << dados[i].endereco.cidade << endl;
    }
    return 0;
}