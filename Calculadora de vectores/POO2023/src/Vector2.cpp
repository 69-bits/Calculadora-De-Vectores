#include "Vector2.h"

Vector2::Vector2(float x, float y)
{
	x_ = x;
	y_ = y;
}

Vector2 Vector2::Suma(Vector2 segundoVector)
{
	Vector2 resultado;
    resultado.x_ = x_ + segundoVector.x_;
    resultado.y_ = y_ + segundoVector.y_;
    return resultado;
}

Vector2 Vector2::Restar(Vector2 segundoVector)
{
    Vector2 resultado;
    resultado.x_ = x_ - segundoVector.x_;
    resultado.y_ = y_ - segundoVector.y_;
    return resultado;
}

Vector2 Vector2::Multiplicacion(Vector2 segundoVector)
{
    Vector2 resultado;
    resultado.x_ = x_ * segundoVector.x_;
    resultado.y_ = y_ * segundoVector.y_;
    return resultado;
}

Vector2 Vector2::Division(Vector2 segundoVector)
{
    Vector2 resultado;
    resultado.x_ = x_ / segundoVector.x_;
    resultado.y_ = y_ / segundoVector.y_;
    return resultado;
}

float Vector2::pointProduct(Vector2 segundoVector)
{
    return ((x_ * segundoVector.x_) + (y_ * segundoVector.y_));
}

float Vector2::crossProduct(Vector2 segundoVector)
{
    return ((x_ * segundoVector.y_) - (y_ * segundoVector.x_));
}

double Vector2::magnitud()
{
    double resultadoFinal = sqrt(pow(x_, 2) + pow(y_, 2));
    return resultadoFinal;
}

Vector2 Vector2::normalizar()
{
    Vector2 resultado;
    float dterminante = sqrt(pow(x_, 2) + pow(y_, 2));
    resultado.x_ = x_ / dterminante;
    resultado.y_ = y_ / dterminante;
    return resultado;
}

void Vector2::print()
{
    cout << " Vector: " << x_ << ", " << y_ << endl;
}




