#include <cmath>
#include <iostream>
int main() {
  setlocale(LC_ALL, "ru");
  double a, b, c, x;

  std::cout << "Введите значения для решения квадратного уравнения: "
            << std::endl;

  std::cout << "Введите значение a: ";
  std::cin >> a;
  std::cout << "Введите значение b: ";
  std::cin >> b;
  std::cout << "Введите значение c: ";
  std::cin >> c;

  if ((b * b - 4 * a * c) >= 0) { //Если дискриминант больше или равен 0

    x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
    std::cout << "x1 = " << x << std::endl;
    x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
    std::cout << "x2 = " << x << std::endl;
  } else {
    std::cout << "Дискриминант меньше 0, попробуйте еще раз" << std::endl;
  }

  return 0;
}
