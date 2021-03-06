#include "Option.h"
#include <QVector>
#ifndef MC_H
#define MC_H

class MC
{
public:
    MC();
    QVector <double> PrixA(unsigned long NumberOfPaths, Option& Simu);
    double PrixT(int secondes, Option& Simu);
    double PrixAc(unsigned long NumberOfPaths, Option& Simu, double Spot, double Expiry, double r, double sigma);
private :
    int i;

};


#endif // MC_H
