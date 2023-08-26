// Zodiac Sign and Birth Months and days and year
#include <iostream>
using namespace std;

int main()
{
    int year, month, day;

    cout << "Enter your birth year: ";
    cin >> year;

    cout << "Enter your birth month (1-12): ";
    cin >> month;

    cout << "Enter your birth day (1-31): ";
    cin >> day;

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
    {
        cout << "Invalid input. Please try again.\n";
    }

    string sign;

    switch (month)
    {

    case 1:
        if (day <= 19)
            sign = "Capricorn";
        else
            sign = "Aquarius";
        break;
    case 2:
        if (day <= 18)
            sign = "Aquarius";
        else
            sign = "Pisces";
        break;
    case 3:
        if (day <= 20)
            sign = "Pisces";
        else
            sign = "Aries";
        break;
    case 4:
        if (day <= 19)
            sign = "Aries";
        else
            sign = "Taurus";
        break;
    case 5:
        if (day <= 20)
            sign = "Taurus";
        else
            sign = "Gemini";
        break;
    case 6:
        if (day <= 20)
            sign = "Gemini";
        else
            sign = "Cancer";
        break;
    case 7:
        if (day <= 22)
            sign = "Cancer";
        else
            sign = "Leo";
        break;
    case 8:
        if (day <= 22)
            sign = "Leo";
        else
            sign = "Virgo";
        break;
    case 9:
        if (day <= 22)
            sign = "Virgo";
        else
            sign = "Libra";
        break;
    case 10:
        if (day <= 22)
            sign = "Libra";
        else
            sign = "Scorpio";
        break;
    case 11:
        if (day <= 21)
            sign = "Scorpio";
        else
            sign = "Sagittarius";
        break;
    case 12:
        if (day <= 21)
            sign = "Sagittarius";
        else
            sign = "Capricorn";
        break;
    default:
        cout << "Invalid month. Please try again.\n";
    }
    cout << "Your zodiac sign is: " << sign << "\n";
}