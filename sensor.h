#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
using namespace std;

class Sensor
{
    protected:
        double messdata[10];

    public:
        Sensor(); //Konstruktor
        ~Sensor(); //Destruktor
        virtual string getSensorType();
        void fetchData(double data[]);
        int dataSize();
};

class FeuchteSensor:public Sensor
{
    public:
        FeuchteSensor();
        string getSensorType(); //Überschreiben
        void fetchData(double data[]); //Überschreiben
        int dataSize(); //Überschreiben
};

class TemperaturSensor:public Sensor
{
    public:
        TemperaturSensor();
        string getSensorType(); //Überschreiben
        void fetchData(double data[]); //Überschreiben
        int dataSize(); //Überschreiben
};

#endif // SENSOR_H
