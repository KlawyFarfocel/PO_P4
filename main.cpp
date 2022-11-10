#include <iostream>
using namespace std;

void liniowa(){
    int a,b;
    cout<<"Podaj a: ";
    cin>>a;

    cout<<"Podaj b: ";
    cin>>b;
    int wynik;
    if(a==0){
        if(b==0){
            cout<<"Jest nieskonczenie wiele miejsc zerowych"<<endl;
            return;
        }
         cout<<"Nie ma miejsc zerowych"<<endl;
         return;
    }
    wynik=(-b)/a; 
    cout<<"Miejsce zerowe znajduje sie w x="<<wynik<<endl;
    return;
}

void menu(){
    system("cls");
    cout<<"Sieam, tu menu"<<endl;
    cout<<"---------------------1.Funkcja linowa---------------------"<<endl;
    cout<<"---------------------0.Wyjscie---------------------"<<endl;
    cout<<"Wybierz opcje:";

    int wybor;
    cin>>wybor;
    cout<<endl;
    switch (wybor)
    {
    case 1:
    liniowa();
    system("pause");
    menu();
        break;
    
    default:
        break;
    }
}

int main()
{
    menu();
}