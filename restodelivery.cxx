/*
	Author: Trev Aoezeroo
	
	Project Title: MEL^S Food Ordering System
	Project Published: July 9, 2021
	
	Project Description: 
		A C++ Food Ordering System which allows the User to order the following foods:
			-Spaghetti
			-Carbonara
			-Pansit Palabok
			-Fried Chicken
			-Sinigang
			-Drinks
		
	C++ Language Concepts Used:
		-Variable and Data Types
		-Input/Output
		-Conditional Statements (IF statements, Switch-case statements)
		-Loops (particularly FOR loop)
		-User-defined and Pre-defined Functions
		-Preprocessors
		-Class and Objects 
		-STL (Vectors and Algorithm Component)
*/

// ----------------------------------------- START OF THE PROGRAM ------------------------------------------ //

#include <iostream>
#include <vector>
#include <cctype>
#include <numeric>

using namespace std;

// Start of Function to Clear Screen
void clearScreen()
{
	#ifdef _WIN32
		system("cls");
		
	#elif __linux__
		system("clear");
		
	#endif
}
// End of Function to Clear Screen

// Start of Order class
class Order {
	private:
		char option; // Character for User's Option
		int quantity; // Integer for Number of Quantity of Foods to be Ordered
		string customerName; // String for Customer or User Name
		string customerAddress; // String for Customer or User Address
		vector <int> orderQuantity; // Vector for all the Number of Quantity of Foods to be Ordered
		vector <string> orderNames; // Vector for all the Food Choices Ordered by the User
		vector <float> orderPrices; // Vector for all the Prices of Food Ordered by the User
		int n = 0; // Control Variable for the Current Index of the most recent elements in all the Vectors
		
	public:
		// Method Prototyping
		void orderAgain();
		void startMenu();
		void confirmOrder();
		void cancelOrder();
		void confirmShow();
		void showOrder();
		void receipt();
		void errorPrompt();
		void spaghetti();
		void sinangag();
		void pansitPalabok();
		void friedChicken();
		void sinigang();
		void drinks();
};
// End of Order class


// Start of spaghetti() method of class Order
// Method to ask the User for the 3 different choices of Spaghetti to be Ordered
void Order:: spaghetti() 
{
	// Clear Screen
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM | Spaghetti ---";
	
	cout << "\n\n\t [Choice 1] Small Bowl Spaghetti \t Php 30.00";
	cout << "\n\t [Choice 2] Medium Bowl Spaghetti \t Php 45.00";
	cout << "\n\t [Choice 3] Large Bowl Spaghetti \t Php 60.00";
	
	// Ask the User for his/her Option
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	// Ask the User for how many quantities of food is to be Ordered
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	// Pushing the number of quantity entered by the user to the vector orderQuantity
	orderQuantity.push_back(quantity); 
	
	// Incrementing the control variable
	// To update the current index of the most recent element
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		// IF User enter which corresponds to the different choice numbers
		// Push the corresponding food choice to the vector
		// and the computed total cost of the order of the User
		case '1':
			orderNames.push_back("Small Bowl Spaghetti");
			orderPrices.push_back(quantity * 30.00);
			break;

		case '2':
			orderNames.push_back("Medium Bowl Spaghetti");
			orderPrices.push_back(quantity * 45.00);
			break;
			
		case '3':
			orderNames.push_back("Large Bowl Spaghetti");
			orderPrices.push_back(quantity * 60.00);
			break;
			
		// Else, call the errorPrompt() method to display an error statement
		// and exit the program
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	// Ask the User if to confirm to show his/her Orders
	confirmShow();
}
// End of spaghetti() method of the class Order


// Start of carbonara() method of class Order
// Method to ask the User for the 3 different choices of Carbonara to be Ordered
void Order:: sinangag() 
{
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM | Rice ---";
	
	cout << "\n\n\t [Choice 1] Sinangag \t Php 30.00";
	cout << "\n\t [Choice 2] Plain Rice \t Php 15.00";
	cout << "\n\t [Choice 3] Eggdog Sinangag \t Php 60.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Sinangag");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '2':
			orderNames.push_back("Plain Rice");
			orderPrices.push_back(quantity * 15.00);
			break;
			
		case '3':
			orderNames.push_back("Eggdog Sinangag");
			orderPrices.push_back(quantity * 60.00);
			break;
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of carbonara() method of class Order


// Start of pansitPalabok() method of class Order
void Order:: pansitPalabok() 
{
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM | Pansit Palabok ---";
	
	cout << "\n\n\t [Choice 1] Small Bowl Pansit Palabok \t Php 30.00";
	cout << "\n\t [Choice 2] Medium Bowl Pansit Palabok \t Php 45.00";
	cout << "\n\t [Choice 3] Large Bowl Pansit Palabok \t Php 60.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Small Bowl Pansit Palabok");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '2':
			orderNames.push_back("Medium Bowl Pansit Palabok");
			orderPrices.push_back(quantity * 45.00);
			break;
			
		case '3':
			orderNames.push_back("Large Bowl Pansit Palabok");
			orderPrices.push_back(quantity * 60.00);
			break;
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of pansitPalabok() method of class Order


// Start of friedChicken() method of class Order
// Method to ask the User for the 6 different choices or flavors of Chicken to be Ordered
void Order:: friedChicken() 
{
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM | Fried Chicken ---";
	
	cout << "\n\n\t [Choice 1] Lemon Glazed Fried Chicken \t Php 20.00";
	cout << "\n\t [Choice 2] Sweet Chili Fried Chicken \t Php 20.00";
	cout << "\n\t [Choice 3] Spiced Maple Fried Chicken \t Php 20.00";
	cout << "\n\t [Choice 4] Soy Garlic Fried Chicken \t Php 20.00";
	cout << "\n\t [Choice 5] Teriyaki Fried Chicken \t Php 20.00";
	cout << "\n\t [Choice 6] Hickory BBQ Fried Chicken \t Php 20.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Lemon Glazed Fried Chicken");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '2':
			orderNames.push_back("Sweet Chili Fried Chicken");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '3':
			orderNames.push_back("Spiced Maple Fried Chicken");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '4':
			orderNames.push_back("Soy Garlic Fried Chicken");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '5':
			orderNames.push_back("Teriyaki Fried Chicken");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '6':
			orderNames.push_back("Hickory BBQ Fried Chicken");
			orderPrices.push_back(quantity * 20.00);
			break;		
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of friedChicken() method of class Order


// Start of sinigang() method of class Order
// Method to Ask the User for the 3 different choices of the food Sinigang to be Ordered
void Order:: sinigang() 
{
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM | Sinigang ---";
	
	cout << "\n\n\t [Choice 1] Sinigang na Baboy \t Php 50.00";
	cout << "\n\t [Choice 2] Sinigang na Manok \t Php 50.00";
	cout << "\n\t [Choice 3] Sinigang na Bangus \t Php 50.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Sinigang na Baboy");
			orderPrices.push_back(quantity * 50.00);
			break;
			
		case '2':
			orderNames.push_back("Sinigang na Manok");
			orderPrices.push_back(quantity * 50.00);
			break;
			
		case '3':
			orderNames.push_back("Sinigang na Bangus");
			orderPrices.push_back(quantity * 50.00);
			break;
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of sinigang() method of the class Order


// Start of drinks() method of the class Order
// Method to ask the user for the 9 different types of drinks to be ordered
void Order:: drinks() 
{
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM | Drinks ---";
	
	cout << "\n\n\t [Choice 1] 250 ml Mango Shake \t\t Php 30.00";
	cout << "\n\t [Choice 2] 250 ml Melon Shake \t\t Php 30.00";
	cout << "\n\t [Choice 3] 250 ml Coconut Shake \t Php 30.00";
	cout << "\n\t [Choice 4] 250 ml Coca-Cola Softdrink \t Php 20.00";
	cout << "\n\t [Choice 5] 250 ml Sprite Softdrink \t Php 20.00";
	cout << "\n\t [Choice 6] 250 ml Royal Softdrink \t Php 20.00";
	cout << "\n\t [Choice 7] 250 ml Vitamilk Vitamin Drink Php 25.00";
	cout << "\n\t [Choice 8] 250 ml Cobra Energy Drink \t Php 25.00";
	cout << "\n\t [Choice 9] 250 ml Sting Energy Drink \t Php 25.00";	

	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Mango Shake");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '2':
			orderNames.push_back("Melon Shake");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '3':
			orderNames.push_back("Coconut Shake");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '4':
			orderNames.push_back("Coca-cola Softdrink");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '5':
			orderNames.push_back("Sprite Softdrink");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '6':
			orderNames.push_back("Royal Softdrink");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '7':
			orderNames.push_back("Vitamilk Vitamin Drink");
			orderPrices.push_back(quantity * 25.00);
			break;
			
		case '8':
			orderNames.push_back("Cobra Energy Drink");
			orderPrices.push_back(quantity * 25.00);
			break;
			
		case '9':
			orderNames.push_back("Sting Energy Drink");
			orderPrices.push_back(quantity * 25.00);
			break;
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of drinks() method of class Order


// Start of orderAgain() method of class Order
// Method to ask the user if to order another food
void Order:: orderAgain()
{
	char choice; // Character for the User's Option

	// Asking the User if to order another food
	cout << "\n\t Order another food? (Y/N)? ";
	cin >> choice;
	
	// Start of Switch-Case Statement
	// Use the toupper() method to automatically capitalize the User's Option
	switch (toupper(choice))
	{
		// IF User enter Y/y, proceed again to main menu
		case 'Y':
			startMenu();
			break;
			
		// IF User enter N/n, ask the User if to confirm his/her all food orders
		case 'N':
			// Asking the User if to confirm his/her all food order
			cout << "\n\t Confirm all food orders? (Y/N)? ";
			cin >> choice;
			
			// Start of Switch-Case Statement
			switch (toupper(choice)) 
			{
				// IF User enter Y/y, proceed to confirmOrder() method of class Order
				case 'Y':
					confirmOrder();
					break;
				
				
				// ELSE IF user enter N/n, clear all the elements in the vector
				// And reset the control variable to 0
				// Then, display a prompt to the User that his/her order has all been cancelled
				case 'N':
					// Clearing all the elements inside the vectors
					n = 0; // Resetting the control variable to 0
					orderQuantity.clear();
					orderNames.clear();
					orderPrices.clear();
					
					// Displaying the cancelled statement
					cout << "\n\t Your all food orders has been cancelled.";
					cout << "\n\t Thank you for using TENSHI FOS!";
					
					// Ask the User to press enter to return to main menu
					cout << "\n\n\t Press enter to return to main menu...";
					
					// I use the std::cin.ignore() method to ignore the previous character entered by the user
					// Which allows the use of getchar() method to prevent an error
					cin.ignore();
					getchar();
					
					// After entering enter, the program will proceed back to main menu
					startMenu();
					break;
					
				
				// ELSE, call the errorPrompt() method of class Order to display an error statement
				default:
					errorPrompt();
					break; 
			}
			
		default: 
			errorPrompt();
			break; 
	}	
}
// End of orderAgain() method of class Order


// Start of confirmShow() method of class Order
// Method to ask the User if to confirm to show his/her order to the console
void Order:: confirmShow()
{
	char choice; // Character for User's Option

	// Asking the User if to show his/her order
	cout << "\n\t Show all food order? (Y/N)? ";
	cin >> choice;
	
	// Start of Switch-Case Statement
	switch (toupper(choice))
	{
		// IF user enter Y/y, proceed to showOrder() method of class Order
		// To show all the food ordered by the User or Customer
		case 'Y':
			showOrder();
			break;
			
		// ELSE IF User enter N/n, proceed to orderAgain() method of class Order
		// To ask the user if to order another food
		case 'N':
			orderAgain();
			break;
			
		// ELSE, proceeed to the errorPrompt() method of class Order
		// To display an error statement and exit the program
		default: 
			errorPrompt();
			break; 
	}
	// End of Switch-Case Statement
}
// End of confirmShow() method of class Order


// Start of receipt() method of class Order
// Method to show the receipt of the orders of the User
void Order::receipt()
{
	clearScreen();
	
	cout << "RECEIPT: \n";
	
	cout << "\n--------------------------------------------------------------\n";
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM ---";
	cout << "\n B17/L8, Kisanlu Subd. Iponan, Cagayan De Oro City";
	
	cout << "\n\n Customer Name: " << customerName;
	cout << "\n Address: " << customerAddress;
	
	cout << "\n\n Orders: \n";
	
	// Loop to show the orders of the User
	for (int i = 0; i < n; i++)
	{
		cout << "\t" <<orderQuantity[i] << " " << orderNames[i] << "\t " << "Php " << orderPrices[i] << ".00";
		cout << "\n";		
	}
	
	// I have the use the accumulate() method in <numeric> library to get the total price of the orders	
	cout << "\n TOTAL PRICE: Php " << accumulate(orderPrices.begin(), orderPrices.end(), 0) << ".00";
	
	cout << "\n\n Thank you for ordering in MEL^S!\n";
	
	cout << "\n--------------------------------------------------------------\n";
	
	// Clearing all the elements inside the vectors
	// Since the order has been already successful
	n = 0;
	orderQuantity.clear();
	orderNames.clear();
	orderPrices.clear();
	
	// Notifying the User the time it will be delivered
	cout << "\n NOTE: Your order will be delivered in 40 minutes.\n";
	cout << "\n Press enter to continue...";
	getchar();
	// Returning to Main Menu
	startMenu();
}

// Start of showOrder() method of class Order
// Method to show all the food ordered by the User
void Order::showOrder()
{
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM --- ";
	cout << "\n\t\t *** Show Orders ***";
	
	// IF control variable is 0, it means that there is no food yet ordered by the User
	// Proceed to this block, to notify the user he/she has no ordered made yet
	// Then ask if to return to main menu
	if (n == 0)
	{
		cout << "\n\n\t You have no order yet!";
		
		// Ask the User if to Return to Main Menu
		cout << "\n\t Go back to main menu? (Y/N)? ";
		cin >> option;
		
		// Start of Switch-Case Statement
		switch (toupper(option))
		{
			// IF User enter Y/y, proceed back again to main menu
			case 'Y':
				startMenu();
				break;
				
			// ELSE IF User enter N/n, display a thank you message and exit the program
			case 'N':
				cout << "\n\t Thank you for using MEL^S FOS!";
				exit(0);
				break;
				
			// ELSE, proceed to errorPrompt() method of class Order
			// To display an error statement and exit the program
			default:
				errorPrompt();
				break;
		}
		// End of Switch-Case Statement
	}
	
	// Else if n is not equal to 0, proceed to this block
	// To show the current food ordered by the User
	else
	{
		cout << "\n\n\t Orders: \n";
		
		// Loop the show all the food ordered by the User
		for (int i = 0; i < n; i++)
		{
			cout << "\t\t" <<orderQuantity[i] << " " << orderNames[i] << "\t " << "Php " << orderPrices[i] << ".00";
			cout << "\n";		
		}
	
		// Displaying the total price of the current food ordered by the User
		cout << "\n\t TOTAL PRICE: Php " << accumulate(orderPrices.begin(), orderPrices.end(), 0) << ".00\n";
		
		// Calling the orderAgain() method of class Order
		// To ask if the User will order another food
		orderAgain();
	}
}
// End of showOrder() method of class Order


// Start of cancelOrder() method of class Order
// Method to ask the User if to cancel his/her current orders
void Order:: cancelOrder()
{
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM --- ";
	cout << "\n\t\t *** Cancel Order ***";
	
	// IF control variable is equal to 0, it means that User has not made order yet
	// Proceed to this block, to notify that he/she has not made order yet
	// Then ask if he/she wants to return to main menu
	if (n == 0)
	{
		cout << "\n\n\t You have no order yet!";
		
		// Asking the User if to return to main menu
		cout << "\n\t Go back to main menu? (Y/N)? ";
		cin >> option;
		
		// Start of Switch-Case Statement
		switch (toupper(option))
		{
			// IF User enter Y/y, proceed again back to main menu
			case 'Y':
				startMenu();
				break;
				
			// ELSE IF User enter N/n, display a thank you message
			// Then exit the program
			case 'N':
				cout << "\n\t Thank you for using MEL^S FOS!";
				exit(0);
				break;
				
			// ELSE, proceeed to errorPrompt() method of class Order
			// To display an error message and exit the program
			default:
				errorPrompt();
				break;
		}
		// End of Switch-Case Statement
	}
	
	// ELSE IF n is not equal to 0, proceed to this block
	// To ask the User if to cancel his/her all orders
	else
	{
		// Asking the User if to cancel his/her all orders
		cout << "\n\n\t Cancel all orders? (Y/N)? ";
		cin >> option;
			
		// Start of Switch-Case Statement
		switch (toupper(option))
		{
			// IF User enter Y/y, proceed to this block
			// To clear all the elements and notify the User that his/her order has been cancelled
			case 'Y':
				// Clearing all the elements inside the vectors
				// Since the User cancelled his/her all orders
				n = 0;
				orderQuantity.clear();
				orderNames.clear();
				orderPrices.clear();
				
				// Notifying the User that his/her order has been cancelled
				cout << "\n\t Your order has been cancelled.";
				
				// Asking the User if to return to main menu
				cout << "\n\t Go back to main menu? (Y/N)? ";
				cin >> option;
			
				// Start of Switch-Case Statement
				switch (toupper(option))
				{
					// IF User enter Y/y, proceed again to main menu
					case 'Y':
						startMenu();
						break;
					
					// ELSE IF User enter N/n, display a thank you message
					// And exit the program
					case 'N':
						cout << "\n\t Thank you for using MEL^S FOS!";
						exit(0);
						break;
					
					// ELSE, proceed to errorPrompt() method of class Order
					// To display an error message and exit the program
					default:
						errorPrompt();
						break;
				}
				// End of Switch-Case Statement
				break;
					
			// IF User enter N/n, proceed to this block
			// To notify the User that his/her order has been not cancelled
			// Then proceed back again to the main menu
			case 'N':
				cout << "\n\t Your order has been not cancelled.";
				cout << "\n\t Press enter to return to main menu...";
				cin.ignore();
				getchar();
				// Returning to Main Menu
				startMenu();
				break;
		
			// ELSE, call the errorPrompt() method of class Order
			// To display an error message and exit the program
			default:
				errorPrompt();
				break;
		}
		// End of Switch-Case Statement
	}
}
// End of cancelOrder() method of class Order


// Start of confirmOrder() method of class Order
void Order::confirmOrder() 
{
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM --- ";
	cout << "\n\t\t *** Confirm Order ***";
	
	// IF control variable is equal to 0, it means that User has not made order yet
	// Proceed to this block, to notify that he/she has not made order yet
	// Then ask if he/she wants to return to main menu
	if (n == 0)
	{
		cout << "\n\n\t You have no order yet!";
		
		// Asking the User if to return to main menu
		cout << "\n\t Go back to main menu? (Y/N)? ";
		cin >> option;
		
		// Start of Switch-Case Statement
		switch (toupper(option))
		{
			// IF User enter Y/y, proceed again to main menu
			case 'Y':
				startMenu();
				break;
			
			// ELSE IF User enter N/n, display a thank you message
			// And exit the program
			case 'N':
				cout << "\n\t Thank you for using MEL^S FOS!";
				exit(0);
				break;
				
			// ELSE, call the errorPrompt() method of class Order
			// To display an error message and exit the program
			default:
				errorPrompt();
				break;
		}
		// End of Switch-Case Statement
	}
	
	// ELSE IF n is not equal to 0, proceed to this block
	// To ask the User his/her name and the address where his/her order to be delivered
	else
	{
		cin.ignore();
		
		// Asking the User for his/her Full Name
		cout << "\n\n Enter your full name: ";
		getline(cin, customerName);
	
		// Asking the User the address on where the foods are to be delivered
		cout << " Enter the address where to deliver: ";
		getline(cin, customerAddress);
		
		// Then calling the receipt() method of class Order
		// To form the receipt
		receipt();
	}
}
// End of confirmOrder() method of class Order


// Start of errorPrompt() method of class Order
// Method to display an error message and exit the program
void Order::errorPrompt()
{
	cout << "\n\t ERROR! Invalid Input!";
	cout << "\n\t ALL FOOD ORDERS HAS BEEN CANCELLED!";
	cout << "\n\n\t Exiting the program...\n";
	exit(1);
}
// End of errorPrompt() method of class Order


// Start of startMenu() method of class Order
// The MAIN MENU
void Order::startMenu()
{
	// Clear the screen
	clearScreen();
	
	cout << "\n\t --- MEL^S FOOD ORDERING SYSTEM ---";
	cout << "\n\t\t *** Main Menu ***";
	
	cout << "\n\n\t [Option 1] Spaghetti";
	cout << "\n\t [Option 2] Rice";
	cout << "\n\t [Option 3] Pansit Palabok";
	cout << "\n\t [Option 4] Fried Chicken";
	cout << "\n\t [Option 5] Sinigang";
	cout << "\n\t [Option 6] Drinks";
	
	cout << "\n\n\t [Option A] CONFIRM ORDER";
	cout << "\n\t [Option B] CANCEL ORDER";
	cout << "\n\t [Option C] SHOW ORDERS";
	
	// Asking the User's Option
	cout << "\n\n\t Enter your option: ";
	cin >> option;
	
	// Start of Switch-Case Statement
	switch (toupper(option))
	{
		// IF user enter 1, proceed to spaghetti() method
		case '1':
			spaghetti();
			break;
			
		// ELSE IF user enter 2, proceed to carbonara() method
		case '2':
			sinangag();
			break;
		
		// ELSE IF user enter 3, proceed to pansitPalabok() method
		case '3':
			pansitPalabok();
			break;
			
		// ELSE if user enter 4, proceed to friedChicken() method
		case '4':
			friedChicken();
			break;
			
		// ELSE IF user enter 5, proceed to sinigang() method
		case '5':
			sinigang();
			break;
			
		// ELSE IF user enter 6, proceed to drinks() method
		case '6':
			drinks();
			break;
			
		// ELSE IF user enter A/a, proceed to confirmOrder() method
		case 'A':
			confirmOrder();
			break;
			
		// ELSE IF user enter B/b, proceed to cancelOrder()_method
		case 'B':
			cancelOrder();
			break;
		
		// ELSE IF user enter C/c, proceed to showOrder() method
		case 'C':
			showOrder();
			break;
			
		// ELSE, call the errorPrompt() method
		// To display an error statement and exit the program
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
}
// End of startMenu() method of class Order

// Driver Code
int main()
{
	// Creating object myOrder of class Order
	Order myOrder;
	
	// Calling the startMenu() method of object myOrder
	myOrder.startMenu();
	return 0;
}

// ----------------------------------------- END OF THE PROGRAM ------------------------------------------ //
