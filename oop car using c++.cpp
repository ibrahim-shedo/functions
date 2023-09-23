#include<iostream>
#include<strings.h>
using namespace std;
class car{
	public:
		string name;
		string model;
		string REGNO;
		string color;
	void carDetails(){
		car d;
		d.name = "BMW";
        d.model = "1995bmw.d";	
		d.REGNO = "btx2048";	
		d.color = "black";
		
		cout<<"car -"<<d.name<<endl;
		cout<<"model -"<<d.model<<endl;
		cout<<"reg no. -"<<d.REGNO<<endl;
		cout<<"color -"<<d.color<<endl;
	
cout<<"************"<<endl;
}
};


class owner{
	public:
		string name;
		string gender;
		int id;
		string address;
		
		void ownerDetails(){
			owner s;
			s.name = "omar";
			s.gender = "bisexual";
			s.id = 33304;
			s.address = "pumwani";
			
			
		cout<<"owner -"<<s.name<<endl;
		cout<<"gender -"<<s.gender<<endl;
		cout<<"id -"<<s.id<<endl;
		cout<<"address -"<<s.address<<endl;
		}
};


int main(){
	 car i;
	 i.carDetails();
	 
	 owner n;
	 n.ownerDetails();
	
	
	
	
	
	return 0;
}
  
			                    