#include <vector>
using namespace std;


class card{
private:
    vector<int> number;
    int validity_month;
    int validity_year;
    double current_balance;
    string owner_surname;
    string owner_name;

protected:
    void set_balance(double balance);
    double get_balance();
};

class card_reader{

};

#ifndef PPVIS_3_CLASSES_H
#define PPVIS_3_CLASSES_H

#endif //PPVIS_3_CLASSES_H
