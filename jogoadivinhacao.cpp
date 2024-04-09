#include <iostream>
using namespace std;
int main (){
    cout << "***************************************" << endl;
    cout << "* Boas vindas ao Jogo da Adivinhação! *" << endl;
    cout << "***************************************" << endl;

    int numero_secreto=42;

    cout << "O número segreto é " <<numero_secreto << " não conte para ninguem"<<endl;

    int chute;

    cout << "Qual é o chute ?"<<endl;
    cin >> chute;
    cout << "O valor do seu chute é " << chute <<endl;

    if(chute==numero_secreto){
              cout << "Parabéns! Você acertou o número secreto!" << endl;
    }
    else if(chute>numero_secreto){
                cout << "Seu chute foi maior que o número secreto!" << endl;
    }
    else{
                cout << "Seu chute foi menor que número secreto!" << endl;
    }



}


