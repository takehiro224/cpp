#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double height;
    double weight;
    double bmi;

    cout << "身長(cm)を入力してください: ";
    cin >> height;

    cout << "体重を入力してください";
    cin >> weight;

    height /= 100;

    bmi = weight / height / height;

    cout << "あなたの体重は、" << fixed << setprecision(1) << bmi << "です。" << endl;
}
