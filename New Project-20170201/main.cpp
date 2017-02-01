#include <iostream>

using namespace std;

int main()
{
  int x;
  int kapinajums;
  
  cout << "Ievadi skaitli kuru gribi kapinat kvadrata" << endl;
  cin >> x;
  
  if(x > 0){
   //Sis izpildisies ja x ir lielaks par 0
   cout << "X ir lielaks par 0" << endl;
   kapinajums = x*x;
   cout << "Tavs skaitlis " << x << " kapinats kvadrata ir " << kapinajums<< endl;
  
  }else{
   //Sis izpildisies ja x nebus lielaks par 0
   cout << "X ir mazaks vai vienads ar 0"<< endl;
  
  }
  
   
   return 0;
}

