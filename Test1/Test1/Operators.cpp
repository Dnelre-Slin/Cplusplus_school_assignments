#include "Operators.h"

Operators::Operators()
{
	key = 0;
	priority = 0;
	exp_fix = 0;

	mathFunc = nullptr;
}
Operators::Operators(int start_key, int start_priority, double(*startMathFunc)(double, double), int start_exp_fix)
{
	set(start_key, start_priority, startMathFunc, start_exp_fix);
}
void Operators::set(int start_key, int start_priority, double(*startMathFunc)(double, double), int start_exp_fix)
{
	key = start_key;
	priority = start_priority;
	exp_fix = start_exp_fix;

	mathFunc = startMathFunc;
}
int Operators::getKey()
{
	return key;
}
int Operators::getPriority()
{
	return priority;
}
int Operators::getNextPriority()
{
	return priority + exp_fix;
}
double Operators::doOperation(double d1, double d2)
{
	return mathFunc(d1, d2);
}