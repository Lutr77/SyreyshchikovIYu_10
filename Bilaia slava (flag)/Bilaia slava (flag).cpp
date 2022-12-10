#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for (int i = 0; i < 13; ++i)
    {
        if (i < 8)
        {
            for (int j = 0; j < 6; ++j)
            {
                cout << "  *";
            }
            cout.width(60);
            cout << setw(60) << setfill('_'); // выделяем место в 60 символов и заполняем их "_"
            cout << '\n';
        }
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << setw(78) << setfill('_') << '\n'; // setw задает ширину строки поля
    }

    //////// Делаем изменения 
}