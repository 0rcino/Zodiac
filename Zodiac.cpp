
#include <iostream>
using namespace std;

// use string and fucntion
string getZodiacsSigns(int months, int days) // use int for whole number
{
    // Define the start and end dates of each zodiac sign
    int zodiacStartsDates[12] = {21, 20, 21, 21, 22, 22, 23, 24, 24, 24, 23, 22};
    string zodiacsSigns /*use string to storing text*/[12] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};

    // use if to Check the birth date is valid or true
    if (months < 1 || months > 12 || days < 1 || days > 31)
    {
        return "Invalid date";
    }

    if (days < zodiacStartsDates[months - 1]) // use if a condition is true
    {
        return zodiacsSigns[(months + 10) % 12];
    }
    else // use else a condition is false
    {
        return zodiacsSigns[months - 1];
    }
}

// use string and function
string getChinesesZodiacSigns(int years)
{
    // Define the cycle of the Chinese zodiac signs
    string chinesesZodiacsSigns /*use string to storing text*/[12] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep"};

    if (years < 12) // use if to declare a condition is true
    {
        return "Invalid year";
    }
    return chinesesZodiacsSigns[years % 12];
}

int main() // main of the function of code
{

    int months, days, years;

    cout << "Enter your birth month (1-12): ";
    cin >> months;
    cout << "Enter your birth day (1-31): ";
    cin >> days;
    cout << "Enter your birth year: ";
    cin >> years;

    cout << "Your zodiac sign is: " << getZodiacsSigns /*call the function*/ (months, days) << endl;
    cout << "Your Chinese zodiac sign is: " << getChinesesZodiacSigns /*call the function*/ (years) << endl;
}