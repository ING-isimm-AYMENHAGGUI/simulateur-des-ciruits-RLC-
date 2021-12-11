#include "cond.hpp"
#include<math.h>
cond ::cond():compass() {}// car il est sans parametre comme celle ci de la classe compass
cond::cond(const std::string &nom,const double &C,const double &f):compass(nom,C)
{
updateIm();
//_Nom=nom;
//_Val=r;
//_Freq=-1;
}
void cond::updateIm()
{
_Z.SetRe(0); _Z.SetIm(-1/(_Val*2*M_PI*_Freq));
}

