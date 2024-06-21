#ifndef Calculator_h
#define Calculator_h

class Add {
	int a, b;
	int result;
public:
	Add();
	void setValue(int x, int y);
	int calculate();
};

class Sub {
	int a, b;
	int result;
public:
	Sub();
	void setValue(int x, int y);
	int calculate();
};

class Mul {
	int a, b;
	int result;
public:
	Mul();
	void setValue(int x, int y);
	int calculate();
};

class Div {
	int a, b;
	int result;
public:
	Div();
	void setValue(int x, int y);
	int calculate();
};

#endif