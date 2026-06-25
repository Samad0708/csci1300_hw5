#include <iostream>
using namespace std;

int totalGold(int donations[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += donations[i];
    }

    return total;
}

int main()
{
    int donations[100];
    int size;

    cout << "Enter the number of gold donations: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> donations[i];
    }

    int total = totalGold(donations, size);

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: 42500" << endl;

    if (total >= 42500)
    {
        cout << "The Vault is fully funded! Surplus: " << total - 42500 << " gold";
    }
    else
    {
        cout << "The Vault still needs " << 42500 - total << " more gold.";
    }

    return 0;
}