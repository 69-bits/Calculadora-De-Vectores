#include "Vector3.h"

Vector3::Vector3(float x, float y, float z)
{
	x_ = x;
	y_ = y;
	z_ = z;
}

Vector3 Vector3::Suma(Vector3 segundoVector)
{
	Vector3 resultado;
	resultado.x_ = x_ + segundoVector.x_;
	resultado.y_ = y_ + segundoVector.y_;
	resultado.z_ = z_ + segundoVector.z_;
	return resultado;
}

Vector3 Vector3::Resta(Vector3 segundoVector)
{
	Vector3 resultado;
	resultado.x_ = x_ - segundoVector.x_;
	resultado.y_ = y_ - segundoVector.y_;
	resultado.z_ = z_ - segundoVector.z_;
	return resultado;
}

Vector3 Vector3::Multi(Vector3 segundoVector)
{
	Vector3 resultado;
	resultado.x_ = x_ * segundoVector.x_ ;
	resultado.y_ = y_ * segundoVector.y_ ;
	resultado.z_ = z_ * segundoVector.z_ ;
	return resultado;
}

Vector3 Vector3::Division(Vector3 segundoVector)
{
	Vector3 resultado;
	resultado.x_ = x_ / segundoVector.x_;
	resultado.y_ = y_ / segundoVector.y_;
	resultado.z_ = z_ / segundoVector.z_;
	return resultado;
}

float Vector3::pointProduct(Vector3 segundoVector)
{
	return ((x_ + segundoVector.x_) + (y_ + segundoVector.y_) + (z_ + segundoVector.z_));
}

float Vector3::crossProduct(Vector3 segundoVector)
{
	return ((y_ * segundoVector.z_) - (z_ * segundoVector.y_), (x_ * segundoVector.z_) - (z_ * segundoVector.x_), (x_ * segundoVector.y_) - (y_ * segundoVector.x_));
}

double Vector3::magnitud()
{
	double resultadoFinal = sqrt(pow(x_, 2) + pow(y_, 2) + pow((z_), 2));
	return resultadoFinal;
}

Vector3 Vector3::normalizar()
{
	Vector3 resultado;
	float dterminante = sqrt(pow(x_, 2) + pow(y_, 2) + pow((z_), 2));
	resultado.x_ = x_ / dterminante;
	resultado.y_ = y_ / dterminante;
	resultado.z_ = z_ / dterminante;
	return resultado;
}

void Vector3::print()
{
	cout << " Vector: " << x_ << ", " << y_ << ", " << z_ <<  endl;
}



