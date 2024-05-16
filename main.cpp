#include <Novice.h>
#define _USE_MATH_DEFINES
#include<math.h>

const char kWindowTitle[] = "学籍番号";

struct Matrix4x4 {
	float m[4][4];
};

//1.行列の加法
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2)
{
	Matrix4x4 Answer;
	Answer.m[0][0] = m1.m[0][0] + m2.m[0][0];
	Answer.m[0][1] = m1.m[0][1] + m2.m[0][1];
	Answer.m[0][2] = m1.m[0][2] + m2.m[0][2];
	Answer.m[0][3] = m1.m[0][3] + m2.m[0][3];
	Answer.m[1][0] = m1.m[1][0] + m2.m[1][0];
	Answer.m[1][1] = m1.m[1][1] + m2.m[1][1];
	Answer.m[1][2] = m1.m[1][2] + m2.m[1][2];
	Answer.m[1][3] = m1.m[1][3] + m2.m[1][3];
	Answer.m[2][0] = m1.m[2][0] + m2.m[2][0];
	Answer.m[2][1] = m1.m[2][1] + m2.m[2][1];
	Answer.m[2][2] = m1.m[2][2] + m2.m[2][2];
	Answer.m[2][3] = m1.m[2][3] + m2.m[2][3];
	Answer.m[3][0] = m1.m[3][0] + m2.m[3][0];
	Answer.m[3][1] = m1.m[3][1] + m2.m[3][1];
	Answer.m[3][2] = m1.m[3][2] + m2.m[3][2];
	Answer.m[3][3] = m1.m[3][3] + m2.m[3][3];
	return Answer;
}

//2.行列の減法
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2)
{
	Matrix4x4 Answer;
	Answer.m[0][0] = m1.m[0][0] - m2.m[0][0];
	Answer.m[0][1] = m1.m[0][1] - m2.m[0][1];
	Answer.m[0][2] = m1.m[0][2] - m2.m[0][2];
	Answer.m[0][3] = m1.m[0][3] - m2.m[0][3];
	Answer.m[1][0] = m1.m[1][0] - m2.m[1][0];
	Answer.m[1][1] = m1.m[1][1] - m2.m[1][1];
	Answer.m[1][2] = m1.m[1][2] - m2.m[1][2];
	Answer.m[1][3] = m1.m[1][3] - m2.m[1][3];
	Answer.m[2][0] = m1.m[2][0] - m2.m[2][0];
	Answer.m[2][1] = m1.m[2][1] - m2.m[2][1];
	Answer.m[2][2] = m1.m[2][2] - m2.m[2][2];
	Answer.m[2][3] = m1.m[2][3] - m2.m[2][3];
	Answer.m[3][0] = m1.m[3][0] - m2.m[3][0];
	Answer.m[3][1] = m1.m[3][1] - m2.m[3][1];
	Answer.m[3][2] = m1.m[3][2] - m2.m[3][2];
	Answer.m[3][3] = m1.m[3][3] - m2.m[3][3];
	return Answer;
}

//3.行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2)
{
	Matrix4x4 Answer;
	Answer.m[0][0] = m1.m[0][0] * m2.m[0][0] + m1.m[1][0] * m2.m[0][1] + m1.m[2][0] * m2.m[0][2] + m1.m[3][0] * m2.m[0][3];
	Answer.m[0][1] = m1.m[0][1] * m2.m[0][0] + m1.m[1][1] * m2.m[0][1] + m1.m[2][1] * m2.m[0][2] + m1.m[3][1] * m2.m[0][3];
	Answer.m[0][2] = m1.m[0][2] * m2.m[0][0] + m1.m[1][2] * m2.m[0][1] + m1.m[2][2] * m2.m[0][2] + m1.m[3][2] * m2.m[0][3];
	Answer.m[0][3] = m1.m[0][3] * m2.m[0][0] + m1.m[1][3] * m2.m[0][1] + m1.m[2][3] * m2.m[0][2] + m1.m[3][3] * m2.m[0][3];
	Answer.m[1][0] = m1.m[1][0] * m2.m[1][0] + m1.m[1][0] * m2.m[1][1] + m1.m[2][0] * m2.m[1][2] + m1.m[3][0] * m2.m[1][3];
	Answer.m[1][1] = m1.m[1][1] * m2.m[1][0] + m1.m[1][1] * m2.m[1][1] + m1.m[2][1] * m2.m[1][2] + m1.m[3][1] * m2.m[1][3];
	Answer.m[1][2] = m1.m[1][2] * m2.m[1][0] + m1.m[1][2] * m2.m[1][1] + m1.m[2][2] * m2.m[1][2] + m1.m[3][2] * m2.m[1][3];
	Answer.m[1][3] = m1.m[1][3] * m2.m[1][0] + m1.m[1][3] * m2.m[1][1] + m1.m[2][3] * m2.m[1][2] + m1.m[3][3] * m2.m[1][3];
	Answer.m[2][0] = m1.m[2][0] * m2.m[2][0] + m1.m[1][0] * m2.m[2][1] + m1.m[2][0] * m2.m[2][2] + m1.m[3][0] * m2.m[2][3];
	Answer.m[2][1] = m1.m[2][1] * m2.m[2][0] + m1.m[1][1] * m2.m[2][1] + m1.m[2][1] * m2.m[2][2] + m1.m[3][1] * m2.m[2][3];
	Answer.m[2][2] = m1.m[2][2] * m2.m[2][0] + m1.m[1][2] * m2.m[2][1] + m1.m[2][2] * m2.m[2][2] + m1.m[3][2] * m2.m[2][3];
	Answer.m[2][3] = m1.m[2][3] * m2.m[2][0] + m1.m[1][3] * m2.m[2][1] + m1.m[2][3] * m2.m[2][2] + m1.m[3][3] * m2.m[2][3];
	Answer.m[3][0] = m1.m[3][0] * m2.m[3][0] + m1.m[1][0] * m2.m[3][1] + m1.m[2][0] * m2.m[3][2] + m1.m[3][0] * m2.m[3][3];
	Answer.m[3][1] = m1.m[3][1] * m2.m[3][0] + m1.m[1][1] * m2.m[3][1] + m1.m[2][1] * m2.m[3][2] + m1.m[3][1] * m2.m[3][3];
	Answer.m[3][2] = m1.m[3][2] * m2.m[3][0] + m1.m[1][2] * m2.m[3][1] + m1.m[2][2] * m2.m[3][2] + m1.m[3][2] * m2.m[3][3];
	Answer.m[3][3] = m1.m[3][3] * m2.m[3][0] + m1.m[1][3] * m2.m[3][1] + m1.m[2][3] * m2.m[3][2] + m1.m[3][3] * m2.m[3][3];
	return Answer;
}

//4.逆行列m1
Matrix4x4 InverseM1(const Matrix4x4 m1)
{
	float determinant = m1.m[0][0] * m1.m[1][1] * m1.m[2][2] * m1.m[3][3] + m1.m[0][0] * m1.m[2][1] * m1.m[3][2] * m1.m[1][3] + m1.m[0][0] * m1.m[3][1] * m1.m[1][2] * m1.m[2][3]
						- m1.m[0][0] * m1.m[3][1] * m1.m[2][2] * m1.m[1][3] - m1.m[0][0] * m1.m[2][1] * m1.m[1][2] * m1.m[3][3] - m1.m[0][0] * m1.m[1][1] * m1.m[3][2] * m1.m[2][3]
						- m1.m[1][0] * m1.m[0][1] * m1.m[2][2] * m1.m[3][3] - m1.m[2][0] * m1.m[0][1] * m1.m[3][2] * m1.m[1][3] - m1.m[3][0] * m1.m[0][1] * m1.m[1][2] * m1.m[2][3]
						+ m1.m[3][0] * m1.m[0][1] * m1.m[2][2] * m1.m[1][3] + m1.m[2][0] * m1.m[0][1] * m1.m[1][2] * m1.m[3][3] + m1.m[1][0] * m1.m[0][1] * m1.m[3][2] * m1.m[2][3]
						+ m1.m[1][0] * m1.m[2][1] * m1.m[0][2] * m1.m[3][3] + m1.m[2][0] * m1.m[3][1] * m1.m[0][2] * m1.m[1][3] + m1.m[3][0] * m1.m[1][1] * m1.m[0][2] * m1.m[2][3]
						- m1.m[3][0] * m1.m[2][1] * m1.m[0][2] * m1.m[1][3] - m1.m[2][0] * m1.m[1][1] * m1.m[0][2] * m1.m[3][3] - m1.m[1][0] * m1.m[3][1] * m1.m[0][2] * m1.m[2][3]
						- m1.m[1][0] * m1.m[2][1] * m1.m[3][2] * m1.m[0][3] - m1.m[2][0] * m1.m[3][1] * m1.m[1][2] * m1.m[0][3] - m1.m[3][0] * m1.m[1][1] * m1.m[2][2] * m1.m[0][3]
						+ m1.m[3][0] * m1.m[2][1] * m1.m[1][2] * m1.m[0][3] + m1.m[2][0] * m1.m[1][1] * m1.m[3][2] * m1.m[0][3] + m1.m[1][0] * m1.m[3][1] * m1.m[2][2] * m1.m[0][3];

	Matrix4x4 result;
	result.m[0][0] = 1.0f / determinant * (m1.m[1][1] * m1.m[2][2] * m1.m[3][3]
											+ m1.m[2][1] * m1.m[3][2] * m1.m[3][1]
											+ m1.m[3][1] * m1.m[1][2] * m1.m[2][3]
											- m1.m[3][1] * m1.m[2][2] * m1.m[1][3]
											- m1.m[2][1] * m1.m[1][2] * m1.m[3][3]
											- m1.m[1][1] * m1.m[3][2] * m1.m[2][3]);
	result.m[1][0] = 1.0f / determinant * (- m1.m[1][0] * m1.m[2][2] * m1.m[3][3]
											- m1.m[2][0] * m1.m[3][2] * m1.m[3][1]
											- m1.m[3][0] * m1.m[1][2] * m1.m[2][3]
											+ m1.m[3][0] * m1.m[2][2] * m1.m[1][3]
											+ m1.m[2][0] * m1.m[1][2] * m1.m[3][3]
											+ m1.m[1][0] * m1.m[3][2] * m1.m[2][3]);
	result.m[2][0] = 1.0f / determinant * (m1.m[1][0] * m1.m[2][1] * m1.m[3][3]
											+ m1.m[2][0] * m1.m[3][1] * m1.m[3][1]
											+ m1.m[3][0] * m1.m[1][1] * m1.m[2][3]
											- m1.m[3][0] * m1.m[2][1] * m1.m[1][3]
											- m1.m[2][0] * m1.m[1][1] * m1.m[3][3]
											- m1.m[1][0] * m1.m[3][1] * m1.m[2][3]);
	result.m[3][0] = 1.0f / determinant * (- m1.m[1][1] * m1.m[2][2] * m1.m[3][2]
											- m1.m[2][0] * m1.m[3][1] * m1.m[1][2]
											- m1.m[3][0] * m1.m[1][1] * m1.m[2][2]
											+ m1.m[3][0] * m1.m[2][1] * m1.m[1][2]
											+ m1.m[2][1] * m1.m[1][1] * m1.m[3][2]
											+ m1.m[1][0] * m1.m[3][1] * m1.m[2][2]);

	result.m[0][1] = 1.0f / determinant * (- m1.m[0][1] * m1.m[2][2] * m1.m[3][3]
											- m1.m[2][1] * m1.m[3][2] * m1.m[0][3]
											- m1.m[3][1] * m1.m[0][2] * m1.m[2][3]
											+ m1.m[3][1] * m1.m[2][2] * m1.m[0][3]
											+ m1.m[2][1] * m1.m[1][2] * m1.m[3][3]
											+ m1.m[0][1] * m1.m[3][2] * m1.m[2][3]);
	result.m[1][1] = 1.0f / determinant * (m1.m[0][0] * m1.m[2][2] * m1.m[3][3]
											+ m1.m[2][0] * m1.m[3][2] * m1.m[0][3]
											+ m1.m[3][0] * m1.m[0][2] * m1.m[2][3]
											- m1.m[3][0] * m1.m[2][2] * m1.m[0][3]
											- m1.m[2][0] * m1.m[0][2] * m1.m[3][3]
											- m1.m[0][0] * m1.m[3][2] * m1.m[2][3]);
	result.m[2][1] = 1.0f / determinant * (- m1.m[0][0] * m1.m[2][1] * m1.m[3][3]
											- m1.m[2][0] * m1.m[3][1] * m1.m[0][3]
											- m1.m[3][0] * m1.m[0][1] * m1.m[2][3]
											+ m1.m[3][0] * m1.m[2][1] * m1.m[0][3]
											+ m1.m[2][0] * m1.m[0][1] * m1.m[3][3]
											+ m1.m[0][0] * m1.m[3][1] * m1.m[2][3]);
	result.m[3][1] = 1.0f / determinant * (m1.m[0][0] * m1.m[2][1] * m1.m[3][2]
											+ m1.m[2][0] * m1.m[3][1] * m1.m[0][2]
											+ m1.m[3][0] * m1.m[0][1] * m1.m[2][2]
											- m1.m[3][0] * m1.m[2][1] * m1.m[0][2]
											- m1.m[2][0] * m1.m[0][1] * m1.m[3][2]
											- m1.m[0][0] * m1.m[3][1] * m1.m[2][2]);

	result.m[0][2] = 1.0f / determinant * (m1.m[0][1] * m1.m[1][2] * m1.m[3][3]
											+ m1.m[1][1] * m1.m[3][2] * m1.m[0][3]
											+ m1.m[3][1] * m1.m[0][2] * m1.m[1][3]
											- m1.m[3][1] * m1.m[1][2] * m1.m[0][3]
											- m1.m[1][1] * m1.m[0][2] * m1.m[3][3]
											- m1.m[0][1] * m1.m[3][2] * m1.m[1][3]);
	result.m[1][2] = 1.0f / determinant * (- m1.m[0][0] * m1.m[1][2] * m1.m[3][3]
											- m1.m[1][0] * m1.m[3][2] * m1.m[0][3]
											- m1.m[3][0] * m1.m[0][2] * m1.m[1][3]
											+ m1.m[3][0] * m1.m[1][2] * m1.m[0][3]
											+ m1.m[1][0] * m1.m[0][2] * m1.m[3][3]
											+ m1.m[3][0] * m1.m[3][2] * m1.m[1][3]);
	result.m[2][2] = 1.0f / determinant * (m1.m[0][0] * m1.m[1][1] * m1.m[3][2]
											+ m1.m[1][0] * m1.m[3][1] * m1.m[0][4]
											+ m1.m[3][0] * m1.m[0][1] * m1.m[1][3]
											- m1.m[3][0] * m1.m[1][1] * m1.m[0][3]
											- m1.m[1][0] * m1.m[0][1] * m1.m[3][3]
											- m1.m[0][0] * m1.m[3][1] * m1.m[1][3]);
	result.m[3][2] = 1.0f / determinant * (- m1.m[0][0] * m1.m[1][1] * m1.m[3][2]
											- m1.m[1][0] * m1.m[3][1] * m1.m[0][2]
											- m1.m[3][0] * m1.m[0][1] * m1.m[1][2]
											+ m1.m[3][0] * m1.m[1][1] * m1.m[0][2]
											+ m1.m[1][0] * m1.m[0][1] * m1.m[3][2]
											+ m1.m[0][0] * m1.m[3][1] * m1.m[1][2]);

	result.m[0][3] = 1.0f / determinant * (-m1.m[0][1] * m1.m[1][2] * m1.m[2][3]
											- m1.m[1][1] * m1.m[2][2] * m1.m[0][3]
											- m1.m[2][1] * m1.m[0][2] * m1.m[1][3]
											+ m1.m[2][1] * m1.m[1][2] * m1.m[0][3]
											+ m1.m[1][1] * m1.m[0][2] * m1.m[2][3]
											+ m1.m[0][1] * m1.m[2][2] * m1.m[1][3]);
	result.m[1][3] = 1.0f / determinant * (m1.m[0][0] * m1.m[1][2] * m1.m[2][3]
											+ m1.m[1][0] * m1.m[2][2] * m1.m[0][3]
											+ m1.m[2][0] * m1.m[0][2] * m1.m[1][3]
											- m1.m[2][0] * m1.m[1][2] * m1.m[0][3]
											- m1.m[1][0] * m1.m[0][2] * m1.m[2][3]
											- m1.m[0][0] * m1.m[2][2] * m1.m[1][3]);
	result.m[2][3] = 1.0f / determinant * (- m1.m[0][0] * m1.m[1][1] * m1.m[2][3]
											- m1.m[1][0] * m1.m[2][1] * m1.m[0][3]
											- m1.m[2][0] * m1.m[0][1] * m1.m[1][3]
											+ m1.m[2][0] * m1.m[1][1] * m1.m[0][3]
											+ m1.m[1][0] * m1.m[2][1] * m1.m[2][3]
											+ m1.m[0][0] * m1.m[2][1] * m1.m[1][3]);
	result.m[3][3] = 1.0f / determinant * (m1.m[0][0] * m1.m[1][1] * m1.m[2][2]
											+ m1.m[1][0] * m1.m[2][1] * m1.m[0][2]
											+ m1.m[2][0] * m1.m[0][1] * m1.m[1][2]
											- m1.m[2][0] * m1.m[1][1] * m1.m[0][2]
											- m1.m[1][0] * m1.m[0][1] * m1.m[2][2]
											- m1.m[0][0] * m1.m[2][1] * m1.m[1][2]);

	return result;
}

//4.逆行列m2
Matrix4x4 InverseM2(const Matrix4x4 m2)
{
	float determinant = m2.m[0][0] * m2.m[1][1] * m2.m[2][2] * m2.m[3][3] + m2.m[0][0] * m2.m[2][1] * m2.m[3][2] * m2.m[1][3] + m2.m[0][0] * m2.m[3][1] * m2.m[1][2] * m2.m[2][3]
		- m2.m[0][0] * m2.m[3][1] * m2.m[2][2] * m2.m[1][3] - m2.m[0][0] * m2.m[2][1] * m2.m[1][2] * m2.m[3][3] - m2.m[0][0] * m2.m[1][1] * m2.m[3][2] * m2.m[2][3]
		- m2.m[1][0] * m2.m[0][1] * m2.m[2][2] * m2.m[3][3] - m2.m[2][0] * m2.m[0][1] * m2.m[3][2] * m2.m[1][3] - m2.m[3][0] * m2.m[0][1] * m2.m[1][2] * m2.m[2][3]
		+ m2.m[3][0] * m2.m[0][1] * m2.m[2][2] * m2.m[1][3] + m2.m[2][0] * m2.m[0][1] * m2.m[1][2] * m2.m[3][3] + m2.m[1][0] * m2.m[0][1] * m2.m[3][2] * m2.m[2][3]
		+ m2.m[1][0] * m2.m[2][1] * m2.m[0][2] * m2.m[3][3] + m2.m[2][0] * m2.m[3][1] * m2.m[0][2] * m2.m[1][3] + m2.m[3][0] * m2.m[1][1] * m2.m[0][2] * m2.m[2][3]
		- m2.m[3][0] * m2.m[2][1] * m2.m[0][2] * m2.m[1][3] - m2.m[2][0] * m2.m[1][1] * m2.m[0][2] * m2.m[3][3] - m2.m[1][0] * m2.m[3][1] * m2.m[0][2] * m2.m[2][3]
		- m2.m[1][0] * m2.m[2][1] * m2.m[3][2] * m2.m[0][3] - m2.m[2][0] * m2.m[3][1] * m2.m[1][2] * m2.m[0][3] - m2.m[3][0] * m2.m[1][1] * m2.m[2][2] * m2.m[0][3]
		+ m2.m[3][0] * m2.m[2][1] * m2.m[1][2] * m2.m[0][3] + m2.m[2][0] * m2.m[1][1] * m2.m[3][2] * m2.m[0][3] + m2.m[1][0] * m2.m[3][1] * m2.m[2][2] * m2.m[0][3];

	Matrix4x4 result;
	result.m[0][0] = 1.0f / determinant * (m2.m[1][1] * m2.m[2][2] * m2.m[3][3]
		+ m2.m[2][1] * m2.m[3][2] * m2.m[3][1]
		+ m2.m[3][1] * m2.m[1][2] * m2.m[2][3]
		- m2.m[3][1] * m2.m[2][2] * m2.m[1][3]
		- m2.m[2][1] * m2.m[1][2] * m2.m[3][3]
		- m2.m[1][1] * m2.m[3][2] * m2.m[2][3]);
	result.m[1][0] = 1.0f / determinant * (-m2.m[1][0] * m2.m[2][2] * m2.m[3][3]
		- m2.m[2][0] * m2.m[3][2] * m2.m[3][1]
		- m2.m[3][0] * m2.m[1][2] * m2.m[2][3]
		+ m2.m[3][0] * m2.m[2][2] * m2.m[1][3]
		+ m2.m[2][0] * m2.m[1][2] * m2.m[3][3]
		+ m2.m[1][0] * m2.m[3][2] * m2.m[2][3]);
	result.m[2][0] = 1.0f / determinant * (m2.m[1][0] * m2.m[2][1] * m2.m[3][3]
		+ m2.m[2][0] * m2.m[3][1] * m2.m[3][1]
		+ m2.m[3][0] * m2.m[1][1] * m2.m[2][3]
		- m2.m[3][0] * m2.m[2][1] * m2.m[1][3]
		- m2.m[2][0] * m2.m[1][1] * m2.m[3][3]
		- m2.m[1][0] * m2.m[3][1] * m2.m[2][3]);
	result.m[3][0] = 1.0f / determinant * (-m2.m[1][1] * m2.m[2][2] * m2.m[3][2]
		- m2.m[2][0] * m2.m[3][1] * m2.m[1][2]
		- m2.m[3][0] * m2.m[1][1] * m2.m[2][2]
		+ m2.m[3][0] * m2.m[2][1] * m2.m[1][2]
		+ m2.m[2][1] * m2.m[1][1] * m2.m[3][2]
		+ m2.m[1][0] * m2.m[3][1] * m2.m[2][2]);

	result.m[0][1] = 1.0f / determinant * (-m2.m[0][1] * m2.m[2][2] * m2.m[3][3]
		- m2.m[2][1] * m2.m[3][2] * m2.m[0][3]
		- m2.m[3][1] * m2.m[0][2] * m2.m[2][3]
		+ m2.m[3][1] * m2.m[2][2] * m2.m[0][3]
		+ m2.m[2][1] * m2.m[1][2] * m2.m[3][3]
		+ m2.m[0][1] * m2.m[3][2] * m2.m[2][3]);
	result.m[1][1] = 1.0f / determinant * (m2.m[0][0] * m2.m[2][2] * m2.m[3][3]
		+ m2.m[2][0] * m2.m[3][2] * m2.m[0][3]
		+ m2.m[3][0] * m2.m[0][2] * m2.m[2][3]
		- m2.m[3][0] * m2.m[2][2] * m2.m[0][3]
		- m2.m[2][0] * m2.m[0][2] * m2.m[3][3]
		- m2.m[0][0] * m2.m[3][2] * m2.m[2][3]);
	result.m[2][1] = 1.0f / determinant * (-m2.m[0][0] * m2.m[2][1] * m2.m[3][3]
		- m2.m[2][0] * m2.m[3][1] * m2.m[0][3]
		- m2.m[3][0] * m2.m[0][1] * m2.m[2][3]
		+ m2.m[3][0] * m2.m[2][1] * m2.m[0][3]
		+ m2.m[2][0] * m2.m[0][1] * m2.m[3][3]
		+ m2.m[0][0] * m2.m[3][1] * m2.m[2][3]);
	result.m[3][1] = 1.0f / determinant * (m2.m[0][0] * m2.m[2][1] * m2.m[3][2]
		+ m2.m[2][0] * m2.m[3][1] * m2.m[0][2]
		+ m2.m[3][0] * m2.m[0][1] * m2.m[2][2]
		- m2.m[3][0] * m2.m[2][1] * m2.m[0][2]
		- m2.m[2][0] * m2.m[0][1] * m2.m[3][2]
		- m2.m[0][0] * m2.m[3][1] * m2.m[2][2]);

	result.m[0][2] = 1.0f / determinant * (m2.m[0][1] * m2.m[1][2] * m2.m[3][3]
		+ m2.m[1][1] * m2.m[3][2] * m2.m[0][3]
		+ m2.m[3][1] * m2.m[0][2] * m2.m[1][3]
		- m2.m[3][1] * m2.m[1][2] * m2.m[0][3]
		- m2.m[1][1] * m2.m[0][2] * m2.m[3][3]
		- m2.m[0][1] * m2.m[3][2] * m2.m[1][3]);
	result.m[1][2] = 1.0f / determinant * (-m2.m[0][0] * m2.m[1][2] * m2.m[3][3]
		- m2.m[1][0] * m2.m[3][2] * m2.m[0][3]
		- m2.m[3][0] * m2.m[0][2] * m2.m[1][3]
		+ m2.m[3][0] * m2.m[1][2] * m2.m[0][3]
		+ m2.m[1][0] * m2.m[0][2] * m2.m[3][3]
		+ m2.m[3][0] * m2.m[3][2] * m2.m[1][3]);
	result.m[2][2] = 1.0f / determinant * (m2.m[0][0] * m2.m[1][1] * m2.m[3][2]
		+ m2.m[1][0] * m2.m[3][1] * m2.m[0][4]
		+ m2.m[3][0] * m2.m[0][1] * m2.m[1][3]
		- m2.m[3][0] * m2.m[1][1] * m2.m[0][3]
		- m2.m[1][0] * m2.m[0][1] * m2.m[3][3]
		- m2.m[0][0] * m2.m[3][1] * m2.m[1][3]);
	result.m[3][2] = 1.0f / determinant * (-m2.m[0][0] * m2.m[1][1] * m2.m[3][2]
		- m2.m[1][0] * m2.m[3][1] * m2.m[0][2]
		- m2.m[3][0] * m2.m[0][1] * m2.m[1][2]
		+ m2.m[3][0] * m2.m[1][1] * m2.m[0][2]
		+ m2.m[1][0] * m2.m[0][1] * m2.m[3][2]
		+ m2.m[0][0] * m2.m[3][1] * m2.m[1][2]);

	result.m[0][3] = 1.0f / determinant * (-m2.m[0][1] * m2.m[1][2] * m2.m[2][3]
		- m2.m[1][1] * m2.m[2][2] * m2.m[0][3]
		- m2.m[2][1] * m2.m[0][2] * m2.m[1][3]
		+ m2.m[2][1] * m2.m[1][2] * m2.m[0][3]
		+ m2.m[1][1] * m2.m[0][2] * m2.m[2][3]
		+ m2.m[0][1] * m2.m[2][2] * m2.m[1][3]);
	result.m[1][3] = 1.0f / determinant * (m2.m[0][0] * m2.m[1][2] * m2.m[2][3]
		+ m2.m[1][0] * m2.m[2][2] * m2.m[0][3]
		+ m2.m[2][0] * m2.m[0][2] * m2.m[1][3]
		- m2.m[2][0] * m2.m[1][2] * m2.m[0][3]
		- m2.m[1][0] * m2.m[0][2] * m2.m[2][3]
		- m2.m[0][0] * m2.m[2][2] * m2.m[1][3]);
	result.m[2][3] = 1.0f / determinant * (-m2.m[0][0] * m2.m[1][1] * m2.m[2][3]
		- m2.m[1][0] * m2.m[2][1] * m2.m[0][3]
		- m2.m[2][0] * m2.m[0][1] * m2.m[1][3]
		+ m2.m[2][0] * m2.m[1][1] * m2.m[0][3]
		+ m2.m[1][0] * m2.m[2][1] * m2.m[2][3]
		+ m2.m[0][0] * m2.m[2][1] * m2.m[1][3]);
	result.m[3][3] = 1.0f / determinant * (m2.m[0][0] * m2.m[1][1] * m2.m[2][2]
		+ m2.m[1][0] * m2.m[2][1] * m2.m[0][2]
		+ m2.m[2][0] * m2.m[0][1] * m2.m[1][2]
		- m2.m[2][0] * m2.m[1][1] * m2.m[0][2]
		- m2.m[1][0] * m2.m[0][1] * m2.m[2][2]
		- m2.m[0][0] * m2.m[2][1] * m2.m[1][2]);

	return result;
}

//5.転置行列m1
Matrix4x4 TransposeM1(const Matrix4x4& m1)
{
	Matrix4x4 Answer;
	Answer.m[0][0] = m1.m[0][0];
	Answer.m[0][1] = m1.m[1][0];
	Answer.m[0][2] = m1.m[2][0];
	Answer.m[0][3] = m1.m[3][0];
	Answer.m[1][0] = m1.m[0][1];
	Answer.m[1][1] = m1.m[1][1];
	Answer.m[1][2] = m1.m[2][1];
	Answer.m[1][3] = m1.m[3][1];
	Answer.m[2][0] = m1.m[0][2];
	Answer.m[2][1] = m1.m[1][2];
	Answer.m[2][2] = m1.m[2][2];
	Answer.m[2][3] = m1.m[3][2];
	Answer.m[3][0] = m1.m[0][3];
	Answer.m[3][1] = m1.m[1][3];
	Answer.m[3][2] = m1.m[2][3];
	Answer.m[3][3] = m1.m[3][3];
	return Answer;
}

//5.転置行列m2
Matrix4x4 TransposeM2(const Matrix4x4& m2)
{
	Matrix4x4 Answer;
	Answer.m[0][0] = m2.m[0][0];
	Answer.m[0][1] = m2.m[1][0];
	Answer.m[0][2] = m2.m[2][0];
	Answer.m[0][3] = m2.m[3][0];
	Answer.m[1][0] = m2.m[0][1];
	Answer.m[1][1] = m2.m[1][1];
	Answer.m[1][2] = m2.m[2][1];
	Answer.m[1][3] = m2.m[3][1];
	Answer.m[2][0] = m2.m[0][2];
	Answer.m[2][1] = m2.m[1][2];
	Answer.m[2][2] = m2.m[2][2];
	Answer.m[2][3] = m2.m[3][2];
	Answer.m[3][0] = m2.m[0][3];
	Answer.m[3][1] = m2.m[1][3];
	Answer.m[3][2] = m2.m[2][3];
	Answer.m[3][3] = m2.m[3][3];
	return Answer;
}

//6.単位行列の作成
Matrix4x4 MakeIdentity4x4()
{
	Matrix4x4 Answer;
	Answer.m[0][0] = 1.0f;
	Answer.m[0][1] = 0.0f;
	Answer.m[0][2] = 0.0f;
	Answer.m[0][3] = 0.0f;
	Answer.m[1][0] = 0.0f;
	Answer.m[1][1] = 1.0f;
	Answer.m[1][2] = 0.0f;
	Answer.m[1][3] = 0.0f;
	Answer.m[2][0] = 0.0f;
	Answer.m[2][1] = 0.0f;
	Answer.m[2][2] = 1.0f;
	Answer.m[2][3] = 0.0f;
	Answer.m[3][0] = 0.0f;
	Answer.m[3][1] = 0.0f;
	Answer.m[3][2] = 0.0f;
	Answer.m[3][3] = 1.0f;
	return Answer;
}

Matrix4x4 m1 = { 3.2f,0.7f,9.6f,4.4f,
				 5.5f,1.3f,7.8f,2.1f,
				 6.9f,8.0f,2.6f,1.0f,
				 0.5f,7.2f,5.1f,3.3f };

Matrix4x4 m2 = { 4.1f,6.5f,3.3f,2.2f,
				 8.8f,0.6f,9.9f,7.7f,
				 1.1f,5.5f,6.6f,0.0f,
				 3.3f,9.9f,8.8f,2.2f };

Matrix4x4 resultAdd = Add(m1, m2);
Matrix4x4 resultMultiply = Multiply(m1, m2);
Matrix4x4 resultSubtract = Subtract(m1, m2);
Matrix4x4 inverseM1 = InverseM1(m1);
Matrix4x4 inverseM2 = InverseM2(m2);
Matrix4x4 transposeM1 = TransposeM1(m1);
Matrix4x4 transposeM2 = TransposeM2(m2);
Matrix4x4 identity = MakeIdentity4x4();

static const int kRowHeight = 20;
static const int kColumnWidth = 60;
void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix,const char[]) {
	for (int row = 0; row < 4; ++row) {
		for (int column = 0; column < 4; ++column) {
			Novice::ScreenPrintf(x + column * kColumnWidth, y + row * kRowHeight, "%6.02f", matrix.m[row][column]);
		}
	}
}


// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///


		MatrixScreenPrintf(0, 0, resultAdd, "Add");
		MatrixScreenPrintf(0, kRowHeight * 5, resultSubtract, "Subtract");
		MatrixScreenPrintf(0, kRowHeight * 5 * 2, resultMultiply, "Multiply");
		MatrixScreenPrintf(0, kRowHeight * 5 * 3, inverseM1, "inverseM1");
		MatrixScreenPrintf(0, kRowHeight * 5 * 4, inverseM2, "inverseM2");
		MatrixScreenPrintf(kColumnWidth * 5, 0, transposeM1, "transposeM1");
		MatrixScreenPrintf(kColumnWidth * 5, kRowHeight * 5, transposeM2, "transposeM2");
		MatrixScreenPrintf(kColumnWidth * 5, kRowHeight * 5 * 2, identity, "identity");

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}

