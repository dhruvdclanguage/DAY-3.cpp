#include<iostream>
#include<string.h>
using namespace std ;

class Employees{

	public:	
	    int id;
        char name[50];
        char role[50];
        int age;
        int salary;
        int experience;
        char city[50];
        char company_name [50];	
};

int main(){
	
	Employees o1 , o2 , o3 , o4 , o5;
	
	o1.id =1;
	strcpy(o1.name,"Prajay");
	strcpy(o1.role,"worker");
	o1.age = 23;
	o1.salary = 10000;
	o1.experience = 1;
	strcpy(o1.city,"Surat");
	strcpy(o1.company_name,"DS brothers");
	
	cout<<o1.id<<endl;
	cout<<o1.name<<endl;
	cout<<o1.role<<endl;
	cout<<o1.age<<endl;
	cout<<o1.salary<<endl;
	cout<<o1.experience<<endl;
	cout<<o1.city<<endl;
	cout<<o1.company_name<<endl<<endl;
	
	o2.id =2;
	strcpy(o2.name,"dhairya");
	strcpy(o2.role,"worker");
	o2.age = 25;
	o2.salary = 20000;
	o2.experience = 4;
	strcpy(o2.city,"Surat");
	strcpy(o2.company_name,"DS brothers");
	
	cout<<o2.id<<endl;
	cout<<o2.name<<endl;
	cout<<o2.role<<endl;
	cout<<o2.age<<endl;
	cout<<o2.salary<<endl;
	cout<<o2.experience<<endl;
	cout<<o2.city<<endl;
	cout<<o2.company_name<<endl<<endl;
	
	o3.id =3;
	strcpy(o3.name,"Harekrushan");
	strcpy(o3.role,"worker");
	o3.age = 26;
	o3.salary = 25000;
	o3.experience = 3;
	strcpy(o3.city,"Surat");
	strcpy(o3.company_name,"DS brothers");
	
	cout<<o3.id<<endl;
	cout<<o3.name<<endl;
	cout<<o3.role<<endl;
	cout<<o3.age<<endl;
	cout<<o3.salary<<endl;
	cout<<o3.experience<<endl;
	cout<<o3.city<<endl;
	cout<<o3.company_name<<endl<<endl;
	
	o4.id =4;
	strcpy(o4.name,"Nisrag");
	strcpy(o4.role,"worker");
	o4.age = 24;
	o4.salary = 18000;
	o4.experience = 2;
	strcpy(o4.city,"Surat");
	strcpy(o4.company_name,"DS brothers");
	
	cout<<o4.id<<endl;
	cout<<o4.name<<endl;
	cout<<o4.role<<endl;
	cout<<o4.age<<endl;
	cout<<o4.salary<<endl;
	cout<<o4.experience<<endl;
	cout<<o4.city<<endl;
	cout<<o4.company_name<<endl<<endl;
	
	o5.id =5;
	strcpy(o5.name,"Ravi");
	strcpy(o5.role,"Manager");
	o5.age = 28;
	o5.salary = 35000;
	o5.experience = 6;
	strcpy(o5.city,"Surat");
	strcpy(o5.company_name,"DS brothers");
	
	cout<<o5.id<<endl;
	cout<<o5.name<<endl;
	cout<<o5.role<<endl;
	cout<<o5.age<<endl;
	cout<<o5.salary<<endl;
	cout<<o5.experience<<endl;
	cout<<o5.city<<endl;
	cout<<o5.company_name<<endl<<endl;
	
	
	return 0;
}
