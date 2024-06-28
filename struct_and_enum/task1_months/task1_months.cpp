// Task1_Months.cpp
#include <iostream>

enum class Months : short {
	JANUARY= 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER,
};

int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru_RU");
	
	std::string months[12] = {	"Январь", 
								"Февраль", 
								"Март", 
								"Апрель", 
								"Май", 
								"Июнь", 
								"Июль", 
								"Август", 
								"Сентябрь", 
								"Октябрь", 
								"Ноябрь", 
								"Декабрь" 
	};
	short int m = 0;

	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> m;
		
		Months mo = static_cast <Months> (m);

		switch (mo) {
		case static_cast <Months> (0):
			std::cout << "До свидания " << std::endl;
			break;
		case Months::JANUARY:
			std::cout << months[0] << std::endl;
			break;
		case Months::FEBRUARY:
			std::cout << months[1] << std::endl;
			break;
		case Months::MARCH:
			std::cout << months[2] << std::endl;
			break;
		case Months::APRIL:
			std::cout << months[3] << std::endl;
			break;
		case Months::MAY:
			std::cout << months[4] << std::endl;
			break;
		case Months::JUNE:
			std::cout << months[5] << std::endl;
			break;
		case Months::JULY:
			std::cout << months[6] << std::endl;
			break;
		case Months::AUGUST:
			std::cout << months[7] << std::endl;
			break;
		case Months::SEPTEMBER:
			std::cout << months[8] << std::endl;
			break;
		case Months::OCTOBER:
			std::cout << months[9] << std::endl;
			break;
		case Months::NOVEMBER:
			std::cout << months[10] << std::endl;
			break;
		case Months::DECEMBER:
			std::cout << months[11] << std::endl;
			break;
		default:
			std::cout << "Неправильный номер!" << std::endl;
			break;
		}
	} while (m);
	return 0;
}
// Thanks for the tutorial!