/*Create a Program that shall determine the Chinese Zodiac Sign (By year)
and Zodiac Sign (By Month and Day) with Validation of Birthday, month and year.*/

// Progam # 03
// Created by Allen callsign AJ

#include <iostream>
using namespace std;

// use string and fucntion
string zodiacsSigns(int months, int days) // use int for whole number
{

  int zodiacDates /*use array*/[12] = {21, 20, 21, 21, 22, 22, 23, 24, 24, 24, 23, 22};
  string zodiacsSigns /*use omit array*/[12] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};

  // use if to Check the birth date is valid or true
  if (months < 1 || months > 12 || days < 1 || days > 31)
  {
    return "Invalid date";// validation 
  }

  if (days < zodiacDates[months - 1]) 
  {
    return zodiacsSigns[(months + 10) % 12];
  }
  else // use else a condition is false
  {
    return zodiacsSigns[months - 1];
  }
}

// use string and function
string chineseZodiac(int years) // use int for whole number
{
  // Define the cycle of the Chinese zodiac signs
  string chinesesZodiac /*use omit array*/[12] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep"};

  if (years < 0) // use if to declare a condition is true
  {
    return "Invalid year"; // validation 
  }
  return chinesesZodiac[years % 12];
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

  cout << "Your zodiac sign is: " << zodiacsSigns /*call the function*/ (months, days) << endl;
  cout << "Your Chinese zodiac sign is: " << chineseZodiac /*call the function*/ (years) << endl;
}