//p1-02.cpp - имя файла с программой
#include <iostream>
#include <strstream>

using namespace std;

int main(int narg, char **arg) {
	float smin = 110;
	float a[] = {1.00, 1.36, 1.59, 1.73, 1.82, 2.00, 2.27, 2.54, 2.91, 3.27, 3.68, 4.18, 4.73, 5.32, 6.00, 6.68, 7.41, 8.23};

int r;

cout << "\nПрограмма вычисляет оклад в соответствии";
cout << "\nс единой тарифной сеткой оплаты труда";
cout << "\nдля работников бюджетной сферы в России.";

if (narg == 1)
	{cout << "\nПо умолчанию минимальный оклад ";
    cout << smin <<" py6.";
    cout << "\nПри необходимости изменить значение ";
    cout << "минимального оклада, его нужно указать в ";
    cout << "командной строке.\n";
  }
 else
 
  { istrstream(arg[1]) >> smin;
  cout << "\nОпределён минимальный оклад в ";
  cout << smin << " py6.\n";
  }
cout << "\nВведите номер разряда в тарифной сетке  ";
cin >> r;

if (r < 1 || r > 18)
  {cout << "Ошибка в выборе разряда!";
  return 1;
  }
  
cout << "Введённому разряду соответствует ставка ";
cout << (long)(a[r - 1] * smin) << " py6.\n";
return 0;
}
