#include <iostream>

using namespace std;

int main(){

    string userName = "avince";
    string userPassword = "12345";

    string password, name;

    cout << "Ingrese el usuario: ";
    cin >> name;


    if ( name != userName ){
        cout << "Usuario incorrecto" << endl;
    }else{
        cout << "Ingrese contase�a: ";
        cin >> password;
    }

    if ( password != userPassword ){
        cout << "Contrase�a incorrecta" << endl;
    }else{
        cout << "Bienvenido";
    }

return 0;
}
