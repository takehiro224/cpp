#include <iostream>
#include "chapter4.h"
using namespace std;

int main() {
    double height, weight, bmi;

    cout << "身長(cm)を入力してください:";
    cin >> height;

    cout << "体重を入力してください:";
    cin >> weight;

    bmi = getBmi(height, weight);

    cout << "あなたのBMIは、" << bmi << "です。" << endl;

    return 0;
}