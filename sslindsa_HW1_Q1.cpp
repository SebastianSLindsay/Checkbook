#include <iostream>
#include <string>
using namespace std;

const int N = 5;

class CheckBook{
    public:

    struct Check{
        int checkNum;
        string checkMemo;
        float checkAmount;

};
    Check checks[N] = {};
    void deposit();
    void displayChecks();
    bool writeCheck(float amount);

    private:
    float balance;
    float lastDeposit;
    int numOfChecks;
    int checkLimit = N;

};

int main()
{
    CheckBook check_obj;
    check_obj.deposit();
    check_obj.displayChecks();


}

void CheckBook::deposit()
{
    int n;
    for (n=0; n < checkLimit; n++) { //for loop populates array with memos and deposits
    cout << "Please enter a check memo for check #" << (n+1);
    cout << ": ";
    cin  >> checks[n].checkMemo;
    cout << "Please enter a balance for check #" << (n+1);
    cout << ": ";
    cin >> checks[n].checkAmount;
    cout << endl;

    system("pause");
    lastDeposit==checks[n].checkAmount; //n should be the position in the array but seems to be returning 0
    //balance+=lastDeposit;
    }
    //lastDeposit=checks[n].checkAmount;
    balance+=lastDeposit;
    //cout << lastDeposit; was using this to check the math but it returns 0 for some reason




}

void CheckBook::displayChecks()
{
    int n;
    cout << "Here are your checks: " << endl;
    for (n=0 ; n<checkLimit; n++)//for loop displays contents of check array starting at position 0
    {

    cout << "Check #" << (n+1) << ": " << checks[n].checkMemo << endl;
    cout << checks [n].checkAmount << endl;



    };



}
bool CheckBook::writeCheck(float amount)
{




}

