/*Create a Program that shall determine the Chinese Zodiac Sign (By year)
and Zodiac Sign (By Month and Day) with Validation of Birthday, month and year.*/

// Progam # 03

/*Leader: Allen Jefferson C. Orcino
 */

#include <iostream>
using namespace std;

string zodiacsSigns(int months, int days) // use string and function use in for whole number
{
  // Define the cycle of the Zodiac signs
  int zodiacDates /*use array*/[12] = {21, 20, 21, 21, 22, 22, 23, 24, 24, 24, 23, 22};
  string zodiacsSigns /*use omit array*/[12] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};

  // use conditional statement check the birth date is valid or true
  if (months < 1 || months > 12 || days < 1 || days > 31)
  {
    return "Invalid date"; // validation
  }

  if (days < zodiacDates[months - 1])
  {
    return zodiacsSigns[(months + 10) % 12];
  }
  else // use else a conditon is false
  {
    return zodiacsSigns[months - 1];
  }
}

string chineseZodiac(int years) // use string and function
{
  // Define the cycle of the Chinese Zodiac signs
  string chinesesZodiac[12] /*use omit array*/ = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep"};

  if (years < 0) // use if to declare a condition is true
  {
    return "Invalid year";
  }
  return chinesesZodiac[years % 12];
}

bool leapYear(int years) // validated for leap year or months or days about months
{
  return (years % 4 == 0 && years % 100 != 0) || (years % 400 == 0); // to declare to leap year
}

bool valid(int days, int months, int years)
{
  if (years < 1900 || years > 2100 || months < 1 || months > 12 || days < 1 || days > 31) // input of year to declare leap year and months
    return false;

  int daysAndMonth = 31;
  if (months == 4 || months == 6 || months == 9 || months == 11)
    daysAndMonth = 30;
  else if (months == 2)
  {
    if (leapYear(years))
      daysAndMonth = 29;
    else
      daysAndMonth = 28;
  }

  return days <= daysAndMonth;
}

int main() // main of the function of code
{

  int months, days, years; // int for whole number

  /*  do/while loop is a variant of the while loop. This loop will execute the code block once,
  before checking if the condition is true, then it will repeat the loop as long as the condition is true.*/
  do
  {
    cout << "Zodiac and Chinese Sign";
    cout << endl;
    cout << endl;
    cout << "Enter your birth month (1-12): ";
    cin >> months;
    cout << "Enter your birth day (1-31): ";
    cin >> days;
    cout << "Enter your birth year: (1900-2100): ";
    cin >> years;

    if (!valid(days, months, years)) // if wrong input declare to invalid date
    {
      cout << "Please enter a valid birthday date." << endl;
      cin.get();
      cout << endl;
      cout << "To return to Choices, press ENTER . . . ";
      cout << endl;
      cin.get();
    }
  } while (!valid(days, months, years)); // condtion for days, months, years

  cout << "Your zodiac sign is: " /*call a function*/ << zodiacsSigns(months, days) << endl;
  cout << "Your Chinese zodiac sign is: " /*call a function*/ << chineseZodiac(years) << endl;
  cin.get();
  cout << endl;
  cout << "To return to Choices, press ENTER . . . ";
  cout << endl;
  cin.get();
}