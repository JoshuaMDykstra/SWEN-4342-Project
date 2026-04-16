#ifndef FLOATINGPOINT_H
#define FLOATINGPOINT_H

#include <iostream>
#include <string>
#include <fstream>
#include <deque>
#include "qstring.h"

class floatingPoint
{
public:
    floatingPoint();

    bool setBinaryValue(QString input);
    bool setDecimalValue(QString input);
    bool setHexValue(QString input());
    bool setSEMValue(QString input());

    QString getBinaryText();
    QString getDecimalText();
    QString getHexText();
    QString getSEMText();


private:
    float value;

};

#endif // FLOATINGPOINT_H
