#include <iostream>
using namespace std;
class temperature_sensor {
private:
    string sensor_name;
    double temperature;
    public:
    temperature_sensor() {
        sensor_name = "tom_room";
        temperature = 25;

    }
    void display() {
        cout << "Sensor Name: " << sensor_name << endl;
        cout << "Temperature: " << temperature << "°C" << endl;
    }
};
int main() {
    temperature_sensor ts1;
    ts1.display();
    return 0;
}