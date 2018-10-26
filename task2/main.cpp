#include <iostream>

class Date {
private:
    int day = -1, month = -1, year = -1;
public:
    int getDay() {
        return day;
    }
    void setDay(int a) {
        if(month != -1 && year != -1 && month>=1 && month<=12)
        {
            bool valid = (a>=1 && a<=31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12);
            valid |= (a>=1 && a<=30) && (month==4 || month==6 || month==9 || month==11);
            valid |= (a>=1 && a<=28) && (month==2);
            valid |= (a==29 && month==2 && (year%400==0 ||(year%4==0 && year%100!=0)));
            if(valid) {
                day = a;
            }
        }
    }
    void setMonth(int a) {
        month = a;
    }
    void setYear(int a) {
        year = a;
    }
};

int main() {
    Date d;
    d.setDay(12);
    std::cout << d.getDay() << '\n';
    d.setYear(2018);
    d.setMonth(9);
    d.setDay(31);
    std::cout << d.getDay() << '\n'; // -1
    d.setDay(30);
    std::cout << d.getDay() << '\n'; // 30
    return 0;
}