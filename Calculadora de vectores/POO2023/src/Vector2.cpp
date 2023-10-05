#include "Vector2.h"

// Constructor: Initializes a 2D vector with the given x and y components.
Vector2::Vector2(float x, float y)
{
	x_ = x;
	y_ = y;
}

// Performs vector addition and returns the result as a new Vector2.
Vector2 Vector2::Suma(Vector2 _vec)
{
	Vector2 resultado;
    resultado.x_ = x_ + _vec.x_;
    resultado.y_ = y_ + _vec.y_;
    return resultado;
}

// Performs vector subtraction and returns the result as a new Vector2.
Vector2 Vector2::Restar(Vector2 _vec)
{
    Vector2 resultado;
    resultado.x_ = x_ - _vec.x_;
    resultado.y_ = y_ - _vec.y_;
    return resultado;
}

// Performs element-wise vector multiplication and returns the result as a new Vector2.
Vector2 Vector2::Multiplicacion(Vector2 _vec)
{
    Vector2 resultado;
    resultado.x_ = x_ * _vec.x_;
    resultado.y_ = y_ * _vec.y_;
    return resultado;
}

// Performs element-wise vector division and returns the result as a new Vector2.
Vector2 Vector2::Division(Vector2 _vec)
{
    Vector2 resultado;
    resultado.x_ = x_ / _vec.x_;
    resultado.y_ = y_ / _vec.y_;
    return resultado;
}

// Calculates the dot product between two vectors and returns a scalar value.
float Vector2::pointProduct(Vector2 _vec)
{
    return ((x_ * _vec.x_) + (y_ * _vec.y_));
}

// Calculates the cross product and returns a scalar value.
float Vector2::crossProduct(Vector2 _vec)
{
    return ((x_ * _vec.y_) - (y_ * _vec.x_));
}

// Calculates the magnitude (length) of the vector and returns a double.
double Vector2::magnitud()
{
    
    return sqrt(pow(x_, 2) + pow(y_, 2));
}

// Normalizes the vector and returns a new normalized Vector2.
Vector2 Vector2::normalizar()
{
    Vector2 resultado;
    float dterminante = sqrt(pow(x_, 2) + pow(y_, 2));
    resultado.x_ = x_ / dterminante;
    resultado.y_ = y_ / dterminante;
    return resultado;
}
// Prints the components of the vector to the console.
void Vector2::print()
{
    cout << " Vector: " << x_ << ", " << y_ << endl;
}




