#include <iostream>
using namespace std;

void enterNumbers(float &a,float &b) {
    cout<<"Enter number 1: ";
    cin>>a;

    cout<<"Enter number 2: ";
    cin>>b;
    return;

}

int main() {
     
    cout<<"===============================================\nWELCOME TO C++ MINI CALCULATOR FOR TWO NUMBERS.\n===============================================\n";
    float number1;
    float number2;

    for( ; ; ) {
        int option;
        cout<<"=>SELECT THE OPERATION YOU WANT TO PERFORM<=\n";
        cout<<"1.Addition\n";
        cout<<"2.Subtraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Quotient\n";
        cout<<"5.Remainder\n";
        cout<<"6.Exit\n";

        cout<<"Enter the s.no of the operation you want to perform: ";
        cin>>option;



        

        if(option==1) {
            enterNumbers(number1,number2);
            cout<<"Sum: "<<number1+number2<<endl;

        } else if(option==2) {
            enterNumbers(number1,number2);
            cout<<"Difference: "<<number1-number2<<endl;
        } else if(option==3) {
            enterNumbers(number1,number2);
            cout<<"Product: "<<number1*number2<<endl;
        } else if(option==4) {
            enterNumbers(number1,number2);
            cout<<"Quotient: "<<number1/number2<<endl;
        } else if(option==5) {
            enterNumbers(number1,number2);
            int remainder=int(number1)%int(number2);
            cout<<"Remainder: "<<remainder<<endl;

        } else if(option==6) {
            cout<<"Thanks for visiting!\n";
            break;
        } else {
            cout<<"INVALID OPTION\nPLEASE TRY AGAIN\n";
        }


    }

    return 0;
}