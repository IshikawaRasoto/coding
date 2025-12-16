#include <iostream>
#include <string>
#include <vector>

typdef struct{
    long long inicio;
    long long fim;
}Intervalo;

using namespace std;

int main(int argc, char* argv[]){
    string s;
    string segmento;

    unsigned long long soma = 0;
    vector<Intervalo> listaIntervalos;

    while (cin >> s){
        while(getline(s, segmento, ',')){
            size_t posHifen = segmento.find('-');
            string inicio = segmento.substr(0, posHifen);
            string fim = segmento.substr(posHifen+1);

            long long num_inicio = stoll(inicio);
            long long num_fim = stoll(fim);

            listaIntervalos.push_back({num_inicio, num_fim});
        }
    }

    for(const auto& intervalo : listaIntervalos){
        for(long long i = intervalo.inicio; i <= intervalo.fim; i++){
            string analise = to_string(i);
            for(int j = 0; j <= analise.length()/2; j++){
                for(int k = )
            }
        }
    }
}