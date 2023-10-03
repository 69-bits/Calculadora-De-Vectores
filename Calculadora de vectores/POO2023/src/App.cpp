#include "App.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

void App::menuSelector()
{
    cout << "Ingrese con que va a querer empezar: " << endl;
    cout << "1-Vectores2D" << endl;
    cout << "2-Vectores3D" << endl;
    cout << "3-Vectores4D" << endl;
    cout << "4-salir" << endl;
    cin >> opcionSelector;

    switch (opcionSelector)
    {
    case 1:
        menuVector2();
        break;
    case 2:
        menuVector3();
        break;
    case 3:
        menuVector4();
        break;
    case 4:
        cout << "Bye..." << endl;
        break;
    default:
        cout << "No fue una opcion valida" << endl;
        break;

    }
}

void App::menuVector2()
{
    
    while (opcion != 9)
    {
        cout << "--------------------------------------" << endl;
        cout << "Ingrese la opcion a realizar en la calculadora: " << endl;
        cout << endl;

        cout << "1-Sumar vectores" << endl;
        cout << "2-Restar vectores" << endl;
        cout << "3-Multiplicar vectores" << endl;
        cout << "4-Dividir vectores" << endl;
        cout << "5-Producto punto" << endl;
        cout << "6-Producto cruz" << endl;
        cout << "7-Magnitud" << endl;
        cout << "8-Normalizacion" << endl;
        cout << "9-salir" << endl;

        cin >> opcion;

        cout << "--------------------------------------" << endl;
        float x1, y1, x2, y2;
        Vector2 punto1, punto2;
        switch (opcion)
        {
        case 1:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2;
            punto2 = Vector2(x2, y2);

            Vector2 resultadoSuma = punto1.Suma(punto2);
            resultadoSuma.print();

            break;

        case 2:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2;

            punto1 = Vector2(x1, y1);
            punto2 = Vector2(x2, y2);

            Vector2 resultadoResta = punto1.Restar(punto2);
            resultadoResta.print();

            break;

        case 3:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2;
            punto2 = Vector2(x2, y2);

            Vector2 resultadoMultiplicar = punto1.Multiplicacion(punto2);
            resultadoMultiplicar.print();

            break;

        case 4:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2;
            punto2 = Vector2(x2, y2);

            Vector2 resultadoDividir = punto1.Division(punto2);
            resultadoDividir.print();
            break;

        case 5:
            float productoPunto;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2;
            punto2 = Vector2(x2, y2);

            productoPunto = punto1.pointProduct(punto2);
            cout << productoPunto << endl;
            break;

        case 6:
            float productoCruz;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2;
            punto2 = Vector2(x2, y2);

            productoCruz = punto1.crossProduct(punto2);
            cout << productoCruz << endl;
            break;

        case 7:
            double productoMagnitud;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);

            productoMagnitud = punto1.magnitud();
            cout << productoMagnitud << endl;
            break;

        case 8:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);
            Vector2 resultadoNormalizar = punto1.normalizar();
            resultadoNormalizar.print();

            break;

        case 9:
            menuSelector();
            break;

        default:
            cout << "No fue una opcion valida" << endl;
            break;
        }
    }
}

void App::menuVector3()
{
   
    while (opcion != 9)
    {
        cout << "--------------------------------------" << endl;
        cout << "Ingrese la opcion a realizar en la calculadora: " << endl;
        cout << endl;

        cout << "1-Sumar vectores" << endl;
        cout << "2-Restar vectores" << endl;
        cout << "3-Multiplicar vectores" << endl;
        cout << "4-Dividir vectores" << endl;
        cout << "5-Producto punto" << endl;
        cout << "6-Producto cruz" << endl;
        cout << "7-Magnitud" << endl;
        cout << "8-Normalizacion" << endl;
        cout << "9-salir" << endl;

        cin >> opcion;

        cout << "--------------------------------------" << endl;
        float x1, y1, z1, x2, y2, z2;
        Vector3 punto1, punto2;
        switch (opcion)
        {
        case 1:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2;
            punto2 = Vector3(x2, y2, z2);

            Vector3 resultadoSuma = punto1.Suma(punto2);
            resultadoSuma.print();

            break;

        case 2:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2;

            punto1 = Vector3(x1, y1, z1);
            punto2 = Vector3(x2, y2, z2);

            Vector3 resultadoResta = punto1.Resta(punto2);
            resultadoResta.print();

            break;

        case 3:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2;
            punto2 = Vector3(x2, y2, z2);

            Vector3 resultadoMultiplicar = punto1.Multi(punto2);
            resultadoMultiplicar.print();

            break;

        case 4:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2;
            punto2 = Vector3(x2, y2, z2);

            Vector3 resultadoDividir = punto1.Division(punto2);
            resultadoDividir.print();
            break;

        case 5:
            float productoPunto;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2;
            punto2 = Vector3(x2, y2, z2);

            productoPunto = punto1.pointProduct(punto2);
            cout << productoPunto << endl;
            break;

        case 6:
            float productoCruz;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2;
            punto2 = Vector3(x2, y2, z2);

            productoCruz = punto1.crossProduct(punto2);
            cout << productoCruz << endl;
            break;

        case 7:
            double productoMagnitud;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);

            productoMagnitud = punto1.magnitud();
            cout << productoMagnitud << endl;
            break;

        case 8:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);
            Vector3 resultadoNormalizar = punto1.normalizar();
            resultadoNormalizar.print();

            break;

        case 9:
            menuSelector();
            break;

        default:
            cout << "No fue una opcion valida" << endl;
            break;
        }
    }
}

void App::menuVector4()
{
    
    while (opcion != 8)
    {
        cout << "--------------------------------------" << endl;
        cout << "Ingrese la opcion a realizar en la calculadora: " << endl;
        cout << endl;

        cout << "1-Sumar vectores" << endl;
        cout << "2-Restar vectores" << endl;
        cout << "3-Multiplicar vectores" << endl;
        cout << "4-Dividir vectores" << endl;
        cout << "5-Producto punto" << endl;
        cout << "6-Magnitud" << endl;
        cout << "7-Normalizacion" << endl;
        cout << "8-salir" << endl;

        cin >> opcion;

        cout << "--------------------------------------" << endl;
        float x1, y1, z1, a1, x2, y2, z2, a2;
        Vector4 punto1, punto2;
        switch (opcion)
        {
        case 1:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2 >> a2;
            punto2 = Vector4(x2, y2, z2, a2);

            Vector4 resultadoSuma = punto1.Suma(punto2);
            resultadoSuma.print();

            break;

        case 2:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2 >> a2;
            punto2 = Vector4(x2, y2, z2, a2);

            Vector4 resultadoResta = punto1.Resta(punto2);
            resultadoResta.print();

            break;

        case 3:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2 >> a2;
            punto2 = Vector4(x2, y2, z2, a2);

            Vector4 resultadoMultiplicar = punto1.Multi(punto2);
            resultadoMultiplicar.print();

            break;

        case 4:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2 >> a2;
            punto2 = Vector4(x2, y2, z2, a2);

            Vector4 resultadoDividir = punto1.Division(punto2);
            resultadoDividir.print();
            break;

        case 5:
            float productoPunto;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            cout << "A continuacion, defina la dimension de su segundo vector: " << endl;
            cin >> x2 >> y2 >> z2 >> a2;
            punto2 = Vector4(x2, y2, z2, a2);

            productoPunto = punto1.pointProduct(punto2);
            cout << productoPunto << endl;
            break;

        case 6:
            double productoMagnitud;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            productoMagnitud = punto1.magnitud();
            cout << productoMagnitud << endl;
            break;
            break;

        case 7:
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            Vector4 resultadoNormalizar = punto1.normalizar();
            resultadoNormalizar.print();
            break;

        case 8:
            menuSelector();

            break;

        default:
            cout << "No fue una opcion valida" << endl;
            break;
        }
    }
}
