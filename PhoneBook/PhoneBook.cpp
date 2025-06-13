// Нам треба створити проєкт "Телефонна книга". 
/*
- два класи - Contact та PhoneBook
- Contact: поля класу (Прізвище, Ім`я, номер телефону, пошта), сетери з логікою вказування, сеттери, метод??
- PhoneBook: вектор контактів, можливість додати контакти, можливість знайти за номером телефону/або за прізвищем, показати всі контакти
- окремий глобальний метод: меню взаємодії
- перевірка цього проєкту


*/

#include <iostream>
#include <vector>

class Contact {
	std::string lastName;
	std::string firstName;
	std::string phoneNumber;
	std::string email;
	
	// --------------------------------- SETTERS
	void setLN (std::string lasNam) {
		lastName = lasNam;
	}

	void setFN (std::string firNam) {
		firstName = firNam;
	}

	void setPN(std::string phnNum) {
		phoneNumber = phnNum;
	}

	void setEmail(std::string eml) {
		email = eml;
	}
	
	// public()

	// ---------------------------------- GETTERS
	std::string getLN() { return lastName; }

	std::string getFN() { return firstName; }

	std::string getPN() { return phoneNumber; }

	std::string getEM() { return email; }

	// ----------------------------------- METHODS
	void PrintInfo() {
		std::cout << lastName << '\t' << firstName << '\t' << phoneNumber << '\t' << email << std::endl;
	}

};

class PhoneBooK {
	std::string vector Contacts {}
};

int main() {
}
