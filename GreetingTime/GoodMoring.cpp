#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  int Time_now;
  char option;
  string greet_message;

  time_t now = time(0);
  tm *ltm = localtime(&now);
  int hour = ltm->tm_hour;
  string greet_time[3] = {"Morning", "Afternoon", "Evening"};
  if (hour < 12)
  {
    // Good morning
    greet_message = greet_time[1];
  }
  else if (Time_now < 6)
  {
    // Good Afternoon
    greet_message = greet_time[2];
  }
  else
  {
    // Good Evening
    greet_message = greet_time[3];
  }

  cout << "Good " << greet_message;
}
