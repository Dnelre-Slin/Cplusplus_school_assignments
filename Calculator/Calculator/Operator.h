#pragma once

class Operators
{
	int key;
	int priority;
	int exp_fix;

	double(*mathFunc) (double, double);

public:
	Operators(int start_key, int start_priority, double(*startMathFunc)(double, double), int start_exp_fix);
	int getKey();
	int getPriority();
	int getNextPriority();
	double doOperation(double d1, double d2);
};