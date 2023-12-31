#include<iostream>
#include<string>
#include<fstream>
#include<chrono>

using namespace std;

int main()
{
    int num, prime = 2, count = 0;
    string save, primes = "";
    bool isprime = true;
    cout << "How many primes do you want?:";
    cin >> num;
    cout << "Do you want to save to ./prime.txt?(If existing, it will be overwritten.)(Y/n):";
    cin >> save;
    std::chrono::system_clock::time_point  start, end;
    start = std::chrono::system_clock::now();
    while (count < num) {
        for (int i = 2; i < prime; i++) {
            if (prime % i == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) {
            cout << count + 1 << ":" << prime << endl;
            if (save == "y" || save == "Y") {
                primes = primes + to_string(prime) + "\n";
            }
            count++;
        }
        prime++;
        isprime = true;
    }
    end = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
    if (save == "y" || save == "Y") {
        ofstream outputfile("prime.txt");
        outputfile << primes;
        outputfile.close();
    }
    cout << "Completed!(" << to_string(elapsed) << "ms)" << endl;
    return 0;
}