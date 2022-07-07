#include <iostream>
#include <cstring>

using namespace std;

typedef struct Endereco
{
    char rua[50];
    int numero;
    string bairro;
    char cidade[30];
    char estado[20];
    char cep[9];
};
typedef struct Cadastro
{
    string nome;
    int salario;
    char identidade[8];
    char cpf[11];
    char estadocivil;
    char telefone[11];
    char sexo;
    int idade;
    Endereco endereco;
};

void maisvelho(Cadastro cadastro[], int n)
{
    n = cadastro[0].idade;
    for (int i = 0; i < 5; i++)
    {
        if (cadastro[i].idade > n)
        {
            n = cadastro[i].idade;
        }
    }
    cout << "O mais velho e: " << n << endl;
}
void sexomasculino(Cadastro cadastro[])
{
    cout << "-x-x-x PESSOAS DO SEXO MASCULINO x-x-x-" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (cadastro[i].sexo == 'M')
        {
            cout << "Nome: " << cadastro[i].nome << endl;
            cout << "Identidade: " << cadastro[i].identidade << endl;
            cout << "CPF: " << cadastro[i].cpf << endl;
            cout << "Estado Civil: " << cadastro[i].estadocivil << endl;
            cout << "Telefone: " << cadastro[i].telefone << endl;
            cout << "Idade: " << cadastro[i].idade << endl;
            cout << "Salario: " << cadastro[i].salario << endl;
            cout << "Rua: " << cadastro[i].endereco.rua << endl;
            cout << "Numero: " << cadastro[i].endereco.numero << endl;
            cout << "Bairro: " << cadastro[i].endereco.bairro << endl;
            cout << "Cidade: " << cadastro[i].endereco.cidade << endl;
            cout << "Estado: " << cadastro[i].endereco.estado << endl;
            cout << "CEP: " << cadastro[i].endereco.cep << endl;
        }
    }
}

void salario(Cadastro cadastro[])
{
    cout << "-x-x-x PESSOAS COM SALARIO MAIOR QUE 1212 x-x-x-" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (cadastro[i].salario > 1212)
        {
            cout << "Nome: " << cadastro[i].nome << endl;
            cout << "Identidade: " << cadastro[i].identidade << endl;
            cout << "CPF: " << cadastro[i].cpf << endl;
            cout << "Estado Civil: " << cadastro[i].estadocivil << endl;
            cout << "Telefone: " << cadastro[i].telefone << endl;
            cout << "Idade: " << cadastro[i].idade << endl;
            cout << "Salario: " << cadastro[i].salario << endl;
            cout << "Rua: " << cadastro[i].endereco.rua << endl;
            cout << "Numero: " << cadastro[i].endereco.numero << endl;
            cout << "Bairro: " << cadastro[i].endereco.bairro << endl;
            cout << "Cidade: " << cadastro[i].endereco.cidade << endl;
            cout << "Estado: " << cadastro[i].endereco.estado << endl;
            cout << "CEP: " << cadastro[i].endereco.cep << endl;
        }
    }
}

int main()
{
    Cadastro cadastro[5];
    int n = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o nome: ";
        cin >> cadastro[i].nome;
        cout << "Digite a identidade: " << endl;
        cin.getline(cadastro[i].identidade, 8);
        cout << "Digite o cpf: ";
        cin.getline(cadastro[i].cpf, 11);
        cout << "Digite o estado civil: ";
        cin >> cadastro[i].estadocivil;
        cout << "Digite o telefone: ";
        cin.getline(cadastro[i].telefone, 11);
        cout << "Digite m para homem e f para mulher: ";
        cin >> cadastro[i].sexo;
        cout << "Digite a idade: ";
        cin >> cadastro[i].idade;
        cout << "Digite o salario: ";
        cin >> cadastro[i].salario;
        cout << "Digite a rua: ";
        cin.getline(cadastro[i].endereco.rua, 50);
        cout << "Digite o numero: ";
        cin >> cadastro[i].endereco.numero;
        cout << "Digite o bairro: ";
        cin >> cadastro[i].endereco.bairro;
        cout << "Digite a cidade: ";
        cin.getline(cadastro[i].endereco.cidade, 30);
        cout << "Digite o estado: ";
        cin.getline(cadastro[i].endereco.estado, 20);
        cout << "Digite o cep: ";
        cin.getline(cadastro[i].endereco.cep, 9);
    }
    cout << "-x-x-x-x- O MAIS VELHO E x-x-x-x-x-" << endl;
    maisvelho(cadastro, n);
    sexomasculino(cadastro);
    salario(cadastro);
    return 0;
}