#include <iostream>
#include <string>
using namespace std;

class Celular {
private:
    string marca;
    string modelo;
    int bateria;

public:
    Celular(string mrc, string mdl, int bat){
        Celular::marca = mrc;
        Celular::modelo = mdl;
        Celular::bateria = bat;
    }

    void llamar(){
        cout << "El celular "<<marca <<" "<<modelo <<" puede realizar llamadas internacionales" << endl;
    }

    void carga(){
        cout << "El celular "<<marca <<" "<<modelo <<" tarda de 1 a 2 horas en cargar al 100%" << endl;
    }

    void mostrarInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Bateria: " << bateria << " bat" << endl;
        cout << "------------------------" << endl;
    }
};
int main() {
    Celular celular1("Xiaomi", "Redmi Note 14 C", 5000);
    celular1.mostrarInfo();
    Celular celular2("Apple", "Iphone 17 pro", 4500);
    celular2.mostrarInfo();

    celular1.llamar();
    celular2.carga();

    return 0;
}