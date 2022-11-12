#include <iostream>
#include <math.h>
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
void kwadratowa(){
    float a,b,c;
    cout<<"Podaj a: ";
    cin>>a;
    if(a==0){
        cout<<"To funkcja liniowa! Przechodze do obliczania funkcji linowej"<<endl;
        liniowa();
    }
    cout<<"Podaj b: ";
    cin>>b;

    cout<<"Podaj c: ";
    cin>>c;

    float delta=(b*b)-(4*(a*c));
    if(delta<0){
        cout<<"Nie ma miejsc zerowych!";
        return;
    }
    else if(delta==0){
        cout<<"Jest jedno miejsce zerowe w x="<<-b/(2*a)<<endl;
    }
    else{
        cout<<"Sa dwa miejsca zerowe miejsce zerowe w x="<<(-b+(pow(delta,1/2)))/(2*a)<<" oraz w x="<<(-b-(pow(delta,1/2)))/(2*a);
    }
}
void kwadratowa_kanoniczna(){

}
void menu(){
    system("cls");
    cout<<"Sieam, tu menu"<<endl;
    cout<<"---------------------1.Funkcja linowa---------------------"<<endl;
    cout<<"---------------------2.Funkcja linowa, ale kanoniczna---------------------"<<endl;
    cout<<"---------------------3.Funkcja kwadratowa---------------------"<<endl;
    cout<<"---------------------4.Funkcja kwadratowa kanoniczna---------------------"<<endl;
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
    case 3:
        kwadratowa();
    break;
    case 4:
        kwadratowa_kanoniczna();
    break;
    default:
        break;
    }
}

int main()
{
    menu();
}