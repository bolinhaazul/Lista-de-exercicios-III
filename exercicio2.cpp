#include <iostream>

using namespace std;

struct Veiculo{
    string marca;
    int ano;
    float preco;
};

int main(){
    Veiculo carro[5];
    int i;
    for(i = 0; i < 5; i++){
        cout<<"Digite a marca do carro: "<<endl;
        cin>>carro[i].marca;
        cout<<"Digite o ano do carro: "<<endl;
        cin>>carro[i].ano;
        cout<<"Digite o preco do carro: "<<endl;
        cin>>carro[i].preco;
    }
    cout<<"Digite um preco para buscar o carro: "<<endl;
    cin>>carro[5].preco;
    do{
        for(i=0; i<5; i++){
            cout<<"Marca: "<<carro[i].marca<<endl;
            cout<<"Ano: "<<carro[i].ano<<endl;
            cout<<"Preco: "<<carro[i].preco<<endl;
        }

    }
    while(carro[i].preco < carro[5].preco);
    return 0;
}
