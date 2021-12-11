#ifndef _CMPLX_
#define _CMPLX_
#include<iostream>
class cmplx {
public :
	cmplx(){
		_Re=.0 ; 
		_Im=.0;
		}
	cmplx(const double re);
	cmplx(const double re , const double im);
	cmplx(const cmplx & c);
	//le Getters
	double GetRe() const ;
	double GetIm() const ;
	//les Setters
	void SetRe(const double re);
	void SetIm(const double im);
	void print() const ;

// les operateurs
	cmplx &operator= (const  cmplx & c) ;
	cmplx  operator+ (const cmplx & c) const;
	cmplx  operator- (const cmplx & c) const;
	cmplx  operator* (const cmplx & c) const;
	cmplx  operator* (const  double a) const;
	cmplx  operator/ (const cmplx & c) const;
	cmplx  operator/ (const double a ) const;

// le conjugé module et arg 
	cmplx conj()const;
	double Mod() const;
	double arg() const;


private :
	double _Re, _Im;





};
//les méthode externes
std:: ostream & operator<<(std::ostream & os,const cmplx & c);
cmplx operator*(const double a , const cmplx & c);
cmplx operator/(const double a , const cmplx & c);
#endif //_CMPLX_
