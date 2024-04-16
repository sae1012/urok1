#include <iostream>
#include <vector>
#include <string>
using namespace std;
string task1(int number) {
    vector <string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    if (number >= 1 && number <= 7)
    {
        return days[number - 1];
    }
    else
    {
        return "Error";
    }
}


string task2(int number) {
    vector <string> month = {"January", "February", "March", "April", "May", "June", "Jule", "August", "September", "October", "November", "December"};
    if (number >= 1 && number <= 12)
    {
        return month[number - 1];
    }
    else
    {
        return "Error";
    }
}


string task3(int number) {
    vector <string> season = {"Winter", "Spring", "Summer", "Autumn"};
    
    if (number == 12 || number == 1 || number == 2)
    {
        return season[0];
    }
    if (number == 3 || number == 4 || number == 5)
    {
        return season[1];
    }
    if (number == 6 || number == 7 || number == 8)
    {
        return season[2];
    }
    if (number == 9 || number == 10 || number == 11)
    {
        return season[3];
    }
    if (number <= 0 || number > 12)
    {
        return "Error";
    }
}


int task4(int number) {
    string check;
    cout << "Is this a leap year? Answer: Yes/No " << "Enter answer:";
    cin >> check;
    
    if (number == 2 && check == "Yes")
    {
        return 29;
    }
    else if (number == 2 && check == "No")
    {
        return 28;
    }
    else if (number == 4 || number == 6 || number == 9 || number == 11)
    {
        return 30;
    }
    else if (number == 1 || number == 3 || number == 5 || number == 7 || number == 8 || number == 10 || number == 12)
    {
        return 31;
    }
    
  int task5(int number)
{

    if (number == 2)
    {
        return 28;
    }
    else if (number == 4 || number == 6 || number == 9 || number == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}


string task6(int number)
{
    vector <string> month = {"январь", "февраль", "март", "апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"};
    return month[number % 12];
}


int main() {
    int number;
    cout << "Enter number:" << endl;
    cin >> number;
    cout << task1(number) << endl;
    cout << task2(number) << endl;
    cout << task3(number) << endl;
    cout << task4(number) << endl;
    cout << task5(number) << endl;
    cout << task6(number) << endl;
}