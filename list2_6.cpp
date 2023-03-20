#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int STD_BMI = 22; // 標準BMI
    double height; // 身長
    double weight; // 体重
    double bmi; // BMI
    double stdWeight; // 標準体重

    // キー入力をheightに格納する
    cout << "身長(cm)を入力してください: ";
    cin >> height;

    // キー入力をweightに格納する
    cout << "体重を入力してください";
    cin >> weight;

    // 身長をcm単位からm単位に変換する
    height /= 100;

    // 身長と体重からBMIを計算する
    bmi = weight / height / height;

    // 標準体重を計算する(constとdoubleの計算)
    stdWeight = STD_BMI * height * height;

    // BMIを画面に表示する
    cout << "あなたの体重は、" << fixed << setprecision(1) << bmi << "です。" << endl;

    // 標準体重を画面に表示する
    cout << "あなたの標準体重は、" << stdWeight << "Kgです。" << endl;

    // 肥満かどうかを判定した結果を表示する
    if (bmi >= 18.5) {
        cout << "肥満" << endl;
    }
    else if (bmi < 25.0) {
        cout << "肥満ではない" << endl;
    }
    else if (bmi < 30.0) {
        cout << "肥満度1" << endl;
    }
    else if (bmi < 35.0) {
        cout << "肥満度2" << endl;
    }
    else if(bmi < 40.0) {
        cout << "肥満度3" << endl;
    }
    else {
        cout << "肥満度4" << endl;
    }

    return 0;
}
