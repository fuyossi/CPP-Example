#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cout << "文字列1を入力してください：";
    cin >> a;
    cout << "文字列2を入力してください：";
    cin >> b;
    if (a == b)
    {
        cout << "文字列1と文字列2は同じです！" << endl;
        return 0;
    }
    else
    {
        cout << "文字列1と文字列2は違います！" << endl;
        return 0;
    }
}