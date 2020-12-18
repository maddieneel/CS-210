//============================================================================
// Name        : Project.cpp
// Author      : Madeline Neel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <iomanip>
//set precision
#include "changeDisplay.h"
//including inheritance class

int main() {
	string AmPm = "NA";
	int twelveHourTimeHour = 0;
	int militaryTimeHour = 0;
	int twelveHourTimeMinute = 0;
	int militaryTimeMinute = 0;
	int twelveHourTimeSecond = 0;
	int militaryTimeSecond = 0;
	//setting variables
	again:
	//allowing loop to keep changing time
	cout << endl;
	// spacing before next edit
	cout.fill('0');
	cout << "*****************" << "     " << "*****************" << endl;
	cout << "* 12-Hour Clock *" << "     " << "* 24-Hour Clock *" << endl;
	cout << "*  " << setw(2) << twelveHourTimeHour << ":" << setw(2) << twelveHourTimeMinute << ":" << setw(2) << twelveHourTimeSecond << " " << AmPm << "  * "
		<< "    *    " << setw(2) << militaryTimeHour << ":" << setw(2) << militaryTimeMinute << ":" << setw(2) << militaryTimeSecond << "   *" << endl;
	cout << "*****************" << "     " << "*****************" << endl;
	//outputting starting time

	changeDisplay();
	//calling display for user input
	int displayChanges;
	cin >> displayChanges;
	//taking user input
	switch(displayChanges){
	case 1:
		if(twelveHourTimeHour >= 12){
			twelveHourTimeHour = 1;
			//if hour added - will return to 0
		}
		else{
			twelveHourTimeHour = twelveHourTimeHour + 1;
			//adding hour to twelve hour clock
		}
		if(militaryTimeHour >= 24){
			militaryTimeHour = 0;
			//if hour added - will return to 0
		}
		else{
			militaryTimeHour = militaryTimeHour + 1;
			//adding hour to military time
		}
		goto again;
	case 2:
		if(twelveHourTimeMinute >= 59){
			twelveHourTimeMinute = 0;
			//if minute added - will return to 0
		}
		else{
			twelveHourTimeMinute = twelveHourTimeMinute + 1;
			//adding minute to twelve hour clock
		}
		if(militaryTimeMinute >= 59){
			militaryTimeMinute = 0;
			//if minute added - will return to 0
		}
		else{
			militaryTimeMinute = militaryTimeMinute + 1;
			//adding minute to military time
		}
		goto again;
	case 3:
		if(twelveHourTimeSecond >= 59){
			twelveHourTimeSecond = 0;
			//if second added - will return to 0
		}
		else{
			twelveHourTimeSecond = twelveHourTimeSecond + 1;
			//adding second to twelve hour clock
		}
		if(militaryTimeSecond >= 59){
			militaryTimeSecond = 0;
			//if second added- will return to 0
		}
		else{
			militaryTimeSecond = militaryTimeSecond + 1;
			//adding second to military time
		}
		goto again;
	case 4:
		cout << "Exiting edit time." << endl;
		break;
	default:
		cout << "Invalid Choice." << endl;
		goto again;
	}

	cout << "Select A for AM or P for PM" << endl;
	cin >> AmPm;
	if (AmPm == "a" || "A"){
		AmPm = "AM";
	}
	if (AmPm == "p" || "P"){
		AmPm = "PM";
	}
	else{
		cout << "Input Invalid" << endl;
	}
	//setting AM or PM for 12 hour clock

	cout.fill('0');
	cout << "*****************" << "     " << "*****************" << endl;
	cout << "* 12-Hour Clock *" << "     " << "* 24-Hour Clock *" << endl;
	cout << "*  " << setw(2) << twelveHourTimeHour << ":" << setw(2) << twelveHourTimeMinute << ":" << setw(2) << twelveHourTimeSecond << " " << AmPm << "  * "
       << "    *    " << setw(2) << militaryTimeHour << ":" << setw(2) << militaryTimeMinute << ":" << setw(2) << militaryTimeSecond << "   *" << endl;
	cout << "*****************" << "     " << "*****************" << endl;
	}
	//outputting final edited time


