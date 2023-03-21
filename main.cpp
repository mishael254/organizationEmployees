#include "main.h"
#include <iostream>

using namespace std;
//implementing abstraction
class AbstractIEmployee {
	virtual void askforPromotion() = 0;
};

//this is a blueprint plus signing the 'contract' AbstractIEmployee
class Employee:AbstractIEmployee {
//implementing encapsulation rule
private:
	
	char Gender;
	int Age;
// using protected access modifier

protected:
	string First_name;
	string Second_name;
public: 
	//creating getters and setters to access our private properties
	void setFirst_name(string first_name) {
		if (first_name != Second_name)
		First_name = first_name;
	}
	string getFirst_name() {
		return First_name;
	}
	void setSecond_name(string second_name) {
		if(second_name != First_name)
		Second_name = second_name;
	}
	string getSecond_name() {
		return Second_name;
	}
	void setGender(char gender) {
		if (gender == 'F'|| gender == 'M')
		Gender = gender;
	}
	char getGender() {
		return Gender;
	}
	void setAge(int age) {
		if(age>18){ 
			Age = age;
		}
		
	}
	int getAge() {
		return Age;
	}
	//end of getters and setters methods
	void introduction() {//behaviour inform of a method
		cout << "first-name - " << First_name << endl
			<< "Second-name - " << Second_name << endl
			<< "Gender - " << Gender<<endl
			<< "Age - " << Age << endl;
	}
	//implementing now the abstract contract on the class that 
	void askforPromotion() {
		if (Age > 18) {
			cout << "You " << First_name << " " << Second_name << " are promoted" << endl;
		}
		else
		{
			cout << "You " << First_name << " " << Second_name << " have not met our qualifications yet, so no promotion" << endl;
		}

	}
	//creating constructor
	Employee(string first_name,string second_name,char gender,int age) {
		First_name = first_name;
		Second_name = second_name;
		Gender = gender;
		Age = age;

	}
};
//inheritance 
//creating a child class thats gonna be linked to Employee class 

class Developer: Employee {
public:
	string Best_Programming_Language;


	//creating a behaviour for this developer to do
	void fix_bug() {
		cout << getFirst_name()<< " is fixing a bug using " << Best_Programming_Language << endl;
	}


 
	//creating a constructor
	Developer(string first_name, string second_name,char gender,int age, string best_programming_language)
	: Employee(first_name,second_name,gender,age)
	{
		Best_Programming_Language = best_programming_language;
	}
	
};

int main() {
	//Employee employee1 = Employee("Mishael", "Ndegwa", 'M', 21);
	////we used this commented code  down below before we had come up with our constructor 
	///*employee1.first_name = "Mishael";
	//employee1.second_name = "Ndegwa";
	//employee1.gender = 'M';
	//employee1.age = 22;*/

	//employee1.introduction();//call the behaviour
	//employee1.askforPromotion();// call the abstract logic implemented on the employee class

	////create the second employee instance
	//Employee employee2 = Employee("Justus", "Kamau", 'M', 20);
	////we used this commented code  down below before we had come up with our constructor
	///*employee2.first_name = "justuse";
	//employee2.second_name = "kamau";
	//employee2.gender = 'm';
	//employee2.age = 21;*/

	//employee2.introduction();//call the behaviour
	//employee2.askforPromotion();// call the abstract logic implemented on the employee class

	////create the third employee instance
	//Employee employee3 = Employee("Persis", "Wangari", 'F', 16);
	////we used this commented code  down below before we had come up with our constructor
	///*employee3.first_name = "Persis";
	//employee3.second_name = "Wangari";
	//employee3.gender = 'F';
	//employee3.age = 16;*/
	//
	//employee3.introduction();//call the behaviour
	//employee3.askforPromotion();// call the abstract logic implemented on the employee class


	////testing the getters and setters
	//employee1.setAge(4);
	//cout << "My name is " << employee1.getFirst_name() << " " << employee1.getSecond_name() << " and i lied , my age is " << employee1.getAge() << endl;
	//employee2.setFirst_name("Kamau");
	//employee2.setSecond_name("Justus");
	//employee2.setGender('K');
	//cout << "Also my name was " << employee2.getFirst_name() << " " << employee2.getSecond_name() << " while my gender is  " << employee2.getGender() << endl;
	// testing the Developer child class

	Developer dev1 = Developer("mishael", "ndegwa", 'M', 34, "C++");
	dev1.fix_bug();
}
