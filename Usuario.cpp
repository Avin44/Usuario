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
        cout << "Ingrese contaseña: ";
        cin >> password;
    }

    if ( password != userPassword ){
        cout << "Contraseña incorrecta" << endl;
    }else{
        cout << "Bienvenido";
    }

return 0;
}
