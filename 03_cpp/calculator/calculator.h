double expon(double a, int b)
{
    double res = 1;
    for (int i = 0; i < b; ++i)
        res *= a;
    return res;
}

double calculate(double a, char $, double b)
{
    switch ($)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b == 0)
            throw "Error_404";
        else return a / b;
    case '^':
        return expon(a, static_cast<int>(b));
    default:
        return .0;
    }
}