#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
    // HealthCheckerクラスのインスタンスを生成する
    HealthChecker yamada("山田", 170, 67.5);

    // (privateのnameは参照できないのでエラー)BMIの値を表示する
    cout << yamada.name << "さんのBMIは" << yamada.getBmi() << "です。" << endl;

    return 0;
}