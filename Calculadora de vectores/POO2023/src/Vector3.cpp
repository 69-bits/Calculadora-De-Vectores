#include "Vector3.h"

Vector3::Vector3(float x, float y, float z)
{
	x_ = x;
	y_ = y;
	z_ = z;
}

Vector3 Vector3::Suma(Vector3 v)
{
	Vector3 resultado;
	resultado.x_ = x_ + v.x_;
	resultado.y_ = y_ + v.y_;
	resultado.z_ = z_ + v.z_;
	return resultado;
}

Vector3 Vector3::Resta(Vector3 v)
{
	Vector3 resultado;
	resultado.x_ = x_ - v.x_;
	resultado.y_ = y_ - v.y_;
	resultado.z_ = z_ - v.z_;
	return resultado;
}

Vector3 Vector3::Multi(Vector3 v)
{
	Vector3 resultado;
	resultado.x_ = x_ * v.x_ ;
	resultado.y_ = y_ * v.y_ ;
	resultado.z_ = z_ * v.z_ ;
	return resultado;
}

Vector3 Vector3::Division(Vector3 v)
{
	Vector3 resultado;
	resultado.x_ = x_ / v.x_;
	resultado.y_ = y_ / v.y_;
	resultado.z_ = z_ / v.z_;
	return resultado;
}

float Vector3::pointProduct(Vector3 v)
{
	return ((x_ + v.x_) + (y_ + v.y_) + (z_ + v.z_));
}

float Vector3::crossProduct(Vector3 v)
{
	return ((y_ * v.z_) - (z_ * v.y_), (x_ * v.z_) - (z_ * v.x_), (x_ * v.y_) - (y_ * v.x_));
}

double Vector3::magnitud()
{
	double resultado1 = pow((x_), 2) * pow((y_), 2) * pow((z_), 2);
	double resultadoFinal = pow(resultado1, 0.5);
	return resultadoFinal;
}

Vector3 Vector3::normalizar()
{
	Vector3 resultado;
	float dterminante = pow((pow(x_, 2) * pow(y_, 2) * pow(z_, 2)), 0.5);
	resultado.x_ = x_ / dterminante;
	resultado.y_ = y_ / dterminante;
	resultado.z_ = z_ / dterminante;
	return resultado;
}

void Vector3::print()
{
	cout << " Vector: " << x_ << ", " << y_ << ", " << z_ <<  endl;
}



