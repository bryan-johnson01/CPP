// MENU  by Bojan Jovanovic

#include <iostream>
using namespace std;


int main() {
    
    int menu = 0;
    
    cout << "\t\tMENU:\n\n"<< endl;
    cout << " 1.Coca Cola(1$)\n 2.Burger(2$)\n 3.Cofee(0,5$)\n\n\n";
    
    cin >> menu;
    
    if (menu == 1){
        cout << "You bought Coca-Cola."<< endl;
        cout << "Your total amount is 1$."<< endl;
    } 
    else if (menu == 2){
        cout << "You bought Burger." << endl;
        cout << "Your total amount is 2$."<< endl;
    }
    else if(menu == 3){
        cout << "You bought Cofee."<< endl;
        cout << "Your total amount is 0,5$."<< endl;
    }
    else if(menu == 12){
        cout << "You bought Coca-Cola and Burger" << endl;
        cout << "Your total amount is 3$." << endl;
    }
    else if(menu == 21){
        cout << "You bought Burger and Coca-Cola." << endl;
        cout << "Your total amount is 3$." << endl;
    }
    else if(menu == 13){
        cout << "You bought Coca-Cola and Cofee." << endl;
        cout << "Your total amount is 1.5$."<< endl;
    }
    else if(menu == 31){
        cout << "You bought Cofee and Coca-Cola." << endl;
        cout << "Your total amount is 1.5$." << endl;
    }
    else if(menu == 23){
        cout << "You bought Burger and Cofee." << endl;
        cout << "Your total amount is 2.5$." << endl;
    }
    else if(menu == 32){
        cout << "You bought Cofee and Burger." << endl;
        cout << "Your total amount is 2.5$." << endl;
    }
    else if(menu == 123){
        cout << "You bought Coca-Cola,Burger and Cofee."<< endl;
        cout << "Your total amount is 3.5$."<< endl;
        cout << "Congratulations!You've got a free glass." << endl;
    }
    else if(menu == 132){
        cout << "You bought Coca-Cola,Cofee and Burger."<< endl;
        cout << "Your total amount is 3.5$"<< endl;
        cout << "Congratulations!You've got a free glass." << endl;
    }
    else if(menu == 213){
        cout << "You bought Burger,Coca-Cola and Cofee."<< endl;
        cout << "Your total amount is 3.5$."<< endl;
        cout << "Congratulations!You've got a free glass." << endl;
    }
    else if(menu == 231){
        cout << "You bought Burger,Cofee and Coca-Cola.."<< endl;
        cout << "Your total amount is 3.5$."<< endl;
        cout << "Congratulations!You've got a free glass." << endl;
    }
    else if(menu == 312){
        cout << "You bought Cofee,Coca-Cola and Burger."<< endl;
        cout << "Your total amount is 3.5$."<< endl;
        cout << "Congratulations!You've got a free glass." << endl;
    }
    else if(menu == 321){
        cout << "You bought Cofee,Burger and Coca-Cola."<< endl;
        cout << "Your total amount is 3.5$."<< endl;
        cout << "Congratulations!You've got a free glass." << endl;
    }
    else {
        cout << "I'm sorry, but we don't have any desired products." << endl;
    }
    return 0;
}
    
                                                            // MENU  by Bojan Jovanovic
