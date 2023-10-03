#include "Vector4.h"

Vector4::Vector4(float x, float y, float z, float a)
{
	x_ = x;
	y_ = y;
	z_ = z;
	a_ = a;
}

Vector4 Vector4::Suma(Vector4 segundoVector)
{
	Vector4 resultado;
	resultado.x_ = x_ + segundoVector.x_;
	resultado.y_ = y_ + segundoVector.y_;
	resultado.z_ = z_ + segundoVector.z_;
	resultado.a_ = a_ + segundoVector.a_;
	return resultado;
}

Vector4 Vector4::Resta(Vector4 segundoVector)
{
	Vector4 resultado;
	resultado.x_ = x_ - segundoVector.x_;
	resultado.y_ = y_ - segundoVector.y_;
	resultado.z_ = z_ - segundoVector.z_;
	resultado.a_ = a_ - segundoVector.a_;
	return resultado;
}

Vector4 Vector4::Multi(Vector4 segundoVector)
{
	Vector4 resultado;
	resultado.x_ = x_ * segundoVector.x_;
	resultado.y_ = y_ * segundoVector.y_;
	resultado.z_ = z_ * segundoVector.z_;
	resultado.a_ = a_ * segundoVector.a_;
	return resultado;
}

Vector4 Vector4::Division(Vector4 segundoVector)
{
	Vector4 resultado;
	resultado.x_ = x_ / segundoVector.x_;
	resultado.y_ = y_ / segundoVector.y_;
	resultado.z_ = z_ / segundoVector.z_;
	resultado.a_ = a_ / segundoVector.a_;
	return resultado;
}

float Vector4::pointProduct(Vector4 segundoVector)
{
	return ((x_ + segundoVector.x_) + (y_ + segundoVector.y_) + (z_ + segundoVector.z_) + (a_ + segundoVector.a_));
}

double Vector4::magnitud()
{
	double resultadoFinal = sqrt(pow(x_, 2) + pow(y_, 2) + pow((z_), 2) + pow((a_), 2));
	return resultadoFinal;
}

Vector4 Vector4::normalizar()
{
	Vector4 resultado;
	float dterminante = sqrt(pow(x_, 2) + pow(y_, 2) + pow((z_), 2) + pow((a_), 2));
	resultado.x_ = x_ / dterminante;
	resultado.y_ = y_ / dterminante;
	resultado.z_ = z_ / dterminante;
	resultado.a_ = a_ / dterminante;
	return resultado;
}

void Vector4::print()
{
	cout << " Vector: " << x_ << ", " << y_ << ", " << z_ << ", " << a_ << endl;
}




