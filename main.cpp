#include <iostream>

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
    cout << "Введите длинну массива: " << endl;
    int len;
    cin >> len;
    int array[len];

    for (int i = 0; i < len; i++)
    {
        int n;
        cin >> n;
        array[i] = n;

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
                        if( checkMath(array[a], array[b], array[c]) )
                        {

                            cout << "подходят: а:" << array[a] << " b: "<< array[b] << " c: " << array[c] << endl;

                        }
                    }
                }
            }
        }
    }

    return 0;
}