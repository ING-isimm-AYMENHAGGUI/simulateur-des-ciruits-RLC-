#ifndef _RESIS_
#define _RESIS_
#include<iostream>
#include "compass.hpp"
class resis : public compass
{
public :
	resis();
	resis(const std::string &nom,const double &r);
	void updateIm();

};
#endif //_RESIS_

