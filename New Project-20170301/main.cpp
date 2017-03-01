#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  
  cout << "Ievadi 3 trijstura malu garumus" << endl;
  
  cin >> a;
  cin >> b;
  cin >> c;
  
  if (a<b+c && b<a+c && c<a+b){
   cout << "Sads trijsturis pastav" << endl;
    
}else{ 
    cout << "Sads trijsturis nepastav" << endl;
}
   return 0;
}

