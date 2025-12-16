#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

struct Limites {
    long long  inicio;
    long long  fim;
    
    Limites(long long  i, long long f) : inicio(i), fim(f) {}
};

string int_to_string(long long valor) {
    stringstream ss;
    ss << valor;
    return ss.str();
}

long long my_stoll(const std::string& str) {
    long long result;
    std::stringstream ss(str);
    ss >> result;
    return result;
}

int main(int argc, char* argv[]){
    string s;
    long long int sum = 0;

    vector<Limites> lista;

    while(cin >> s){

        size_t pos_traco = s.find('-');
        
        if(pos_traco != string::npos){
            cout << "Before blank: " << s << endl;
            stringstream ss(s);
            long long int ini, fim;
            char lixo;
            ss >> ini >> lixo >> fim;
            lista.push_back(Limites(ini, fim));
        }else{
            cout << "After blank: " << s << endl;
            bool spoiled = true;
            long long numero = my_stoll(s);
            for(size_t i = 0; i < lista.size(); i++){
                if (numero >= lista[i].inicio && numero <= lista[i].fim){
                    spoiled = false;
                }
            }
            if(!spoiled)
                sum++;
        }
        
    }
    
    cout << "Resultado final: " << sum << endl;
}