#include "Vector2.h"

Vector2::Vector2(float x, float y)
{
	x_ = x;
	y_ = y;
}

Vector2 Vector2::Suma(Vector2 v)
{
	Vector2 resultado;
    resultado.x_ = x_ + v.x_;
    resultado.y_ = y_ + v.y_;
    return resultado;
}

Vector2 Vector2::Restar(Vector2 v)
{
    Vector2 resultado;
    resultado.x_ = x_ - v.x_;
    resultado.y_ = y_ - v.y_;
    return resultado;
}

Vector2 Vector2::Multiplicacion(Vector2 v)
{
    Vector2 resultado;
    resultado.x_ = x_ * v.x_;
    resultado.y_ = y_ * v.y_;
    return resultado;
}

Vector2 Vector2::Division(Vector2 v)
{
    Vector2 resultado;
    resultado.x_ = x_ / v.x_;
    resultado.y_ = y_ / v.y_;
    return resultado;
}

float Vector2::pointProduct(Vector2 v)
{
    return ((x_ * v.x_) + (y_ * v.y_));
}

float Vector2::crossProduct(Vector2 v)
{
    return ((x_ * v.y_) - (y_ * v.x_));
}

double Vector2::magnitud()
{
    double resultado1 = pow((x_), 2) * pow((y_), 2);
    double resultadoFinal = pow(resultado1, 0.5);
    return resultadoFinal;
}

Vector2 Vector2::normalizar()
{
    Vector2 resultado;
    float dterminante = pow((pow(x_, 2) * pow(y_, 2)), 0.5);
    resultado.x_ = x_ / dterminante;
    resultado.y_ = y_ / dterminante;
    return resultado;
}

void Vector2::print()
{
    cout << " Vector: " << x_ << ", " << y_ << endl;
}




