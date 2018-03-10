#ifndef UTILLITY_HPP
#define UTILLITY_HPP

union charFloatConverter{
    unsigned char b[4];
    float f;
};


//Float-byte converters for coms-control communication
float toFloat(unsigned char *);
void toChar(float, unsigned char *); 

//FlightPlan utility
bool isDigit(char);
bool areDigits(char*, int);
int appendCharDigit(int, char);
int getNumberFromChars(char*, int);

bool isFpVital(char);
int getCaSize(char*);
char* caAppend(char*, char);
int pftoi(float&);


//vector math calculations
void cross(float*,float*,float*);
float vecMag(float *,char);
void normalize(float*,float*);
float dotProd(float*,float*);
//RocketClass utility

float catof(char*);

#endif