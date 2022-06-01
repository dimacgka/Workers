#include <iostream>
#include <vector>

using namespace std;

class Worker {
  protected:
    double days;//количество рабочих дней
    double hours;//количество часов
    double reg_sal;//сумма в день
    double rate;//оплата в час
    double per_pay;//процент от продаж
    double sum_sal;//сумма от продаж
  public:
    virtual double sal_calc() { return(0); } 
    Worker() : days(1), hours(1), reg_sal(1), rate(1), per_pay(1), sum_sal(1)
{ };//конструктор

    virtual ~Worker() = default; //деструктор нужно сделать виртуальным, так как класс базовый*/
};

class Hourly_Worker:public Worker{
  public:
    Hourly_Worker(double h,double r){hours=h; rate=r;}
    double sal_calc(){ return hours*rate; } 
};

class Regular_Worker:public Worker{
  public:
    Regular_Worker(double r, double d){reg_sal=r; days=d;}
    double sal_calc(){ return days*reg_sal; }
};

class Percent_Worker:public Worker{
  public:
    Percent_Worker(double p, double s){per_pay=p; sum_sal=s;}
    double sal_calc(){ return (per_pay*sum_sal)/100; }
};
