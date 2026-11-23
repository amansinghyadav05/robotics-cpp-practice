#include <iostream>
using namespace std;

int main() {
    int sensor_reading = 250;
    int* ptr = &sensor_reading;

    cout << "Value: " << sensor_reading << endl;
    cout << "Address: " << ptr << endl;
    cout << "Dereferenced Value: " << *ptr << endl;

    return 0;
}
