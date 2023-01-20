
#include <iostream>
using namespace std;

int main(){
    int opcion = 0;
    
    cout << "Menu" << endl << "1) ejercicio 1" << endl << "2) ejercicio 2" << endl << "Ingrese la opcion que desea: ";
    cin >> opcion;
    cout << endl;

    if (opcion == 1) {
        int n;

        double x_d;
        double s_d = 0;
        double e_d;

        float x_f;
        float s_f = 0;
        float e_f;

        long double x_l;
        long double s_l = 0;
        long double e_l;

        cout << "Ingrese el valor de N: ";
        cin >> n;

        x_d = static_cast<double>(1) / static_cast<double>(n);
        x_f = static_cast<float>(1) / static_cast<float>(n);
        x_l = static_cast<long double>(1) / static_cast<long double>(n);

        for (int i = 0; i < n; i++){
            s_d += x_d;
            s_f += x_f;
            s_l += x_l;
        }
        e_d = static_cast<double>(1) - s_d;
        e_f = static_cast<float>(1) - s_f;
        e_l = static_cast<long double>(1) - s_l;

        cout << "Usando Double:" << endl << "E: " << e_d << endl;
        cout << "Usando Float:" << endl << "E: " << e_f << endl;
        cout << "Usando Long Double:" << endl << "E: " << e_l << endl;
    }
    else if (opcion == 2) {
        int p;
        int a;
        int b;
        int m = 0;

        cout << "Ingrese P:" << endl;
        cin >> p;
        cout << "Ingrese A:" << endl;
        cin >> a;
        cout << "Ingrese B:" << endl;
        cin >> b;
        
        while (b != 0 && p != 0) {
            m += a / b;
            b--;
            p--;
        }
        cout << "M = " << m << endl;
    }
    else {
        cout << "Opcion incorrecta";
    }
}