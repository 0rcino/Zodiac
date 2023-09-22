/*Create a Program that shall determine the Chinese Zodiac Sign (By year)
and Zodiac Sign (By Month and Day) with Validation of Birthday, month and year.*/

// Progam # 03

/*Leader: Allen Jefferson C. Orcino
  Member:

 */

#include <iostream>
using namespace std;

string zodiacsSigns(int months, int days)
{

  int zodiacDates[12] = {21, 20, 21, 21, 22, 22, 23, 24, 24, 24, 23, 22};
  string zodiacsSigns[12] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};

  if (months < 1 || months > 12 || days < 1 || days > 31)
  {
    return "Invalid date";
  }

  if (days < zodiacDates[months - 1])
  {
    return zodiacsSigns[(months + 10) % 12];
  }
  else
  {
    return zodiacsSigns[months - 1];
  }
}

string chineseZodiacs(int years)
{

  string chinesesZodiac[12] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep"};

  if (years < 0)
  {
    return "Invalid year";
  }
  return chinesesZodiac[years % 12];
}

bool leapYears(int years)
{
  return (years % 4 == 0 && years % 100 != 0) || (years % 400 == 0);
}

bool inValids(int days, int months, int years)
{
  if (years < 1900 || years > 2200 || months < 1 || months > 12 || days < 1 || days > 31)
    return false;

  int daysAndMonth = 31;
  if (months == 4 || months == 6 || months == 9 || months == 11)
    daysAndMonth = 30;
  else if (months == 2)
  {
    if (leapYears(years))
      daysAndMonth = 29;
    else
      daysAndMonth = 28;
  }

  return days <= daysAndMonth;
}

int main()
{

  int months, days, years;

  do
  {
    cout << "+-------------------------+\n";
    cout << "| Zodiac and Chinese Sign |\n";
    cout << "+-------------------------+";
    cout << endl;
    cout << endl;
    cout << "Enter your birth month (1-12): ";
    cin >> months;
    cout << "Enter your birth day (1-31): ";
    cin >> days;
    cout << "Enter your birth year: (1900-2200): ";
    cin >> years;

    if (!inValids(days, months, years))
    {
      cout << "Please enter a valid birthday date." << endl;
      cin.get();
      cout << endl;
      cout << "To return to Choices, press ENTER . . . ";
      cout << endl;
      cin.get();
    }
  } while (!inValids(days, months, years));

  cout << "Your zodiac sign is: " << zodiacsSigns(months, days) << endl;
  cout << "Your Chinese zodiac sign is: " << chineseZodiacs(years) << endl;
  cin.get();
  cout << endl;
  cout << "To return to Choices, press ENTER . . . ";
  cout << endl;
  cin.get();
}