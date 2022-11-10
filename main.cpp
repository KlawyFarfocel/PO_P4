#include <iostream>
using namespace std;

int liniowa(){
    int a,b;
    cout<<"Podaj a: ";
    cin>>a;
    if(a==0){
        cout<<"A nie moze byc 0!"<<endl;
        cin.clear();
        cout<<"Podaj a: ";
        cin>>a;
    }
    cout<<"Podaj b: ";
    cin>>b;
    int wynik;
    wynik=(-b)/a; 
    return wynik;
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
    int wynik;
    wynik=liniowa();
    cout<<"Miejsce zerowe znajduje sie w x="<<wynik<<endl;
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