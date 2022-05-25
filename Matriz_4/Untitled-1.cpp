#include <iostream>
using namespace std;

#include <locale.h>
#define tam 5
int main(){
    setlocale(LC_ALL, "Portuguese");
 int matriz[tam][tam], linha, coluna;

 for (linha=0; linha<tam; linha++){
        for (coluna=0; coluna<tam; coluna++) {
            if(linha>coluna){
                matriz[linha][coluna]=1;
            }else{
                matriz[linha][coluna]=0;
            }
        }
 }

 for (linha=0; linha<tam; linha++){
    for (coluna=0; coluna<tam; coluna++){
        cout << matriz[linha][coluna] << " | ";
    }
        cout << endl;
 }


    return 0;
}
