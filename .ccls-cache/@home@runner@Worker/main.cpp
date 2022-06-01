#include <iostream>
#include "header.h"
#include <vector>

using namespace std;

int main() {
  Worker* workers[3]; //полиморфный массив объектов
  Hourly_Worker hw(5, 80);
  Regular_Worker rw(500, 7);
  Percent_Worker pw(60, 1313);
  double total = 0;
  workers[0] = &hw;
  workers[1] = &rw;
  workers[2] = &pw;
  total = workers[2]->sal_calc();
  total += workers[1]->sal_calc();
  total += workers[0]->sal_calc();
  cout << "Сумма всех зарплат работников "<< total << endl;
  
  return 0;
}