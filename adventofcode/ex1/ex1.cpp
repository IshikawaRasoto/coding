#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    string s;

    long long int soma = 50;

    while(cin>>s){
        int numero = stoi(s.substr(1));
        cout << "Input: " << s[0] << numero << endl;
        if(s[0] == 'R'){
            soma += numero;
            soma %= 100;
        }else{
            soma -= numero;
            if (soma < 0){
                soma %= 100;
                soma *= -1;
            }
        }
        cout << "Soma" << soma << endl;
    }
}