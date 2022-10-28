#include <iostream>
#include <unistd.h>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[])
{
    if(argc == 1) {
        cout << "Справочный материал." << endl <<
"Для вычисления натурального логарифма напишите: -o lnx n, где n - подлогарифмическое выражение, которое вы хотите ввести." <<  endl <<
"Для вычисления логарифма по определённому основанию напишите: -o logx n m, где n - подлогарифмическое выражение, m - основание логарифма" << endl;
        exit(0);
    }
    int opt;
    while((opt = getopt(argc, argv, "o:")) != -1) {
        string point = optarg;
        if (point == "lnx") {
            cout << "Показатель степени: " << log(atoi(argv[3])) << endl;
            exit(0);
        }
        if (point == "logx") {
            cout << "Показатель степени: " << log(atoi(argv[3]))/log(atoi(argv[4])) << endl;
            exit(0);
        }
    }
    return 0;
}