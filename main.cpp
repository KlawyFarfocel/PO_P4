#include <iostream>
using namespace std;

void liniowa(){
    float a,b;
    cout<<"Podaj a: ";
    cin>>a;

    cout<<"Podaj b: ";
    cin>>b;
    float wynik;
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
void kanoniczna(){
    float a,b,c;
    cout<<"Podaj a: ";
    cin>>a;

    cout<<"Podaj b: ";
    cin>>b;

    cout<<"Podaj c: ";
    cin>>c;

    if(a==0){
        if(c==0){
            cout<<"Jest nieskonczenie wiele miejsc zerowych"<<endl;
            return;
        }
        cout<<"Nie ma miejsc zerowych"<<endl;
        return;
    }
   else if (b==0 && c==0){
        cout<<"Jest nieskonczenie wiele miejsc zerowych"<<endl;
        return;
    }
    float nA,nC; //nowe a, nowe b, nowe c
    nA=(-a/b);
    nC=(-c/b);
    float wynik=-nC/nA;
    cout<<"Miejsce zerowe znajduje sie w x="<<wynik<<endl;
}
void menu(){
    system("cls");
    cout<<"Sieam, tu menu"<<endl;
    cout<<"---------------------1.Funkcja linowa---------------------"<<endl;
    cout<<"---------------------2.Funkcja linowa, ale kanoniczna---------------------"<<endl;
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
    case 2:
        kanoniczna();
        system("pause");
    break;
    default:
        break;
    }
}

int main()
{
    menu();
}