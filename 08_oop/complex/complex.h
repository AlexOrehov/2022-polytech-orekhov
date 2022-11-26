class Complex
{
public:
	int a;
	int b;
	Complex(int r, int i) : a(r), b(i) {};
	const Complex operator+(const Complex rv) const;
	const Complex operator-(const Complex rv) const;
	const bool operator==(const Complex rv) const;
	const double abs() const;
};