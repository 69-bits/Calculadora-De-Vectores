#include "Vector4.h"

Vector4::Vector4(float x, float y, float z, float a)
{
	x_ = x;
	y_ = y;
	z_ = z;
	a_ = a;
}

Vector4 Vector4::Suma(Vector4 v)
{
	Vector4 resultado;
	resultado.x_ = x_ + v.x_;
	resultado.y_ = y_ + v.y_;
	resultado.z_ = z_ + v.z_;
	resultado.a_ = a_ + v.a_;
	return resultado;
}

Vector4 Vector4::Resta(Vector4 v)
{
	Vector4 resultado;
	resultado.x_ = x_ - v.x_;
	resultado.y_ = y_ - v.y_;
	resultado.z_ = z_ - v.z_;
	resultado.a_ = a_ - v.a_;
	return resultado;
}

Vector4 Vector4::Multi(Vector4 v)
{
	Vector4 resultado;
	resultado.x_ = x_ * v.x_;
	resultado.y_ = y_ * v.y_;
	resultado.z_ = z_ * v.z_;
	resultado.a_ = a_ * v.a_;
	return resultado;
}

Vector4 Vector4::Division(Vector4 v)
{
	Vector4 resultado;
	resultado.x_ = x_ / v.x_;
	resultado.y_ = y_ / v.y_;
	resultado.z_ = z_ / v.z_;
	resultado.a_ = a_ / v.a_;
	return resultado;
}

float Vector4::pointProduct(Vector4 v)
{
	return ((x_ + v.x_) + (y_ + v.y_) + (z_ + v.z_) + (a_ + v.a_));
}

double Vector4::magnitud()
{
	double resultado1 = pow((x_), 2) * pow((y_), 2) * pow((z_), 2) * pow((a_), 2);
	double resultadoFinal = pow(resultado1, 0.5);
	return resultadoFinal;
}

Vector4 Vector4::normalizar()
{
	Vector4 resultado;
	float dterminante = pow((pow(x_, 2) * pow(y_, 2) * pow(z_, 2)), 0.5);
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




