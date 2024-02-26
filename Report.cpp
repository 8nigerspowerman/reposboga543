#include "Report.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int Rand(int min, int max) {
    srand(time(0));
    return (rand() % (max - min) + min);
}
void Report::reportmandc(double sum, int fo, int tr, int en, int cl) {
    if (fo != 0 or tr != 0 or en != 0 or cl != 0) {
        for (int i = 0; i < fo; i++) {
            string category = "food";
            cout << Rand(1, 7) << "." << Rand(1, 12) << "." << "2024, " << sum << " , " << category << endl;
        }
        cout << endl;
        for (int i = 0; i < en; i++) {
            string category = "entertainment";
            cout << Rand(1, 7) << "." << Rand(1, 12) << "." << "2024, " << sum << " , " << category << endl;
        }
        cout << endl;
        for (int i = 0; i < tr; i++) {
            string category = "travelling";
            cout << Rand(1, 7) << "." << Rand(1, 12) << "." << "2024, " << sum << " , " << category << endl;
        }
        cout << endl;
        for (int i = 0; i < cl; i++) {
            string category = "clothes";
            cout << Rand(1, 7) << "." << Rand(1, 12) << "." << "2024, " << sum << " , " << category << endl;
        }
        cout << endl;
    }
    else {
        cout << "Заполнений еще пока не было" << endl;
        cout << endl;
    }
}
