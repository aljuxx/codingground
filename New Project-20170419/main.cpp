#include <iostream>

using namespace std;

int main()
{
  int x;
  int atk;

do{
cout << "Ievadi savu atzimi!" << endl;
cin >> x;




if(x==10){
    cout << "Izcili!" << endl;
}else if(x==9){
    cout << "Teicami!" << endl;
 }else if(x==8){
    cout << "Loti labi!" << endl;
}else if(x==7){
    cout << "Labi!" << endl;
}else if(x==6){
    cout << "Gandrīz labi!" << endl;
}else if(x==5){
    cout << "Viduvēji!" << endl;   
}else if(x==4){
    cout << "Gandrīz viduvēji!" << endl;   
}else if(x==3){
    cout << "Vāji!" << endl;
}else if(x==2){
    cout << "Loti vāji!" << endl;
}else if(x==1){
    cout << "Loti, loti vāji!" << endl;   
} 

switch(x){
    case 10: cout << "Izcili!" << endl; break;
    case 9: cout << "Teicami!" << endl; break;
    case 8: cout << "Loti labi!" << endl; break;
    case 7: cout << "Labi!" << endl; break;
    case 6: cout << "Gandriz labi!" << endl; break;
    case 5: cout << "Viduveji!" << endl; break;
    case 4: cout << "Gandriz viduveji!" << endl; break;
    case 3: cout << "Vaji!" << endl; break;
    case 2: cout << "Loti vaji!" << endl; break;
    case 1: cout << "Loti, loti vaji!" << endl; break;
default: cout << "A tada nepastav" << endl;
}

    cout << "Vai atkartot? Ja ja, tad raksti 1, ja ne, tad 2" << endl;
    
    cin >> atk;

    
}while(atk==1);
  
  
   return 0;
}

