#ifndef _INDUC_
#define _INDUC_
#include<iostream>
#include "compass.hpp"
class induc : public compass
{
public :
        induc();
        induc(const std::string &nom,const double &l, const double &f);
        void updateIm();

};
#endif //_INDUC_

