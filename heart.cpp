#include<iostream>
using namespace std;

const char *colors[] = {"\e[31m", "\e[32m", "\e[33m", "\e[34m", "\e[35m", "\e[36m", "\e[37m"};

int main()
{
    float x, y, a;
    for (y = 1.5; y > -1.5; y -= 0.1)
    {
        for (x = -1.5; x < 1.5; x += 0.05)
        {
            a = x * x + y * y - 1;
            cout.put(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
        }
        cout << colors[time(0)%7] << endl;
    }
    return 0;
}

