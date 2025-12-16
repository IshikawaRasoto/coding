#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    string s;

    long long int soma = 0;
    long long linha = 0;
    while(cin>>s){
        char resposta = '0';
        char dir = '0';
        for(int i = 0; i < s.length(); i++){
            if(s[i] > esq && i != s.length() - 1){
                esq = s[i];
                dir = s[i+1];
            }else if(s[i] > dir){
                dir = s[i];
            }
        }   
        int num_esq = esq - '0';
        int num_dir = dir - '0';
        cout << "Resultado linha [" << linha++ << "]: " << num_esq << num_dir << endl;
        soma += num_esq*10 + num_dir;
        cout << "Soma atual: " << soma << endl;
    }
    cout << "Resultado final: " << soma << endl;
}