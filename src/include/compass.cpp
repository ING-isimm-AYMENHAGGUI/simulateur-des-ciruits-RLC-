#include <iostream>
#include "compass.hpp"
using namespace std;

        compass::compass(){
		_Nom="";
		_Val = _Freq = -1;
		_Z = cmplx(-1);
		}
        compass::compass(const std::string &nom){
		_Nom=nom;
		_Val = _Freq= -1;
		_Z = cmplx(-1) ;
		}
        compass::compass(const std::string &nom, const double &v){
		_Nom=nom;
		_Val=v ;
		_Freq= -1;
		updateIm();}
        compass::compass(const std::string &nom, const cmplx &z ,const double &f){
		_Nom=nom;
		_Val= -1;
		_Freq=f;
		_Z=z;}
        compass::compass(const std::string &nom, const double &v, const double &f){
		_Nom=nom;
		_Val= v;
		_Freq=f;
		updateIm();
		}

        //le getters
        std::string compass:: Getnom() const{ return _Nom;} 
        double compass:: Getval()const{return _Val;}
        double compass:: Getfreq()const{return _Freq;}
        cmplx compass:: GetIm() const{return _Z;}
        //les setters
        void compass:: setnom(const std::string &s){_Nom=s;}
        void compass:: setval(const double &v){
		_Val=v;
		updateIm();}
        void compass:: setfreq(const double &f){_Freq=f; updateIm();}


        void compass:: updateIm(){_Z.SetRe(-1); _Z.SetIm(0);}
        void compass:: print() const { 
                std::cout<<"cp:"<<endl; 
                std::cout<<"\t nom:"<<_Nom<<endl;
		std::cout<<"\t val:"<<_Val<<endl;
		std::cout<<"\t freq:"<<_Freq<<endl;} 
	//oprerateurs
	compass & compass::operator=(const compass &cp){
		_Nom = cp._Nom;
		_Val = cp._Val;
		_Freq = cp._Freq;
		_Z= cp._Z;
		return(*this);}
	compass compass::operator-(compass &cp)const{
		cp.setfreq(_Freq);
		return compass(_Nom +"+" + cp._Nom, _Z +cp._Z,_Freq);}
	compass compass::operator+(compass &cp)const{
                cp.setfreq(_Freq);
                return compass(_Nom +"+" + cp._Nom, (_Z*cp._Z)/(_Z + cp._Z),_Freq);}
	std::ostream &operator<<(std:: ostream &os, const compass &cp){
		os<< "z("<<cp.Getnom()<<","<<cp.Getfreq()<<"hz)="<<cp.GetIm();
		return os;}
