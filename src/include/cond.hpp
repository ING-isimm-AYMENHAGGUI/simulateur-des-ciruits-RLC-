#ifndef _COND_
#define _COND_
#include<iostream>
#include "compass.hpp"
class cond : public compass
{
public :
        cond();
        cond(const std::string &nom,const double &C, const double &f);
        void updateIm();

};
#endif //_INDUC_


