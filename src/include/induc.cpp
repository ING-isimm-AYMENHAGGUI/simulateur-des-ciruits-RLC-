#include "induc.hpp"
#include<math.h>
induc::induc():compass() {}// car il est sans parametre comme celle ci de la classe compass
induc::induc(const std::string &nom,const double &l,const double &f):compass(nom,l)
{
updateIm();
//_Nom=nom;
//_Val=r;
//_Freq=-1;
}
void induc::updateIm()
{
_Z.SetRe(0); _Z.SetIm(-1/(_Val*2*M_PI*_Freq));
}

