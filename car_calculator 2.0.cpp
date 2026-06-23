#include<iostream>
#include <string>
// برتقالي 
std::string o = "\033[38;5;208m";
// اصفر 
std::string y = "\033[38;5;220m";

// احمر 
std::string r = "\033[38;5;196m";

// ازرق 
std::string b = "\033[38;5;21m";
// ازرق فاتح 
std::string lb = "\033[38;5;45m";
// بنفسجي فاتح 
std::string lp = "\033[38;5;129m";
// اخظر
std::string g = "\033[38;5;46m";

std::string reset = "\033[0m";
int choice;

void MonthlyInstallmentCalculation() {
	std::cout << lb << "Monthly Installment Calculation\n" << reset;
	double IslamicMurabaha;
		double MonthlyInstallment;
	double CarPrice;
	double DownPayment;
	double NumberofYears;
	double Theyearlypayment;
	std::cout << "\nPlease enter the car price:";
	std::cin >> CarPrice;
	std::cout << "\nPlease enter the down payment:";
	std::cin >> DownPayment;
	std::cout << "\nPlease enter the Islamic Murabaha percentage (%):";
	std::cin >> IslamicMurabaha;
	std::cout << "\nPlease enter the number of years:";
	std::cin >> NumberofYears;
	MonthlyInstallment = ((CarPrice - DownPayment) + ((CarPrice - DownPayment) * (IslamicMurabaha / 100.0) * NumberofYears)) / (NumberofYears * 12);
	Theyearlypayment = ((CarPrice - DownPayment) + ((CarPrice - DownPayment) * (IslamicMurabaha / 100.0) * NumberofYears)) / (NumberofYears );
	system("cls");
	std::cout << "The monthly installment is : " << MonthlyInstallment;
	std::cout <<"\n The yearly payment is:" << Theyearlypayment;
	std::cout << "\n\nNote: Ideally, your monthly car installment should be a maximum of "<< r << "20%" << reset << "of your salary.\n ";
	
	
	}
void AffordableCarPriceCalculation() {
	std::cout << lb << "Affordable Car Price Calculation \n" << reset;
	double IslamicMurabaha;
	double MonthlyInstallment;
	double CarPrice;
	double DownPayment;
	double NumberofYears;
	std::cout << "\nPlease enter the Monthly Installment:";
	std::cin >> MonthlyInstallment;
	std::cout << "\nPlease enter the down payment:";
	std::cin >> DownPayment;
	std::cout << "\nPlease enter the Islamic Murabaha percentage (%):";
	std::cin >> IslamicMurabaha;
	std::cout << "\nPlease enter the number of years:";
	std::cin >> NumberofYears;
	CarPrice = ((MonthlyInstallment * (NumberofYears * 12))) / (1 + (IslamicMurabaha / 100))+ +DownPayment;
	system("cls");
	std::cout << "\n The Car Price is :" << CarPrice;
	std::cout << "\n\nNote: Ideally, your monthly car installment should be a maximum of " << r << "20%" << reset << "of your salary.\n ";
	
}
void CarPurchaseFeasibility() {
	int cartp;

	
		std::cout << lb << "Car Purchase Feasibility \n\n" << reset;
		std::cout << "What is your car type?\n 1. Gasoline\n 2. Electric\n 3. Hybrid";
		std::cin >> cartp;
		while (1 > cartp || cartp > 3) {
			std::cout << r << "Invalid input. Please enter the correct option.\n" << reset;
			std::cout << lb << " What is your car type?\n 1. Gasoline\n 2. Electric\n 3. Hybrid\n" << reset;
			std::cin >> choice;
		}
		if (cartp == 1) {
			double Newcarfuelconsumption;
			double Oldcarfuelconsumption;
			double Priceofaliterofgasolineinyourcountry;
			double Expectedsavingsper100kilometers;
				
			std::cout << " Enter how many kilometers the new car runs per 20L :";
			std::cin >> Newcarfuelconsumption;
				std::cout << "Enter how many kilometers the old car runs per 20L :";
			std::cin >> Oldcarfuelconsumption;
			std::cout << " Price of a liter of gasoline in your country :";
			std::cin>> Priceofaliterofgasolineinyourcountry;
			Expectedsavingsper100kilometers = (100 / (Oldcarfuelconsumption / 20)) - (100 / (Newcarfuelconsumption / 20));
			system("cls");
			
				std::cout << y << " \nsavings per 100km:" << reset << Expectedsavingsper100kilometers;
				if (240 > Newcarfuelconsumption && Newcarfuelconsumption > 150) {
				std::cout << y << "\nThe new car's fuel consumption is acceptable" << reset;
				std::cout << r << "\nNOTE!:" << reset << " Savings do not mean the car's fuel economy is good.\n You might save money, but both cars could still have high fuel consumption!";
			}
				if (150 > Newcarfuelconsumption ) {
					std::cout << r<< "\nThe new car's fuel consumption is poor" << reset;
					std::cout << r << "\nNOTE!:" << reset << " Savings do not mean the car's fuel economy is good.\n You might save money, but both cars could still have high fuel consumption!";

				}
				if (Newcarfuelconsumption > 240) {
					std::cout << g << "\nThe new car's fuel consumption is excellent" << reset;
					std::cout << r << "\nNOTE!:" << reset << " Savings do not mean the car's fuel economy is good.\n You might save money, but both cars could still have high fuel consumption!";
					
				}
			




		}
		if (cartp == 2) {
			double EVRange;

			std::cout << "\nEnter the EV's real range per full charge (in kilometers): ";
			std::cin >> EVRange;

			system("cls");

			if (EVRange > 450) {
				std::cout << g << "The EV's range is EXCELLENT.\n" << reset;
				std::cout << "EXCELLENT for city driving and  highway trips";
			}
			 if (EVRange >= 300 && EVRange <= 450) {
				std::cout << y << "The EV's range is ACCEPTABLE .\n" << reset;
				std::cout << "Good for city driving and occasional highway trips.\n";
			}
			if (EVRange < 300) {
				std::cout << r << "The EV's range is POOR .\n" << reset;
				std::cout << "Warning: You will suffer from range anxiety on long trips!\n";
			}


		}
		if (cartp == 3) {

			double Newcarfuelconsumption;
			double Oldcarfuelconsumption;
			double Priceofaliterofgasolineinyourcountry;
			double Expectedsavingsper100kilometers;

			std::cout << " Enter how many kilometers the new car runs per 20L :";
			std::cin >> Newcarfuelconsumption;
			std::cout << "Enter how many kilometers the old car runs per 20L :";
			std::cin >> Oldcarfuelconsumption;
			std::cout << " Price of a liter of gasoline in your country :";
			std::cin >> Priceofaliterofgasolineinyourcountry;
			Expectedsavingsper100kilometers = (100 / (Oldcarfuelconsumption / 20)) - (100 / (Newcarfuelconsumption / 20));
			system("cls");

			std::cout << y << " \nsavings per 100km:" << reset << Expectedsavingsper100kilometers;
			if (350> Newcarfuelconsumption && Newcarfuelconsumption > 250) {
				std::cout << y << "\nThe new car's fuel consumption is acceptable" << reset;
				std::cout << r << "\nNOTE!:" << reset << " Savings do not mean the car's fuel economy is good.\n You might save money, but both cars could still have high fuel consumption!";
			}
			if (250 > Newcarfuelconsumption) {
				std::cout << r << "\nThe new car's fuel consumption is poor" << reset;
				std::cout << r << "\nNOTE!:" << reset << " Savings do not mean the car's fuel economy is good.\n You might save money, but both cars could still have high fuel consumption!";

			}
			if (Newcarfuelconsumption > 350) {
				std::cout << g << "\nThe new car's fuel consumption is excellent" << reset;
				std::cout << r << "\nNOTE!:" << reset << " Savings do not mean the car's fuel economy is good.\n You might save money, but both cars could still have high fuel consumption!";
				std::cin.ignore();
				std::cin.get();
			}
			
		}
		
	}

int main()
{
	
		
			
	while (true) {
		system("cls");
		std::cout << "\n \n \n Welcome to the Car Finance Calculator!\n ";
		std::cout << lp << "\n           BY YAMEEN SAFARINI \n";
		std::cout << lb << "\n--------------------------------------------------------------\n" << reset;
		std::cout << " How can I help you today?\n \n";
		std::cout << lb << "  1. " << reset << "Monthly Installment Calculation" << lb << "  2. " << reset << "Affordable Car Price Calculation \n" << lb << " 3. " << reset << " New car fuel consumption" << reset;
		std::cout << lb << "\n \n  Please enter youer option." << reset;
		std::cin >> choice;
		while (1 > choice || choice > 4) {
			std::cout << r << "Invalid input. Please enter the correct option.\n" << reset;
			std::cout << lb << " Please enter correct option.\n" << reset;
			std::cin >> choice;
		}
		if (choice == 1) {

			system("cls");

			MonthlyInstallmentCalculation();
		}
		if (choice == 2) {
			system("cls");
			AffordableCarPriceCalculation();
		}


		if (choice == 3) {
			system("cls");
			CarPurchaseFeasibility();


		}

		char ex;
		std::cout << "\nReturn to main menu (m) or exit (q)?";
		std::cin >> ex;
		if (ex == 'm' || ex == 'M') {
			continue;
		}
		if (ex == 'q' || ex == 'Q') {
			return 0;
		}
		
		}

	}
	

