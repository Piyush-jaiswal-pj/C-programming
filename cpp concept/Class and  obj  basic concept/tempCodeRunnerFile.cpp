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