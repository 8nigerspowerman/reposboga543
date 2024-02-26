#include <iostream>
#include "Wallet.h"
#include "Report.h"
#include "Transaction.h"
#include <time.h>
#include <string>

using namespace std;

int main()
{
    int ans;
    Wallet a;
    Transaction b;
    Report d;
    string date;
    double f1, f2;
    int answ;
    int answe;
    double cost = 0, totalcost = 0;
    setlocale(LC_ALL, "rus");
    bool v = true;
    while (v) {
        int  fo = 0, en = 0, tr = 0, cl = 0;
        cout << "Здравствуйте, выберете кошелек, который хотите пополнить (кредитная карта:1 / дебетовая карта:2) \nЕсли хотите снять деньги, то впишите (кредитная карта:3 / дебетовая карта:4) \nЕсли вы хотите воспроизвести оплату, напишите 5 \n6-чтобы опказать отчеты(дата отчетов будет каждый раз разниться, так как одно новое начало = новое начало вашей карты) \n0-чтобы выйти)" << endl;
        cin >> ans;
        switch (ans)
        {
        case 0:
            v = false;
            break;
        case 1:
            cout << "Введите пополняемую сумму на кредитную карту" << endl;
            cin >> f1;
            a.creditcardreplenishment(f1);
            cout << endl;
            break;
        case 2:
            cout << "Введите пополняемую сумму на дебетовую карту карту" << endl;
            cin >> f2;
            a.debitcardreplenishment(f2);
            cout << endl;
            break;
        case 3:
            cout << "Введите списываемую сумму кредитной карты" << endl;
            cin >> f1;
            a.creditcarddebiting(f1);
            cout << endl;
            break;
        case 4:
            cout << "Введите списываемую сумму на дебетовую карту карту" << endl;
            cin >> f2;
            a.debitcarddebiting(f2);
            cout << endl;
            break;
        case 5:
            if (a.creditbalance != 0 or a.debitbalance != 0) {
                cout << "Выберите карту кошелек карту, которую хотите использовать(кредитная карты:1/дебетовая карта:2)" << endl;
                cin >> answ;
                if (answ == 1) {
                    cout << "Что вы хотите купить(оплатить еду:1/оплатить развлечение:2/опалтить поезду:3/оплатить покупку одежды:4)" << endl;
                    cin >> answe;
                    switch (answe)
                    {
                    case 1:
                        fo += 1;
                        totalcost += cost;
                        cout << "Введите сумму" << endl;
                        cin >> cost;
                        b.cfoodtransaction(cost);
                        cout << endl;
                        break;
                    case 2:
                        en += 1;
                        totalcost += cost;
                        cout << "Введите сумму" << endl;
                        cin >> cost;
                        b.centertaintmenttransaction(cost);
                        cout << endl;
                        break;
                    case 3:
                        tr += 1;
                        totalcost += cost;
                        cout << "Введите сумму" << endl;
                        cin >> cost;
                        b.ctravellingtransaction(cost);
                        cout << endl;
                        break;
                    case 4:
                        cl += 1;
                        totalcost += cost;
                        cout << "Введите сумму" << endl;
                        cin >> cost;
                        b.cbuyingclothestransaction(cost);
                        cout << endl;
                        break;
                    default:
                        break;
                    }
                }
                else if (answ == 2) {
                    cout << "Что вы хотите купить(оплатить еду:1/оплатить развлечение:2/опалтить поезду:3/оплатить покупку одежды:4)" << endl;
                    cin >> answe;
                    switch (answe)
                    {
                    case 1:
                        fo += 1;
                        totalcost += cost;
                        cout << "Введите сумму" << endl;
                        cin >> cost;
                        b.dfoodtransaction(cost);
                        cout << endl;
                        break;
                    case 2:
                        en += 1;
                        totalcost += cost;
                        cout << "Введите сумму" << endl;
                        cin >> cost;
                        b.dentertaintmenttransaction(cost);
                        cout << endl;
                        break;
                    case 3:
                        tr += 1;
                        totalcost += cost;
                        cout << "Введите сумму" << endl;
                        cin >> cost;
                        b.dtravellingtransaction(cost);
                        cout << endl;
                        break;
                    case 4:
                        cl += 1;
                        totalcost += cost;
                        cout << "Введите сумму" << endl;
                        cin >> cost;
                        b.dbuyingclothestransaction(cost);
                        cout << endl;
                        break;
                    default:
                        break;
                    }
                }
                else {
                    cout << "error " << endl;
                    cout << endl;
                    break;
                }
        case  6:
            d.reportmandc(totalcost, fo, tr, en, cl);
            cout << endl;
            break;
        default:
            cout << "error" << endl;
            cout << endl;
            break;
            }
            else {
                cout << "Ваши балансы кредитной и дебетовой карты пусты. Пополните хоть один, чтобы вопсроизвести оплату" << endl;
                cout << endl;
                break;
            }
        }
    }
}