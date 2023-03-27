#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
    // HealthCheckerクラスのインスタンスを生成する
    HealthChecker yamada("山田", 170, 67.5);

    // BMIの値を表示する
    cout << "BMIは、" << yamada.getBmi() << "です。" << endl;

    return 0;
}