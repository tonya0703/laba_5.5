#include <iostream> 
#include <cmath> 

double f(double x) {
    return sin(x) - cos(x);
}

double findRootRecursive(double a, double b, double eps) {
    if (b - a < eps) {
        return (a + b) / 2;
    }

    double m = (a + b) / 2;
    if (f(m) == 0.0) {
        return m;
    }
    else if (f(a) * f(m) < 0) {
        return findRootRecursive(a, m, eps);
    }
    else {
        return findRootRecursive(m, b, eps);
    }
}

int main() {
    double a, b, eps;
    std::cout << "Enter the initial interval [a, b]: ";
    std::cin >> a >> b;
    std::cout << "Enter the precision (eps): ";
    std::cin >> eps;

    if (f(a) * f(b) < 0) {
        double root = findRootRecursive(a, b, eps);
        std::cout << "Root of the equation: " << root << std::endl;
    }
    else {
        std::cout << "The equation does not have a root within the specified interval [a, b] with the given precision." << std::endl;
    }

    return 0;
}