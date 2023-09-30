#include "ComplexConcept.h"

class Base
{
public:
	virtual ~Base() = default;
};

class Class1
{
public:
	long hash() { return 0; }
	std::string toString() { return {}; }
};

class Class2 : public Base
{
public:
	double hash() { return 0; }
	std::string toString() { return {}; }
};

class Class3
{
public:
	std::string hash() { return 0; }
	std::string toString() { return {}; }
};

class Class4
{
public:
	long hash() { return 0; }
	void toString() {}
};

int main() {
	static_assert(ComplexConcept<Class1>);
	static_assert(!ComplexConcept<Class2>);
	static_assert(!ComplexConcept<Class3>);
	static_assert(!ComplexConcept<Class4>);
}
