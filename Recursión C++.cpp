#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> Rec2(double b0, double b1, double c1, double c2, int N) {
    std::vector<double> seq(N + 1);

    double discr = std::sqrt(c1 * c1 - 4 * c2);
    double realPart = -c1 / 2;
    double imagPart = discr / 2;

    double alf_real = realPart;
    double bet_real = realPart;

    double alf_imag = imagPart;
    double bet_imag = -imagPart;

    std::vector<int> vec(N + 1);
    for (int i = 0; i <= N; i++) {
        vec[i] = i;
    }

    double val = alf_real - bet_real;
    if (std::abs(val) < 1e-6) {
        double k1 = b0;
        double k2 = b1 / alf_real - k1;
        for (int i = 0; i <= N; i++) {
            seq[i] = (k1 + k2 * vec[i]) * std::pow(alf_real, vec[i]);
        }
    }
    else {
        double det = alf_real - bet_real;
        double invDet = 1.0 / det;
        double k1 = (b0 * bet_real - b1 * alf_real) * invDet;
        double k2 = (b1 - b0) * invDet;
        for (int i = 0; i <= N; i++) {
            seq[i] = k1 * std::pow(alf_real, vec[i]) + k2 * std::pow(bet_real, vec[i]);
        }
    }

    return seq;
}

int main() {
    double b0, b1, c1, c2;
    int N;

    std::cout << "Ingrese b0: ";
    std::cin >> b0;

    std::cout << "Ingrese b1: ";
    std::cin >> b1;

    std::cout << "Ingrese c1: ";
    std::cin >> c1;

    std::cout << "Ingrese c2: ";
    std::cin >> c2;

    std::cout << "Ingrese N: ";
    std::cin >> N;

    std::vector<double> sequence = Rec2(b0, b1, c1, c2, N);

    std::cout << "Secuencia generada: ";
    for (double element : sequence) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
