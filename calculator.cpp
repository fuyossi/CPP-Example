#include <iostream>
#include <string>

using namespace std;

int main()
{
    int v, v2, r;
    string o;
    cout << "�v�Z������͂��Ă��������B���Z�q�̑O��ɂ͋󔒂����Ă��������B�i��F1 + 1�j�F";
    cin >> v;
    cin >> o;
    cin >> v2;
    if (o == "+")
    {
        r = v + v2;
        cout << r << endl;
        return 0;
    }
    else if (o == "-")
    {
        r = v - v2;
        cout << r << endl;
        return 0;
    }
    else if (o == "*")
    {
        r = v * v2;
        cout << r << endl;
        return 0;
    }
    else if (o == "/")
    {
        if (v2 == 0)
        {
            cout << "�G���[�F0���Z�͂ł��܂���B" << endl;
            return 1;
        }
        else
        {
            r = v / v2;
            cout << r << endl;
            return 0;
        }
    }
    else
    {
        cout << "�G���[�F�s���ȉ��Z�q�����͂���܂����B" << endl;
        return 1;
    }
}