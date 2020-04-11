//Student Name: Maximillian
//Teacher: Dr. Tyson McMillan
//Date: 4/10/2020 
//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*
Research Input data: go to http://www.weather.com
Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//Fort Worth = 1, Calgary = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X, High/Low: Temp

Fort Worth, Day 1, High/Low: 71/62
Fort Worth, Day 2, High/Low: 79/39
Fort Worth, Day 3, High/Low: 55/41
Fort Worth, Day 4, High/Low: 54/39
Fort Worth, Day 5, High/Low: 60/45
Fort Worth, Day 6, High/Low: 69/45
Fort Worth, Day 7, High/Low: 69/56
Calgary, Day 1, High/Low: 23/14
Calgary, Day 2, High/Low: 28/15
Calgary, Day 3, High/Low: 38/27
Calgary, Day 4, High/Low: 41/29
Calgary, Day 5, High/Low: 39/27
Calgary, Day 6, High/Low: 45/30
Calgary, Day 7, High/Low: 52/35
*/
int main()
{
      const int CITY = 2;
      const int DAY = 7;
      const int HIGHorLOW = 2;
 
    int temperature[CITY][DAY][HIGHorLOW];
    //Note your input data from the above
    cout << "Enter all temperature for a week of first city and then second city. \n";
 
    // Inserting the values into the temperature array
    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops
    for (int i = 0; i < CITY; ++i)
    {
      for(int j = 0; j < DAY; ++j)
      {
        for (int k = 0; k < HIGHorLOW; k++)
        {
          if(i == 0)
          {
          cout << "Fort Worth, Day, " << j + 1;
            if(k == 0)
              cout << " High" << " : ";
            else
              cout << " Low" << " : ";
          }
          else
          {
            cout << "Calgary, Day, " << j + 1 << " : ";
            if(k == 0)
              cout << " High" << " : ";
            else
              cout << " Low" << " : ";
          }
          cin >> temperature[i][j][k];
        }
      }
    }
    cout << "\n\nDisplaying Values:\n";
 
    // Accessing the values from the temperature array
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < DAY; ++j)
        {
          cout << "City " << i + 1 << ", Day " << j + 1 << " High/Low;
          for (int k = 0; k < HIGHorLOW; k++)
          {
            
          }  
        }
    }

    return 0;
}
//Source