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
    return false;
}
bool floatingPoint::setDecimalValue(QString input) {
    //take in input text in decimal format and convert to and store as a float, return false if conversion fails

    int state = 0;

    for (int i = 0; i < input.size(); i++) {
        //if (isdigit(input[i])) {

        //}
    }

    return false;
}
bool floatingPoint::setHexValue(QString input) {
    //take in input text in hex format and convert to and store as a float, return false if conversion fails

    //TODO
    return false;
}
bool floatingPoint::setSEMValue(QString input) {
    //take in input text in SEM format and convert to and store as a float, return false if conversion fails

    //TODO
    return false;
}

QString floatingPoint::getBinaryText() {
    //returns stored float converted to binary text

    //TODO
    return "TODO";
}
QString floatingPoint::getDecimalText() {
    //returns stored float converted to decimal text

    //TODO
    return "TODO";
}
QString floatingPoint::getHexText() {
    //returns stored float converted to hex text

    //TODO
    return "TODO";
}
QString floatingPoint::getSEMText() {
    //returns stored float converted to SEM text

    //TODO
    return "TODO";
}