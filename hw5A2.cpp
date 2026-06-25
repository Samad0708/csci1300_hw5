#include <iostream>
using namespace std;

int daysToFund(int startBalance, int dailyDeposit)
{
    int days = 0;

    while (startBalance < 42500)
    {
        startBalance += dailyDeposit;
        days++;

        cout << "Day " << days << ": deposited "
             << dailyDeposit << ", balance now "
             << startBalance << endl;
    }

    return days;
}

int main()
{
    int startBalance, dailyDeposit;

    cout << "Enter the starting Vault balance: ";
    cin >> startBalance;

    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;

    cout << "--- Vault Savings Plan ---" << endl;

    int days = daysToFund(startBalance, dailyDeposit);

    cout << "The Vault was funded in " << days << " days!";

    return 0;
}