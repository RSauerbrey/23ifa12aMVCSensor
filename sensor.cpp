#include "sensor.h"
#include <time.h>
Sensor::Sensor()
{
}



Sensor::~Sensor()
{
}

string Sensor::getSensorType()
{
    return "Allgemeiner Sensor";
}

void Sensor::fetchData(double data[])
{
   for(int i = 0 ; i < dataSize() ; i++ )
      data[i] = messdata[i];
}

int Sensor::dataSize()
{
    return 10;
}

//************************************************************
FeuchteSensor::FeuchteSensor()
{
    srand(time(NULL));
    for(int i = 0 ; i < 10 ; i++ )
       messdata[i] = double (10 + rand() % 990) / 10.0;
}

string FeuchteSensor::getSensorType()
{
    return "Feuchte";
}

void FeuchteSensor::fetchData(double data[])
{
   //Sucht aus messdada den größten Wert und schreibt diesen auf data[0]
   double max = messdata[0];
   for(int i = 1 ; i < Sensor::dataSize() ; i++ )
       if(messdata[i] > max)
            max = messdata[i];
   data[0]=max;
}

int FeuchteSensor::dataSize()
{
    //soll nur ein Array mit einem einzigen Wert sein
    return 1;
}

//************************************************************
TemperaturSensor::TemperaturSensor()
{
    srand(time(NULL));
    for(int i = 0 ; i < 10 ; i++ )
       messdata[i] = double ( rand() % 1000) / 10.0;
}

string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}

void TemperaturSensor::fetchData(double data[])
{
   //Bildet den Durchschnittswert und schreibt diesen auf data[0]
   double avg = 0;
   for(int i = 0 ; i < Sensor::dataSize() ; i++ )
       avg = avg + messdata[i];
   avg = avg/Sensor::dataSize();
   data[0]=avg;
}

int TemperaturSensor::dataSize()
{
    //soll nur ein Array mit einem einzigen Wert sein
    return 1;
}
