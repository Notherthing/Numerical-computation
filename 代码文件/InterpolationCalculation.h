#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "TypeTrans.h"
using namespace std;
class InterpolationCalculation
{
public:
	InterpolationCalculation();
	vector<double> poly_add(vector<double> a, vector<double> b);
	//���ڴ������ʽ���,ͬ�ݴ�ϵ����ӣ��������vector��
	vector<double> lagrange_poly(vector<double> x, vector<double> y);
	//ͨ��(x,y)�����е㣬�õ��������պ�����ÿ��xnǰ��ϵ��
	string lagrange_str(vector<double> coefficient);
	//ͨ������ĵõ���ϵ���������õ��������պ�����string
	double value_ans(double x, vector<double>poly);
	//ͨ��ϵ����������L(x)�е�x�Ĳ������õ���ֵ���
	double newton(double p, vector<double> x, vector<double> y);
	//ͨ��ţ�ٲ�ֵ���������ֵ
	string piecewise(int degree, double p, vector<double> x, vector<double> y);
	//ͨ���ֶβ�ֵ���������ֵ
	string piecewise_poly(int degree, double p, vector<double> x, vector<double> y);
private:

};

