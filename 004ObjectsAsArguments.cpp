#include <iostream>
using namespace std;

class Clock{
    int hours;
    int minutes;
    public:
    void gettime(int h, int m){
        hours = h;
        minutes = m;
    }
    void puttime(void){
        cout << "Hours " << hours << " and " << minutes << " minutes" << endl;
    }
    void sum(Clock, Clock);
};
void Clock :: sum(Clock c1, Clock c2){
    minutes = c1.minutes + c2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours + c1.hours +c2.hours;
}

int main(void){
    Clock T1, T2, T3;
    T1.gettime(2,45);
    T2.gettime(3,35);
    T3.sum(T1, T2);

    cout << "T1 = "; T1.puttime();
    cout << "T2 = "; T2.puttime();
    cout << "T3 = "; T3.puttime();
}