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
        cout << "Ingrese contaseņa: ";
        cin >> password;
    }

    if ( password != userPassword ){
        cout << "Contraseņa incorrecta" << endl;
    }else{
        cout << "Bienvenido";
    }

return 0;
}
