#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

struct Limites {
    long long  inicio;
    long long  fim;
    
    // Construtor necessário para versões antigas facilitarem a inserção
    Limites(long long  i, long long f) : inicio(i), fim(f) {}
};

string int_to_string(long long valor) {
    stringstream ss;
    ss << valor;
    return ss.str();
}

int main(int argc, char* argv[]){
    string s;
    long long int sum = 0;

    vector<Limites> lista;
    string segmento;
    while(cin >> s){
        stringstream ss(s);
        while(getline(ss, segmento, ',')){
            long long int ini, fim;
            char lixo;
            stringstream sss(segmento);
            sss >> ini >> lixo >> fim;
            lista.push_back(Limites(ini, fim));
        }
    }

    for (size_t i = 0; i < lista.size(); ++i) {
        cout << "Inicio: " << lista[i].inicio 
             << " | Fim: " << lista[i].fim << endl;
    }

    for(size_t i = 0; i < lista.size(); i++){
        for(long long numero = lista[i].inicio; numero <= lista[i].fim; numero++){
            //long long n = abs(numero);
            string str_numero = int_to_string(numero);
            if(str_numero.length()%2) continue;
            size_t mid = str_numero.length() / 2;
            string first_half = str_numero.substr(0, mid);
            string last_half = str_numero.substr(mid);
            bool igual = true;
            for(int j = 0; j < first_half.length(); j++){
                if (first_half[j] != last_half[j])
                    igual = false;
            }
            if(igual){
                sum += numero;
            }
        }
    }
    
    cout << "Resultado final: " << sum << endl;
}