#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    string s;

    long long int soma = 50;
    long long senha = 0;
    while(cin>>s){
        int numero = stoi(s.substr(1));
        int rotacao = 0;
        cout << "Input: " << s[0] << numero << endl;
        if(s[0] == 'R'){
            soma += numero;
            soma %= 100;
        }else{
            numero %= 100;
            soma -= numero;
            if (soma < 0){
                soma = 100 + soma;
                rotacao++;
            }
        }

        if (soma == 0)
            senha++;

        cout << "senha: " << senha << endl;
    }
    cout << "Resultado final: " << senha << endl;
}