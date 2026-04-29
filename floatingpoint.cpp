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

    std::string stdStringInput = input.toStdString();

    //check if input is 32 characters in size
    if (stdStringInput.size() != 32) {
        return false;
    }

    //check if input only contains valid characters
    for (int i = 0; i < stdStringInput.size(); i++) {
        if (stdStringInput[i] != '0' || stdStringInput[i] != '1') {
            return false;
        }
    }

    //variables
    char sign = stdStringInput[0];
    std::string mantissaString, exponentString;
    float mantissaValue, exponentValue = 0.0;

    //pull exponent bits from input
    for (int i = 1; i < 9; i++) {

        exponentString += stdStringInput[i];
    }

    //pull mantissa bits from input
    for (int i = 9; i < 32; i++) {

        mantissaString += stdStringInput[i];
    }

    //reverse exponent string
    std::reverse(exponentString.begin(), exponentString.end());

    //convert exponent bits to decimal value
    for (int i = 0; i < exponentString.size(); i++) {

        if (exponentString[i] == '1') {
            exponentValue += pow(2.0, i);
        }
    }

    //convert mantissa bits to decimal value (mantissa bits are read left to right)
    for (int i = 0; i < mantissaString.size(); i++) {

        if (mantissaString[i] == '1') {
            mantissaValue += pow(0.5, i + 1);
        }
    }

    //set value and return success
    value = pow(-1.0, sign - '0') * (1.0 + mantissaValue) * pow(2.0, exponentValue - 127.0);
    return true;
}
bool floatingPoint::setDecimalValue(QString input) {
    //take in input text in decimal format and convert to and store as a float, return false if conversion fails
    //written by john

    std::string userinput = input.toStdString();

    int i = 0;
    int decimalcount = 0;
    int decimalposition = 0;
    int sign = 1;
    float integerpart = 0;
    float userfloat = 0;
    int tempint = 0;
    int tempint2 =0;
    float testfloat = 0;
    int start = 0;


    //checks that only numbers and one decimal are entered
    if(userinput[0]=='\0')return false;
    if(userinput[0]=='-'){
        start = 1;
        sign = -1;
    }
    for(i=start; (userinput[i]!='\0'); i++){
        if( !((userinput[i] == '0') || (userinput[i] == '1') || (userinput[i] == '2') || (userinput[i] == '3') || (userinput[i] == '4') || (userinput[i] == '5') || (userinput[i] == '6') || (userinput[i] == '7') || (userinput[i] == '8') || (userinput[i] == '9') || (userinput[i] == '.'))){            //'1','2','3','4','5','6','7','8','9','.'        !(('0' <= userinput[i] <= '9') || (userinput[i] == '.'))
            //printf("index %d is char ", i);
            //printf("%c\n", userinput[i]);
            return false;
        }
        else{
            if((userinput[i]) == '.'){
                decimalcount++;
                decimalposition = i;
            }
            if(decimalcount>1)return false;
        }
    }

    //gets integer part of float
    i = start;
    tempint = 0;
    while((userinput[i] != '.') && (userinput[i] != '\0')){

        tempint = tempint*10;
        tempint = tempint + (int)(userinput[i] - '0');
        i++;
    }
    integerpart = (float)tempint;
    //printf("\ninteger part: %f", integerpart);

    //gets decimal part of float
    if((decimalcount == 1) && (userinput[decimalposition+1] != '\0')){
        tempint = 0;
        tempint2 = 1;
        for(i=(decimalposition+1); userinput[i]!='\0'; i++){
            tempint2 = tempint2*10;
            tempint = tempint*10;
            tempint = tempint + (int)(userinput[i] - '0');
        }
        //testfloat = (((float)(tempint))/((float)(tempint2)));
        userfloat = sign * (integerpart + (((float)(tempint))/((float)(tempint2))));
        value = userfloat;
        //printf("\ndecimal part: %f", testfloat);
    }else{
        userfloat = sign * integerpart;
        value = userfloat;
    }

    return true;
}
bool floatingPoint::setHexValue(QString input) {
    //take in input text in hex format and convert to and store as a float, return false if conversion fails

    //TODO
    std::string stdStringInput = input.toStdString();

    return false;
}
bool floatingPoint::setSEMValue(QString input) {
    //take in input text in SEM format and convert to and store as a float, return false if conversion fails

    std::string stdStringInput = input.toStdString();
    //TODO

    return false;
}

QString floatingPoint::getBinaryText() {
    //returns stored float converted to binary text
    //written by john

    int i = 0;
    //int decimalcount = 0;
    //int decimalposition = 0;
    //int negcount = 0;
    //int sign = 1;
    //float integerpart = 0;
    float userfloat = value;
    //int tempint = 0;
    //int tempint2 =0;
    //uint8_t hex = 0;
    //char hexchar = '0';
    uint64_t bitextractor = 0;
    //float testfloat = 0;
    uint64_t temp;
    //int start = 0;

    char binstring[33];

    //outputs binary and hex strings
    bitextractor = 0x80000000;
    memcpy(&temp, &userfloat, sizeof(float));
    for(i=0; i<=31; i++){
        if((bitextractor&temp) == 0){
            binstring[i] = '0';
        }
        else{
            binstring[i] = '1';
        }
        bitextractor = bitextractor>>1;
    }
    binstring[32] = '\0';

    return QString::fromStdString(binstring);
}
QString floatingPoint::getDecimalText() {
    //returns stored float converted to decimal text

    //TEMP
    std::string output = std::to_string(value);
    return QString::fromStdString(output);
}
QString floatingPoint::getHexText() {
    //returns stored float converted to hex text
    //written by john

    int i = 0;
    //int decimalcount = 0;
    //int decimalposition = 0;
    //int negcount = 0;
    //int sign = 1;
    //float integerpart = 0;
    float userfloat = value;
    //int tempint = 0;
    //int tempint2 =0;
    uint8_t hex = 0;
    char hexchar = '0';
    uint64_t bitextractor = 0;
    //float testfloat = 0;
    uint64_t temp;
    //int start = 0;

    char hexstring[9];

    //outputs binary and hex strings
    bitextractor = 0x80000000;
    hex = 0;
    memcpy(&temp, &userfloat, sizeof(float));
    for(i=0; i<=31; i++){
        hex = hex<<1;
        if((bitextractor&temp) == 0){
            hex = hex&0xFE;
        }
        else{
            hex = hex|0x01;
        }
        bitextractor = bitextractor>>1;
        if((i+1)%4 == 0){
            switch (hex) {
            case 0:
                hexchar = '0';
                break;
            case 1:
                hexchar = '1';
                break;
            case 2:
                hexchar = '2';
                break;
            case 3:
                hexchar = '3';
                break;
            case 4:
                hexchar = '4';
                break;
            case 5:
                hexchar = '5';
                break;
            case 6:
                hexchar = '6';
                break;
            case 7:
                hexchar = '7';
                break;
            case 8:
                hexchar = '8';
                break;
            case 9:
                hexchar = '9';
                break;
            case 10:
                hexchar = 'A';
                break;
            case 11:
                hexchar = 'B';
                break;
            case 12:
                hexchar = 'C';
                break;
            case 13:
                hexchar = 'D';
                break;
            case 14:
                hexchar = 'E';
                break;
            case 15:
                hexchar = 'F';
                break;
            }
            hexstring[i/4] = hexchar;
            hex = 0;
        }
    }

    hexstring[8] = '\0';

    return QString::fromStdString(hexstring);
}
QString floatingPoint::getSEMText() {
    //returns stored float converted to SEM text

    //TODO

    std::string output = "TODO";
    return QString::fromStdString(output);
}