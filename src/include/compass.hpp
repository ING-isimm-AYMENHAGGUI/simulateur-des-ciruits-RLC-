#ifndef _COMPASS_
#define _COMPASS_
#include<iostream>
#include "cmplx.hpp"
class compass
{
public :
	compass();
	compass(const std::string &nom);
	compass(const std::string &nom, const double &v);
	compass(const std::string &nom, const cmplx &z ,const double &f);
	compass(const std::string &nom, const double &v, const double &f);
	//compass( const compass &c);
	//le getters
	std::string Getnom() const;
	double Getval()const;
	double Getfreq()const;
	cmplx  GetIm() const;
	//les setters
	void setnom(const std::string &s);
	void setval(const double &v);
	void setfreq(const double &f);


	void updateIm();
	void print() const;
	//lesoperateurs
	compass & operator=(const compass & cp);
	compass operator+(compass &cp) const;
	compass operator-(compass & cp) const;
protected:
	std::string _Nom;
	double _Val , _Freq;
	cmplx _Z;
private :

};

//méthodes externes
std::ostream &operator<<(std::ostream &os, const compass &cp);
#endif //_COMPASS_

