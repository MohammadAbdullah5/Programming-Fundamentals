#include <iostream>
using namespace std;

main()
{
    int cars[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << cars[j][i] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum = sum + cars[i][0];
    }
    cout << "Red Cars: " << sum << endl;
    int totalCars = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            totalCars = totalCars + cars[i][j];
        }
    }
    cout << "Total: " << totalCars;
    
}