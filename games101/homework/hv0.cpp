#define _USE_MATH_DEFINES
#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

using namespace std;

int main(){

    // Basic Example of cpp
    cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    cout << a << endl;
    cout << a/b << endl;
    cout << sqrt(b) << endl;
    cout << acos(-1) << endl;
    cout << sin(30.0/180.0*acos(-1)) << endl;
    
    // Example of vector
    cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f,2.0f,3.0f);
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // vector output
    cout << "Example of output \n";
    cout << v << endl;
    // vector add
    cout << "Example of add \n";
    cout << v + w << endl;
    // vector scalar multiply
    cout << "Example of scalar multiply \n";
    cout << v * 3.0f << endl;
    cout << 2.0f * v << endl;

    // Example of matrix
    cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    cout << "Example of output \n";
    cout << i << endl;
    // matrix add i + j
    // matrix scalar multiply i * 2.0
    // matrix multiply i * j
    // matrix multiply vector i * v

    // 给定一个点 P=(2,1), 将该点绕原点先逆时针旋转45度，再平移 (1,2)，计算出变换后点的坐标（要求用齐次坐标进行计算）。
    Eigen::Vector3f p(2, 1, 1), res;
    Eigen::Matrix3f r, t;
    float angle = 45.0;
    float rad = angle / 180.0 * M_PI;
    r << cos(rad), -sin(rad), 0,
        sin(rad), cos(rad), 0,
        0, 0, 1;

    t << 1, 0, 1,
        0, 1, 2,
        0, 0, 1;

    // 遵循矩阵变换 res = t*r*p
    res = t * r * p;
    cout << "new homogenous coordinate is : " << endl;
    cout << res;

    return 0;
}
