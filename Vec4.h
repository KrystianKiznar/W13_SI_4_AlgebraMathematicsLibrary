#pragma once
class Vec4 {
public:
	double x, y, z, w;

	Vec4();
	Vec4(double xcord, double ycord, double zcord, double wcord);
	Vec4 operator+ (const Vec4& input);
	Vec4 operator- (const Vec4& input);
	//iloczyn skalarny
	Vec4 operator* (const Vec4& input);
	Vec4 operator* (const int& factor2);
	double dot(Vec4 secondVector);
	Vec4 cross(Vec4 secondVector);

};

