#include <iostream>
#include <cstring>
using namespace std;

struct Livro{
    char titulo[30];
    char categoria[15];
    char autor[20];
    char editora[15];
    int paginas;
    int ano;
};

int main(){
    Livro livro[5];
    for(int i = 0; i < 5; i++){
        cout<<"Digite o titulo do livro: "<<endl;
        cin.getline(livro[i].titulo, 30);
        cout<<"Digite a categoria do livro: "<<endl;
        cin.ignore();
        cin.getline(livro[i].categoria, 15);
        cout<<"Digite o autor do livro: "<<endl;
        cin.ignore();
        cin.getline(livro[i].autor, 20);
        cout<<"Digite a editora do livro: "<<endl;
        cin.ignore();
        cin.getline(livro[i].editora, 15);
        cout<<"Digite a quantidade de paginas do livro: "<<endl;
        cin>>livro[i].paginas;
        cout<<"Digite o ano do livro: "<<endl;
        cin>>livro[i].ano;
    }
    cout<<"Digite o titulo do livro: "<<endl;
    cin.ignore();
    cin.getline(livro[5].titulo, 30);
    for(int i = 0; i < 5; i++){
        if(strcmp(livro[i].titulo, livro[5].titulo) == 0){
            cout<<"Titulo: "<<livro[i].titulo<<endl;
            cout<<"Categoria: "<<livro[i].categoria<<endl;
            cout<<"Autor: "<<livro[i].autor<<endl;
            cout<<"Editora: "<<livro[i].editora<<endl;
            cout<<"Paginas: "<<livro[i].paginas<<endl;
            cout<<"Ano: "<<livro[i].ano<<endl;
        }
    }
    return 0;
}