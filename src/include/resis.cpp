#include "resis.hpp"

resis::resis():compass() {}// car il est sans parametre comme celle ci de la classe compass
resis::resis(const std::string &nom,const double &r):compass(nom,r)
{
updateIm();
//_Nom=nom;
//_Val=r;
//_Freq=-1;
}
void resis::updateIm()
{
_Z.SetRe(_Val); _Z.SetIm(0);
}
