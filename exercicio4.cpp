#include <iostream>
#include <cstring>
using namespace std;
int i;
struct Endereco{
    char rua[50];
    int numero;
    char bairro[10];
    char cidade[20];
};
typedef struct Dados{
    Endereco endereco;
    char nome[30];
    int telefone;
};
typedef struct Posicao{
    Dados dados;
};

int main(){
    Posicao posicao[5];
    char aux[30];
    for(int i=0 ; i<5 ; i++){
        cout << "Digite o nome: ";
        cin.getline(posicao[i].dados.nome,30);
        cout << "Digite o telefone: ";
        cin>>posicao[i].dados.telefone;
        cout << "Rua: "<<endl;
        cin.ignore();
        cin.getline(posicao[i].dados.endereco.rua,50);
        cout << "Numero: "<<endl;
        cin>>posicao[i].dados.endereco.numero;
        cout << "Bairro: "<<endl;
        cin.ignore();
        cin.getline(posicao[i].dados.endereco.bairro,10);
        cout << "Cidade: "<<endl;
        cin.getline(posicao[i].dados.endereco.cidade,20);
    }
    for(int i=0 ; i<5 ; i++){
        for(int j=1 ; j<5 ; j++){
            if(strcmp(posicao[j-1].dados.nome, posicao[j].dados.nome)>0){
                strcpy(aux, posicao[j-1].dados.nome);
                strcpy(posicao[j-1].dados.nome, posicao[j].dados.nome);
                strcpy(posicao[j].dados.nome, aux);
            }
        }
    }
    cout<<"-x-x-x-x-x-x-x-x-x DADOS EM ORDEM ALFABETICA -x-x-x-x-x-x-x-x-x"<<endl;
    for(int i=0 ; i<5 ; i++){
        cout << "Nome: "<<posicao[i].dados.nome<<endl;
        cout << "Telefone: "<<posicao[i].dados.telefone<<endl;
        cout << "Rua: "<<posicao[i].dados.endereco.rua<<endl;
        cout << "Numero: "<<posicao[i].dados.endereco.numero<<endl;
        cout << "Bairro: "<<posicao[i].dados.endereco.bairro<<endl;
        cout << "Cidade: "<<posicao[i].dados.endereco.cidade<<endl;
    }
    return 0;
}