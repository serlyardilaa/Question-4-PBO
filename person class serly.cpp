#include <iostream>
#include <string>
using namespace std;

class PersonData
{
	private:
	string name, address;
	int phoneNumber;

public:
	void setName(string name){
  		this->name = name;
	}
	
	string getName(){
  		return name;
	}
	
	void setAddress(string address){
  		this->address = address;
	}
	
	string getAddress(){
  		return address;
	}
	
	void setPhoneNumber(int phoneNumber){
		this->phoneNumber = phoneNumber;
	}
	
	int getPhoneNumber(){
		return phoneNumber;
	}

};

class CustomerData : public PersonData
{
private:
int customerNumber;
bool mailingList;

public:
	void setCustomerNumber(int customerNumber){
		this->customerNumber = customerNumber;
	}
	int getCustomerNumber(){
		return customerNumber;
	}
	void setMailingList(bool mailingList){
		this->mailingList = mailingList;
	}
	int getMailingList(){
		return mailingList;
	}
};

int main() {

CustomerData cust;

cust.setCustomerNumber(1007);
cust.setMailingList(true);
cust.setName("Jones");
cust.setAddress("7764,Hillside");
cust.setPhoneNumber(1122345);

cout<<"Customer Number : "<< cust.getCustomerNumber()<<endl;
cout<<"\nName : "<< cust.getName()<<endl;
cout<<"\nAddress : "<<cust.getAddress()<<endl; 
cout<<"\nPhone : "<<cust.getPhoneNumber()<<endl;
cout<<"\nMailing List: "<<cust.getMailingList()<<endl;
return 0;
}
