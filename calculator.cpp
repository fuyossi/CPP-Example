#include <iostream>
#include <string>

using namespace std;

int main()
{
    int v, v2, r;
    string o;
    cout << "計算式を入力してください。演算子の前後には空白を入れてください。（例：1 + 1）：";
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
            cout << "エラー：0除算はできません。" << endl;
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
        cout << "エラー：不明な演算子が入力されました。" << endl;
        return 1;
    }
}