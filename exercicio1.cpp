#include <iostream>

using namespace std;

struct Datanascimento{
    int dia;
    int mes;
    int ano;
};

struct Dadospessoais{
    Datanascimento data;
    string cpf;
    char sexo[10];
    char nome[50];
};

struct Dadofuncional{
    int setor;
    char cargo[30];
    float salario;
};

int main(){
    Dadospessoais funcionario;
    Dadofuncional dadosfuncionario;
    cout<<"Digite o nome do funcionario: "<<endl;
    cin.getline(funcionario.nome, 50);
    cout<<"Digite o cpf do funcionario: "<<endl;
    cin>>funcionario.cpf;
    cout<<"Digite o sexo do funcionario: "<<endl;
    cin.ignore();
    cin.getline(funcionario.sexo, 10);
    cout<<"Digite o dia de nascimento do funcionario: "<<endl;
    cin>>funcionario.data.dia;
    cout<<"Digite o mes de nascimento do funcionario: "<<endl;
    cin>>funcionario.data.mes;
    cout<<"Digite o ano de nascimento do funcionario: "<<endl;
    cin>>funcionario.data.ano;
    cout<<"Digite o setor do funcionario: "<<endl;
    cin>>dadosfuncionario.setor;
    cout<<"Digite o cargo do funcionario: "<<endl;
    cin.ignore();
    cin.getline(dadosfuncionario.cargo, 30);
    cout<<"Digite o salario do funcionario: "<<endl;
    cin>>dadosfuncionario.salario;
    cout<<"Nome: "<<funcionario.nome<<endl;
    cout<<"CPF: "<<funcionario.cpf<<endl;
    cout<<"Sexo: "<<funcionario.sexo<<endl;
    cout<<"Data de nascimento: "<<funcionario.data.dia<<"/"<<funcionario.data.mes<<"/"<<funcionario.data.ano<<endl;
    cout<<"Setor: "<<dadosfuncionario.setor<<endl;
    cout<<"Cargo: "<<dadosfuncionario.cargo<<endl;
    cout<<"Salario: "<<dadosfuncionario.salario<<endl;
    return 0;
}