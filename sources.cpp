#include <iostream>
#include <Windows.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::to_string;

int main() {

	std::string val;
	std::string conv;
	double time{};
	
	cout << "\"AI\" time converter scripted by j8den.\n ok i know im dumb \nbest program ever!!1!1!!! \nhonestly i dont know what im doin bruh\n\n\n\n";

	cout << "What type of time are you trying to convert? (secs,mins,hours,days): ";
	cin >> val;
	cout << "Great, now time format you want to convert to? (secs,mins,hours,days): ";
	cin >> conv;
	cout << "What time do you want to convert to?: ";
	cin >> time;
	std::string result;


	if (val == "secs" && conv == "secs") {
		 result = to_string(time);
	}
	else if (val == "secs" && conv == "mins") {
		 result = to_string(time) + " *1/60";
	}
	else if (val == "secs" && conv == "hours") {
		 result = to_string(time) + " *1/3600";
	}
	else if (val == "secs" && conv == "days") {
		 result = to_string(time) + " *1/86400";
	}
	else if (val == "mins" && conv == "secs") {
		 result = to_string(time) + " *60";
	}
	else if (val == "mins" && conv == "mins") {
		 result = to_string(time);
	}
	else if (val == "mins" && conv == "hours") {
		 result = to_string(time) + " *1/60";
	}
	else if (val == "mins" && conv == "days") {
		 result = to_string(time) + " *1/1440";
	}
	else if (val == "hours" && conv == "secs") {
		 result = to_string(time) + " *3600";
	}
	else if (val == "hours" && conv == "mins") {
		 result = to_string(time) + " *60";
	}
	else if (val == "hours" && conv == "hours") {
		 result = to_string(time);
	}
	else if (val == "hours" && conv == "days") {
		 result = to_string(time) + " *1/24";
	}
	else if (val == "days" && conv == "secs") {
		 result = to_string(time) + " *86400";
	} 
	else if (val == "days" && conv == "mins") {
		 result = to_string(time) + " *1440";
	}
	else if (val == "days" && conv == "hours") {
		 result = to_string(time) + " *24";
	}
	else if (val == "days" && conv == "days") {
		 result = to_string(time);
	}
	else {
		result = "Invalid input lmao";
	}
	
	if (result == "Invalid input lmao") {
		cout << result;
	}
	else {
		cout << result << "\n";
		cout << "^\n|\n|\n|\nenter this shit in ur calculator for the result!!!!!!!!!!!\n";
	}
	std::string waitend;
	cout << "Press any letter to exit...";
	cin >> waitend;
	return 0;

}
