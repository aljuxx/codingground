#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int summa;
    int starpiba;
    int reizinajums;
    int mod;
    double dalijums;
    int z;
    
    x = 1;
    y = 2;
    z = 3;
    
    
    
   summa = 2x + 3y + z;
   starpiba = x - y;
   reizinajums = x * y;
   mod = x % y;
   dalijums = x / (double) y;
   
   cout << "Skaitla " << x << " un " << y << " summa ir " << summa << endl;
   cout << "Skaitla " << x << " un " << y << " starpiba ir " << starpiba << endl;
   cout << "Skaitla " << x << " un " << y << " reizinajums ir " << reizinajums << endl;
   cout << "Skaitla " << x << " un " << y << " dalijums ir " << dalijums << endl;
   cout << "Skaitla " << x << " un " << y << " mod ir " << mod << endl;
   cout << "Skaitla " << x << " un " << y << " un " << z << " summa ir " << summa << endl;
   cout << "Alise Riekstina" << endl;
   return 0;
}

  
   
