#include <iostream>
using namespace std;

class Bank
{
public:
    char Bank_Name;
    char Bank_Address;
    int Bank_Code;

    int Details_of_bank()

    {
        cout << "The Details of the BANK is : \n";
        cout << Bank_Name << endl;
        cout << Bank_Address << endl;
        return Bank_Code;
    }
};

class Bank_Account
{
public:
    int Account_Number;
    char Account_Holder;
    float Account_Balance;

    int Details_of_bank_account()
    {
        cout << "The Details of the BANK ACCOUNT is : \n";
        cout<<Account_Number ;
        cout << "\n"<<Account_Holder << endl;
        return Account_Balance ;
    }
};
//if u want to make this as header file than save the file with .h and dont use the main function and access the header
//file with creating a var....
int main()
{
    int choice;
    cout << "Choose The Following Which U Want To The Details Of \n";
    cout << "Press key 1 for Details of the BANK \n";
    cout << "Press key 1 for Details of the BANK ACCOUNT\n";

    cin >> choice;
    switch (choice)
    {
    case 1:
        Bank detail;
        cin >> detail.Bank_Name;
        cin >> detail.Bank_Address;
        cin >> detail.Bank_Code;
        cout << detail.Details_of_bank() << endl;
        break;

    case 2:
        Bank_Account Bank_Account_Details;
        cin >> Bank_Account_Details.Account_Number;
        cin >> Bank_Account_Details.Account_Holder;
        cin >> Bank_Account_Details.Account_Balance;
        cout << Bank_Account_Details.Details_of_bank_account() << endl;
        break;
    default:
        cout << "INVALID CHOICE\n";
        break;
    }
}