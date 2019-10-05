#include <iostream>
#include <vector>

using namespace std;

bool checkMath(int a, int b, int c)
{
    double D_sqr = (b^2) - 4 * a * c;
    if (D_sqr >= 0)
    {
        return true;
    } else {
        return false;
    }
}

int main()
{

    int len = 0;

    vector<int> vect;

    string entered_value;

    cout << "Введите числа. Для выхода из ввода напишите ''exit'' " << endl;

    while ( entered_value != "exit")
    {
        cin >> entered_value;
        int num = atoi(entered_value.c_str());
        if ( (entered_value == "0") || (num != 0) )
        {
            vect.push_back( num );
            len++;
        }
    }

    for (int a = 0; a < len; a++)
    {
        for (int b = 0; b < len; b++)
        {
            if (a==b)
            {
                if (b+1 < len) {
                    b++;
                } else { break; }
            }
            else
            {
                for (int c = 0; c < len; c ++)
                {
                    if ((a==c)||(b==c))
                    {
                        if ( c+1 < len) {
                            c++;
                        } else { break; }
                    }
                    else
                    {
                        if( checkMath(vect[a], vect[b], vect[c]) )
                        {

                            cout << "подходят: а:" << vect[a] << " b: "<< vect[b] << " c: " << vect[c] << endl;

                        }
                    }
                }
            }
        }
    }

    return 0;
}