// Cmpe225_SecondMidterm_Study.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


//basic template:

template<typename T>
void myPrinter(T hello)
{
    cout << hello << endl;
    
}


//Class template:

template <class T, class Y>
class Fahrettin {
private:
    T firstValue;
    Y SecondValue;

public:

    Fahrettin(T firstValue, Y SecondValue){
        this->firstValue = firstValue;
        this->SecondValue = SecondValue;

        //auto is taking veriable from the calculation

        auto Sum = firstValue + SecondValue;
    cout << "I calculate "<< firstValue <<" + "<< SecondValue << " and the sum of " << Sum << endl;
    }
};

// inherit class template:

class People
{
public:
    People()
    {
        //Identify();
    }

    ~People()
    {
    }
    virtual void Identify()
    {
        cout << "I am a human" << endl;
    }


private:

};

class Women:public People{
public:
    Women()
    {
        Identify();
    }

    ~Women()
    {
    }
     void Identify()
    {
        cout << "I am a Women" << endl;
    }
};

class Men :public People {

public:
    Men()
    {
        Identify();
    }

    ~Men()
    {
    }

     void Identify()
    {
        cout << "I am a Man" << endl;
    }

    };




int main()
{
    cout << "Hello World!" << endl << endl;
    cout << "I am working on basic type template: " << endl;
    myPrinter("hello");
    myPrinter(6.77);


    //writing line:
    for (int i = 0; i < 60; i++)
    {
        cout << "-";
    }
    cout << endl << endl;
    cout << "I use class for calculating: " << endl;
    Fahrettin <double, double> calculator1(5.9, 4.3);
    Fahrettin <int, double> calculator2(5, 6.4);
    Fahrettin <string, string> calculator3("Fahrettin", " Basturk");

    cout << endl << "I am working on virtual functions on classes: " << endl;
    
    People People1();
    Men Men1();
    Women Women1();

    // Dynamic:


    Men* DynamicValueMen;
    DynamicValueMen = new Men();

    Women *DynamicValueWomen = new Women();

    People* DynamicValuePeople = new People();
    //I have to write there, because in function, it will read a lot.
    DynamicValuePeople->Identify();

    People* This_Is_Possible = new Women();


    cout << endl;
    system("PAUSE");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
