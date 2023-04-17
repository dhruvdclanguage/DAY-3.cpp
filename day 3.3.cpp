#include<iostream>
#include<string.h>
using namespace std ;

class Cars {
	
	public :
		int id;
	    char model[50];
	    char color[50];
		int year;
		char company_name[50];
	
};

int main (){
	
	Cars o1 , o2 , o3 , o4 , o5 ;
	
	
	o1.id = 1 ;
	strcpy(o1.model,"BMW X1");
	strcpy(o1.color,"BLACK");
	o1.year = 10;
	strcpy(o1.company_name,"BMW");
	
	cout<<o1.id<<endl;
	cout<<o1.model<<endl;
	cout<<o1.color<<endl;
	cout<<o1.year<<endl;
	cout<<o1.company_name<<endl<<endl<<endl;
	
	o2.id = 2 ;
	strcpy(o2.model,"AUDI Q7");
	strcpy(o2.color,"WHITE");
	o2.year = 8;
	strcpy(o2.company_name,"AUDI");
	
	cout<<o2.id<<endl;
	cout<<o2.model<<endl;
	cout<<o2.color<<endl;
	cout<<o2.year<<endl;
	cout<<o2.company_name<<endl<<endl<<endl;
	
	o3.id = 3 ;
	strcpy(o3.model,"MERCEDES SCLASS");
	strcpy(o3.color,"GOLDEN");
	o3.year = 5;
	strcpy(o3.company_name,"MERCEDES");
	
	cout<<o3.id<<endl;
	cout<<o3.model<<endl;
	cout<<o3.color<<endl;
	cout<<o3.year<<endl;
	cout<<o3.company_name<<endl<<endl<<endl;
	
	o4.id = 4 ;
	strcpy(o4.model,"JAGUAR XE");
	strcpy(o4.color,"SILVER METT");
	o4.year = 4;
	strcpy(o4.company_name,"JAGUAR");
	
	cout<<o4.id<<endl;
	cout<<o4.model<<endl;
	cout<<o4.color<<endl;
	cout<<o4.year<<endl;
	cout<<o4.company_name<<endl<<endl<<endl;
	
	
	
	return 0 ;
}
