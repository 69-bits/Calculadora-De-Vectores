#include "App.h"

void App::menuSelector()
{
    // Display menu options for selecting vector types.
    
    while (opcionSelector != 4)
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
            menuVector2(); // Call the menu for 2D vectors.
            break;
        case 2:
            menuVector3(); // Call the menu for 3D vectors.
            break;
        case 3:
            menuVector4(); // Call the menu for 4D vectors.
            break;
        case 4:
            cout << "Bye..." << endl;
            break;
        default:
            cout << "No fue una opcion valida" << endl;
            break;
        }
    }
}

void App::menuVector2()
{
    // Display menu options for 2D vector operations.
   
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
            // Prompt for input and perform vector addition.
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
            // Prompt for input and perform vector subtraction.
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
            // Prompt for input and perform vector multiplication.
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
            // Prompt for input and perform vector division.
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
            // Prompt for input and calculate dot product of vectors.
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
            // Prompt for input and calculate cross product.
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
            // Prompt for input and calculate magnitude of the vector.
            double productoMagnitud;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);

            productoMagnitud = punto1.magnitud();
            cout << productoMagnitud << endl;
            break;

        case 8:
            // Prompt for input and normalize the vector.
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1;
            punto1 = Vector2(x1, y1);
            Vector2 resultadoNormalizar = punto1.normalizar();
            resultadoNormalizar.print();

            break;

        case 9:
            // Return to the main menu.
            menuSelector();
            break;

        default:
            cout << "No fue una opcion valida" << endl;
            break;
        }
    
}

void App::menuVector3()
{
   
        // Display menu options for 3D vector operations.
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
            // Prompt for input and perform vector addition.
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
            // Prompt for input and perform vector subtraction.
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
            // Prompt for input and perform vector multiplication.
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
            // Prompt for input and perform vector division.
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
            // Prompt for input and calculate dot product of vectors.
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
            // Prompt for input and calculate cross product of vectors.
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
            // Prompt for input and calculate magnitude of the vector.
            double productoMagnitud;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);

            productoMagnitud = punto1.magnitud();
            cout << productoMagnitud << endl;
            break;

        case 8:
            // Prompt for input and normalize the vector.
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1;
            punto1 = Vector3(x1, y1, z1);
            Vector3 resultadoNormalizar = punto1.normalizar();
            resultadoNormalizar.print();

            break;

        case 9:
            // Return to the main menu.
            menuSelector();
            break;

        default:
            cout << "No fue una opcion valida" << endl;
            break;
        }
}

void App::menuVector4()
{
    
        // Display menu options for 4D vector operations.
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
            // Prompt for input and perform vector addition.
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
            // Prompt for input and perform vector subtraction.
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
            // Prompt for input and perform vector multiplication.
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
            // Prompt for input and perform vector division.
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
            // Prompt for input and calculate dot product of vectors.
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
            // Prompt for input and calculate magnitude of the vector.
            double productoMagnitud;
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            productoMagnitud = punto1.magnitud();
            cout << productoMagnitud << endl;
            break;
            break;

        case 7:
            // Prompt for input and normalize the vector.
            cout << "A continuacion, defina la dimension de su primer vector: " << endl;
            cin >> x1 >> y1 >> z1 >> a1;
            punto1 = Vector4(x1, y1, z1, a1);

            Vector4 resultadoNormalizar = punto1.normalizar();
            resultadoNormalizar.print();
            break;

        case 8:
            // Return to the main menu.
            menuSelector();

            break;

        default:
            cout << "No fue una opcion valida" << endl;
            break;
        }
}
