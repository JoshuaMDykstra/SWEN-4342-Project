#include "floatingpoint.h"


floatingPoint::floatingPoint() {
    //Constructor
}

void floatingPoint::setValue(float input){
    value = input;
}
float floatingPoint::getValue(){
    return value;
}

bool floatingPoint::setBinaryValue(QString input) {
    //take in input text in binary format and convert to and store as a float, return false if conversion fails

    //TODO
    std::string stdStringInput = input.toStdString();

    return false;
}
bool floatingPoint::setDecimalValue(QString input) {
    //take in input text in decimal format and convert to and store as a float, return false if conversion fails

    //TEMP
    std::string stdStringInput = input.toStdString();

    try {
        value = std::stof(stdStringInput);
        return true;
    } catch (...) {
        return false;
    }
}
bool floatingPoint::setHexValue(QString input) {
    //take in input text in hex format and convert to and store as a float, return false if conversion fails

    //TODO
    std::string stdStringInput = input.toStdString();

    return false;
}
bool floatingPoint::setSEMValue(QString input) {
    //take in input text in SEM format and convert to and store as a float, return false if conversion fails

    //TODO
    std::string stdStringInput = input.toStdString();

    return false;
}

QString floatingPoint::getBinaryText() {
    //returns stored float converted to binary text

    //TODO

    std::string output = "TODO";
    return QString::fromStdString(output);
}
QString floatingPoint::getDecimalText() {
    //returns stored float converted to decimal text

    //TEMP
    std::string output = std::to_string(value);
    return QString::fromStdString(output);
}
QString floatingPoint::getHexText() {
    //returns stored float converted to hex text

    //TODO

    std::string output = "TODO";
    return QString::fromStdString(output);
}
QString floatingPoint::getSEMText() {
    //returns stored float converted to SEM text

    //TODO

    std::string output = "TODO";
    return QString::fromStdString(output);
}