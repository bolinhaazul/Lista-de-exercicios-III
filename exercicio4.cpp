#include <iostream>
#include <cstring>
using namespace std;
int i;
struct Endereco
{
    char rua[50];
    char numero[4];
    char bairro[10];
    char cidade[20];
};
typedef struct Dados
{
    Endereco endereco;
    char nome[30];
    char telefone[15];
};

int main()
{
    Dados dados[5];
    char aux[30], aux1[50], aux2[4], aux3[10], aux4[20], aux5[15];
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o nome: ";
        cin.getline(dados[i].nome, 30);
        cout << "Digite o telefone: ";
        cin.getline(dados[i].telefone, 15);
        cout << "Rua: ";
        cin.getline(dados[i].endereco.rua, 50);
        cout << "Numero: ";
        cin.getline(dados[i].endereco.numero, 4);
        cout << "Bairro: ";
        cin.getline(dados[i].endereco.bairro, 10);
        cout << "Cidade: ";
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
                strcpy(aux1, dados[j - 1].endereco.rua);
                strcpy(dados[j - 1].endereco.rua, dados[j].endereco.rua);
                strcpy(aux2, dados[j - 1].endereco.numero);
                strcpy(dados[j - 1].endereco.numero, dados[j].endereco.numero);
                strcpy(aux3, dados[j - 1].endereco.bairro);
                strcpy(dados[j - 1].endereco.bairro, dados[j].endereco.bairro);
                strcpy(aux4, dados[j - 1].endereco.cidade);
                strcpy(dados[j - 1].endereco.cidade, dados[j].endereco.cidade);
                strcpy(aux5, dados[j - 1].telefone);
                strcpy(dados[j - 1].telefone, dados[j].telefone);
            }
        }
    }
    cout << "-x-x-x-x-x-x-x-x-x DADOS EM ORDEM ALFABETICA -x-x-x-x-x-x-x-x-x" << endl;
    for (int i = 0; i < 5; i++)
    {
        int b = i + 1;
        cout << "-x-x-x-x-x- Dados da Pessoa " << b << " -x-x-x-x-x-" << endl;
        cout << "Nome: " << dados[i].nome << endl;
        cout << "Telefone: " << dados[i].telefone << endl;
        cout << "Rua: " << dados[i].endereco.rua << endl;
        cout << "Numero: " << dados[i].endereco.numero << endl;
        cout << "Bairro: " << dados[i].endereco.bairro << endl;
        cout << "Cidade: " << dados[i].endereco.cidade << endl;
    }
    return 0;
}