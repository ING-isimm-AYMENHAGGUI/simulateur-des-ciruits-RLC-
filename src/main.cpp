#include<iostream>
#include"./include/resis.hpp"
#include"./include/induc.hpp"
#include"./include/cond.hpp"
using namespace std ;
int main()
{

        cout<<"------------------------"<<endl;
        cout<<"        RLC SIM         "<<endl;
        cout<<"------------------------"<<endl;
        cmplx c,c1(1,20),c2(30,6);
        c.SetRe(5);
        cout<<endl;
        cout<<"c="<<c<<endl;
        cout<<"c1="<<c1<<endl;
        cout<<"c2="<<c2<<endl;


        cout<<"affectation"<<endl;
        cout<<"c=c1:"<<(c=c1)<<endl;
        cout<<"c=10:"<<(c=10)<<endl;


        cout<<"operations"<<endl;
        cout<<"c2*3="<<c2*3<<endl;
        cout<<"c1 +5*c2="<<c1 +5*c2<<endl;
        cout<<"c1*c2="<<c1*c2<<endl;
        cout<<"c1 -5*c2="<<c1 - 5*c2<<endl;
        cout<<"c1/3="<<c1/3<<endl;
        cout<<"c2/c1="<<c2/c1<<endl;
        cout<<"1/c1="<<1/c2<<endl;

        cout<<"mod--arg--conj"<<endl;
	cout<<"conj(c2)="<<c2.conj()<<endl;
        cout<<"Mod(c2)="<<c2.Mod()<<endl;
        cout<<"arg(c2)="<<c2.arg()<<endl;




	cout<<"classe compass"<<endl;
	compass cp,cp1("cp1",10),cp2("cp2",1000,1);
	cp.setnom("cp!!");
	cp.print();
	cp1.print();
	cp2.print();
	cout<<"cp1:"<<cp1<<endl;
	cout<<"cp2:"<<cp2<<endl;
	cp = cp1-cp2;
	cout<<"cp1 ==cp2:"<<cp<<endl;
	cout<<"cp1\\cp2:"<<cp1+cp2<<endl;

	cout<<"héritage et abstraction"<<endl;
        const double f=5;
        resis r1("R1",20);
	induc *l1 = new induc ("l1",10e-3,f);
        cond *C1=new cond("c1",22e-6,f);
        cout<<r1<<endl;
        cout<<*l1<<endl;
        cout<<*C1<<endl;
return 0;
}




