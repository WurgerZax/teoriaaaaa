#include <iostream>
#include <string>
using namespace std;

struct info 
{
    string name;
    string location;
    double timeA;
    double timeB;
    double distance;
};

int main()
{
    //Средний уровень, вариант 15: Вывести данные о поездах, пребывающих в пути более суток.
    const int N = 2;
    info train[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter a name of train" << endl;
        cin >> train[i].name;
        cout << "Enter a location" << endl;
        cin >> train[i].location;
        cout << "Enter point A" << endl;
        cin >> train[i].timeA;
        cout << "Enter point B" << endl;
        cin >> train[i].timeB;
        double question = train[i].timeB;
        cout << "In the same day?(1=Yes/0=No)" << endl;
        cin >> question;
        
        cout << "Enter a distance" << endl;
        cin >> train[i].distance;
        if (question == 0)
        {
            if (train[i].timeB - train[i].timeA >= 0) { cout << "This train "<<train[i].name<<" moving => 24 hours to "<<train[i].location <<" for "<< train[i].distance <<" km"<< endl; }
        }
    }
    return 0;
}