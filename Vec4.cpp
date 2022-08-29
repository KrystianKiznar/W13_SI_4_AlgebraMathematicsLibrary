#include "Vec4.h"

Vec4::Vec4(double xcord, double ycord, double zcord, double wcord) {
	x = xcord;
	y = ycord;
	z = zcord;
	w = wcord;
}

Vec4 Vec4::operator+(const Vec4& input)
{
	return Vec4(x+input.x, y+input.y, z +input.z, w + input.z);
}

Vec4 Vec4::operator-(const Vec4& input)
{
	return Vec4(x - input.x, y - input.y, z - input.z, w - input.z);
}

Vec4 Vec4::operator*(const Vec4& input)
{
	return Vec4(x * input.x, y * input.y, z * input.z, w * input.z);
}

Vec4 Vec4::operator/(const Vec4& input)
{
	return Vec4(x / input.x, y / input.y, z / input.z, w / input.z);
}

Vec4 Vec4::operator*(const int& factor2)
{
	return Vec4(x * factor2, y * factor2, z * factor2, w * factor2);
}

Vec4 Vec4::operator/(const int& factor2)
{
	return Vec4(x / factor2, y / factor2, z / factor2, w / factor2);
}

double Vec4::dot(Vec4 secondVector)
{
	return x*secondVector.x + y*secondVector.y + z*secondVector.z + w*secondVector.w;
}

//Vec4 Vec4::cross(Vec4 secondVector)
//{
//	Vec4 answer;
//	answer.x = y * secondVector.z - z *secondVector.y
//	return answer;
//}
