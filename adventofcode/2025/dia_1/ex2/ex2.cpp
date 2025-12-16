#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    string s;

    long long int soma = 50;
    long long senha = 0;
    int rotacao = 0;
    while(cin>>s){
        int numero = stoi(s.substr(1));
        if(s[0] == 'R'){
            for(int i = 0; i < numero; i++){
                soma++;
                if(soma == 100){
                    senha++;
                    soma = 0;
                }
            }
        }else{
            for(int i = 0; i < numero; i++){
                soma--;
                if(soma == 0){
                    senha++;
                }else if(soma < 0){
                    soma = 99;
                }
            }
        }

        senha += rotacao;
        cout << "Posicao: " << soma << endl;
        cout << "Senha atual: " << senha << endl;
    }
    cout << "Resultado final: " << senha << endl;
}