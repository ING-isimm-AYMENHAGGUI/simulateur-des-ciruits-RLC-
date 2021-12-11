#include<iostream>
#include<math.h>
#include"cmplx.hpp"
using namespace std ;
// les constructeurs
	cmplx:: cmplx(const double re){_Re=re; _Im=0;}
	cmplx:: cmplx(const double re, const double im ){_Re=re;_Im=im;}
	cmplx:: cmplx(const cmplx & c){_Re=c.GetRe();_Im=c.GetIm();}

//le constructeurs pour les operation aréthmetique
	cmplx & cmplx::operator= (const cmplx &c){
		_Re=c._Re ;
		_Im=c._Im;
	return(*this);}
	cmplx cmplx::operator* (const cmplx &c)const{
		cmplx cc (_Re*c._Re - _Im*c._Im, _Re*c._Im + _Im*c._Re);
		return (cc);}
	cmplx cmplx::operator+ (const cmplx &c)const{
		cmplx cc (_Re+c._Re, _Im+c._Im);
		return (cc);}
	cmplx cmplx::operator- (const cmplx &c)const{
	        cmplx cc (_Re-c._Re, _Im-c._Im);
        	return (cc);}
	cmplx cmplx::operator* (const  double a )const{
        	cmplx cc (a*_Re, a*_Im);
        	return (cc);}
	cmplx cmplx::operator/ (const  double a )const{
        	cmplx cc (_Re/a, _Im/a );
        	return (cc);}
	cmplx cmplx::operator/ (const cmplx &c)const{
		double den=c._Re*c._Re + c._Im*c._Im;
		cmplx cc=((*this)*c.conj())/den;
		return (cc);}
// les constructeurs pour les méthodes externe 
	cmplx operator*(const double a, const cmplx &c){
		cmplx cc(a*c.GetRe(), a*c.GetIm());
		return (cc);}
	cmplx operator/(const double a, const cmplx &c){
        	double den=c.GetRe()*c.GetRe() + c.GetIm()*c.GetIm();
		cmplx cc=(a*c.conj())/den;
        	return (cc);}


//le Getters
	double cmplx:: GetRe()const{return _Re;}
	double cmplx:: GetIm()const{return _Im;}

//les Setters
	void cmplx::SetRe(const double re) {_Re = re;}
	void cmplx::SetIm(const double im) {_Im = im;}

	void cmplx::print()const{std::cout<<_Re<<"+"<<_Im<<"i";}

//cout d'un complexe 
	std:: ostream &operator<<(std::ostream &os,const cmplx &c){
		if(c.GetRe() || c.GetIm()==0)
			os<<c.GetRe();
		if(c.GetIm()){
			if(c.GetIm()>.0 && c.GetRe()!=0)
				os<<"+";
			os<<c.GetIm()<<"i";}
		return os;}
// le conj arg mod
	cmplx cmplx::conj()const {
		cmplx cc (_Re , -_Im);
		return(cc);}
double cmplx:: Mod() const { return sqrt(_Re*_Re +_Im*_Im);}
double cmplx:: arg() const {return atan (_Im/_Re);}
