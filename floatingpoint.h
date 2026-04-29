#ifndef FLOATINGPOINT_H
#define FLOATINGPOINT_H

#include <string>
#include "qstring.h"

class floatingPoint
{
public:
    floatingPoint(); //constructor

    //float value getter and setter
    void setValue(float input);
    float getValue();

    //functions to convert input to float value specified by expected input format
    bool setBinaryValue(QString input);
    bool setDecimalValue(QString input);
    bool setHexValue(QString input);
    bool setSEMValue(QString input);

    //functions to return float value converted to specified text format
    QString getBinaryText();
    QString getDecimalText();
    QString getHexText();
    QString getSEMText();

private:
    //stores numeric value of float
    float value;
};

#endif // FLOATINGPOINT_H
