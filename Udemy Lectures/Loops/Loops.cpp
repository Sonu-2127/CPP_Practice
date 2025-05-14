#include "Loops.h"

vector<double> temperatures {87.2, 77.1, 80.0, 72.5};
int main(void)
{
    double avg_temp {0};
    double running_sum {0};

    for(const auto& value : temperatures)
    {
        running_sum+=value;
    }
    avg_temp = running_sum/temperatures.size();
    cout << "The sum of temperatures: " << running_sum << endl;
    cout << "The Average of temperatures: " << avg_temp << endl;
    return 0;
}