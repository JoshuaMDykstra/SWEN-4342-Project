#include "floatingpoint.h"



floatingPoint::floatingPoint() {
    //Constructor
}

bool floatingPoint::setBinaryValue(QString input) {
    //TODO
    return false;
}
bool floatingPoint::setDecimalValue(QString input) {

    int state = 0;

    for (int i = 0; i < input.size(); i++) {
        //if (isdigit(input[i])) {

        //}
    }

    return false;
}
bool floatingPoint::setHexValue(QString input()) {
    //TODO
    return false;
}
bool floatingPoint::setSEMValue(QString input()) {
    //TODO
    return false;
}

QString floatingPoint::getBinaryText() {
    //TODO
    return "TODO";
}
QString floatingPoint::getDecimalText() {
    //TODO
    return "TODO";
}
QString floatingPoint::getHexText() {
    //TODO
    return "TODO";
}
QString floatingPoint::getSEMText() {
    //TODO
    return "TODO";
}