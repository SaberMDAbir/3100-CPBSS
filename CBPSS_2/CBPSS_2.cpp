//MD Abir A. Choudhury
//022318
//China Border Protection Agency Satisfaction
//Exercise 5
//Keeps track of the officer's satisfaction rating

#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main() {
	int choice = 0;
	int low = 0; 
	int high = 0;
	int total = 0;
	int count = 0;
	int rating = 0;
	double average = 0;
	//constants
	const int SUBMIT = 1,
		VIEW = 2,
		RESET = 3;

	do {
		cout << "Welcome to China Border Protection\n"
			"=======Satisfaction Survey========\n";
		cout << "1- Submit Rating\n"
			"2- View Rating\n"
			"3- Reset Rating\n"
			"0- Exit\n\n"
			"Please pick one. What is your choice?\n";
		cin >> choice;
		cout << "\n";

		switch (choice) {
		case SUBMIT:
			cout << "Please input a rating for the officer you have just seen (1-4): \n";
			cin >> rating;
			cout << "\n";
			//flagging the error
			if (rating < 1 || rating > 4) {
				cout << "You have inputted an invalid number. Please input a valid number.\n\n";
				exit;
			}
			if (rating < low) {
				low = rating;
			}
			else if (rating > high) {
				high = rating;
			}
			//total for average
			total += rating;
			//keeping count of the loop
			count++;
			average = total / count;
			break;

		case VIEW:
			if (rating != 0) {
				cout << "Highest rating received: " << high << "\n";
				cout << "Lowest rating received: " << low << "\n";
				cout << "Average rating recieved: " << fixed << setprecision(2) << average << "\n\n";
			}

			else {
				cout << "There are no ratings for this officer yet.\n\n";
			}
			break;

		case RESET:
			rating = 0;
			total = 0;
			average = 0;
			low = 0;
			high = 0;
			count = 0;

			cout << "The rating for this officer is reset.\n\n";
			break;
		}
	} while (choice != 0);

	cout << "Thank you for using our service. You have contributed to the making of an excellent program.\n\n";

	system("PAUSE");
	return 0;
} 