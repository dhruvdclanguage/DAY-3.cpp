#include<iostream>

using namespace std;

class employe {
	
	private :
		int a=60;
		char name[70]= "dhruv";
		
	public :
	    int salary=10000;
		char id[70]="dhairya";	
}; 

int main(){
   
   employe o;
   
   cout<<o.id<<endl;
   cout<<o.salary;
   	
	
	return 0;
}
