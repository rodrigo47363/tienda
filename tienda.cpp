#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

class Pantalla {
public:
    void pantalla1() {
        system("color B1");
        cout << "Desarrolladora del Software: DDS" << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << "                                                  TIENDA LOS GARCIA                                                     " << endl;
        cout << "                                                  _________________                                                     " << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::                 :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::    BIENVENIDO   :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::_________________:::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                               _______________________ " << endl;
        cout << "                                                   INGRESE SU CLAVE: "; 
        cin >> clave;

        switch (clave) {
            case 445500:
                system("cls");
                pantalla2();
                break;
            default:
                cout << "¡LA CONTRASEÑA ES INCORRECTA!" << endl;
                cout << endl;
                system("PAUSE");
                system("cls");
                pantalla1();
        }
    }

    void pantalla2() {
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                  _________________                                                     " << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::      MENU       :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::    PRINCIPAL    :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::_________________:::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                             1-.REGISTRO DEL PRODUCTO" << endl;
        cout << "                                             2-.REGISTRO DE EMPLEADOS" << endl;
        cout << "                                             3-.REGISTRO DE PROVEEDORES" << endl;
        cout << "                                             4-.ELIMINACION DEL PRODUCTO" << endl;
        cout << "                                             5-.¡SALIR!" << endl;
        cout << "_________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                 SELECCIONE UNA OPCION: "; 
        cin >> opc;

        switch (opc) {
            case 1:
                system("cls");
                pantalla3();
                break;
            case 2:
                system("cls");
                pantalla4();
                break;
            case 3:
                system("cls");
                pantalla5();
                break;
            case 4:
                system("cls");
                pantalla6();
                break;
            case 5:
                system("cls");
                pantalla7();
                break;
            default:
                cout << "Opción no válida, por favor intente de nuevo." << endl;
                system("PAUSE");
                system("cls");
                pantalla2();
        }
    }

    void pantalla3() {
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                  _________________                                                     " << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::    REGISTRO     :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::    PRODUCTO     :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::_________________:::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "1-.CLAVE: "; cin >> clave2;
        cout << "2-.NOMBRE: "; cin >> nombre;
        cout << "3-.PRECIO: "; cin >> precio;
        cout << "4-.CANTIDAD: "; cin >> cantidad;
        cout << "5-.MARCA: "; cin >> marca;
        cout << endl;
        cout << "_________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                     1-.REGRESAR" << endl;
        cout << "                                                     2-.GUARDAR" << endl;
        cout << "                                                     (ELIJA UNA OPCION): "; cin >> opc2;

        switch (opc2) {
            case 1:
                system("cls");
                pantalla2();
                break;
            case 2:
                // Lógica para guardar el producto
                cout << "Producto guardado con éxito." << endl;
                system("PAUSE");
                system("cls");
                pantalla2();
                break;
            default:
                cout << "Opción no válida, por favor intente de nuevo." << endl;
                system("PAUSE");
                system("cls");
                pantalla3();
        }
    }

    void pantalla4() {
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                  _________________                                                     " << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::    REGISTRO     :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::   EMPLEADOS     :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::_________________:::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "1-.MATRICULA: "; cin >> matricula;
        cout << "2-.NOMBRE: "; cin >> nombre2;
        cout << "3-.DIRECCION: "; cin >> direccion;
        cout << "4-.NUM TEL: "; cin >> numtel;
        cout << endl;
        cout << "_________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                     1-.REGRESAR" << endl;
        cout << "                                                     2-.GUARDAR" << endl;
        cout << "                                                     (ELIJA UNA OPCION): "; cin >> opc3;

        switch (opc3) {
            case 1:
                system("cls");
                pantalla2();
                break;
            case 2:
                // Lógica para guardar el empleado
                cout << "Empleado guardado con éxito." << endl;
                system("PAUSE");
                system("cls");
                pantalla2();
                break;
            default:
                cout << "Opción no válida, por favor intente de nuevo." << endl;
                system("PAUSE");
                system("cls");
                pantalla4();
        }
    }

    void pantalla5() {
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                  _________________                                                     " << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::    REGISTRO     :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::   PROVEEDORES   :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::_________________:::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "1-.CLAVE: "; cin >> clave3;
        cout << "2-.NOMBRE: "; cin >> nombre3;
        cout << "3-.CORREO: "; cin >> correo;
        cout << "4-.NUM TEL: "; cin >> numtel2;
        cout << endl;
        cout << "_________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                     1-.REGRESAR" << endl;
        cout << "                                                     2-.GUARDAR" << endl;
        cout << "                                                     (ELIJA UNA OPCION): "; cin >> opc4;

        switch (opc4) {
            case 1:
                system("cls");
                pantalla2();
                break;
            case 2:
                // Lógica para guardar el proveedor
                cout << "Proveedor guardado con éxito." << endl;
                system("PAUSE");
                system("cls");
                pantalla2();
                break;
            default:
                cout << "Opción no válida, por favor intente de nuevo." << endl;
                system("PAUSE");
                system("cls");
                pantalla5();
        }
    }

    void pantalla6() {
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                  _________________                                                     " << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::   ELIMINACION   :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::     PRODUCTO    :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "::::::::::::::::::::::::::::::::::::::::::::::::::_________________:::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                             1-.PRESIONE (1) PARA ELIMINAR" << endl;
        cout << "                                             2-.PRESIONE (2) PARA REGRESAR" << endl;
        cout << "_________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "                                                 SELECCIONE UNA OPCION: "; 
        cin >> opc5;

        switch (opc5) {
            case 1:
                // Lógica para eliminar el producto
                cout << "¡PRODUCTO ELIMINADO!" << endl;
                system("PAUSE");
                system("cls");
                pantalla2();
                break;
            case 2:
                system("cls");
                pantalla2();
                break;
            default:
                cout << "Opción no válida, por favor intente de nuevo." << endl;
                system("PAUSE");
                system("cls");
                pantalla6();
        }
    }

    void pantalla7() {
        cout << "                        |::::::|   |:::::|          |::|        |::::::|   |::::::|        |::|        |:::::|            " << endl;
        cout << "                       |::|        |::| |::|      |::||::|     |::|          |::|        |::||::|     |:::|             " << endl;
        cout << "                       |::|  |:::| |:::::|       |::|  |::|    |::|          |::|       |::|  |::|     |:::::|            " << endl;
        cout << "                       |::|   |::| |::  |::|    |::::::::::|   |::|          |::|      |::::::::::|       |:::|         " << endl;
        cout << "                        |::::::|   |::   |::|  |::|      |::|   |::::::|   |::::::|   |::|      |::|  |:::::|            " << endl;
        cout << "                                                                                                                         " << endl;
    }

private:
    int clave, opc, opc2, opc3, opc5, clave2, opc4, cantidad, numtel, matricula, numtel2, clave3;
    float precio;
    string marca, nombre, nombre2, direccion, correo, nombre3;
};

int main() {
    Pantalla abrir;
    abrir.pantalla1();
    Beep(1577, 200);
    return 0;
}
