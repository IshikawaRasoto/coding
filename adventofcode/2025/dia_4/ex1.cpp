#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    string s;

    int linhas = 0;
    int colunas = 0;
    long long int sum = 0;
    int quant = 0;
    long long int removidos = 1;
    int debug = 0;

    vector<string> temp;

    while(cin>>s){
        temp.push_back(s);
    }

    for(int i = 0; i < temp.size(); i++){
        for(int j = 0; j < temp[i].size(); j++){
            cout << temp[i][j];
        }
        cout << endl;
    }

    while (removidos != 0){
        removidos = 0;
        for(int i = 0; i < temp.size(); i++){
            for(int j = 0; j < temp[i].size(); j++){
                if (temp[i][j] != '@') continue;
                quant = 0;
                for(int x = -1; x < 2; x++){
                    for(int y = -1; y < 2; y++){
                        if(x == -1 && i == 0) continue;
                        else if (x == 1 && i == temp.size()-1) continue;
                        else if (y == -1 && j == 0) continue;
                        else if (y == 1 && j == temp[i].size()-1) continue;
                        if(temp[i+x][j+y]=='@') quant++;
                    }
                }
                if(quant < 5){
                    removidos++;
                    sum++;
                    temp[i][j] = 'x';
                }
            }
        }

        cout << "Execucao: " << debug++ << endl;
        cout << "Removidos: " << removidos << endl;
        for(int i = 0; i < temp.size(); i++){
            for(int j = 0; j < temp[i].size(); j++){
                cout << temp[i][j];
            }
            cout << endl;
        }
    }

    

    cout << "Linhas: " << temp.size() << endl;
    cout << "Colunas: " << temp[0].size() << endl;
    cout << "Resultado final: " << sum << endl;
}