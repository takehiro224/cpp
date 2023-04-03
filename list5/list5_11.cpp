#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
    const int DATA_NUM = 3;
    // HealthCheckerクラスをデータ型とした配列
    HealthChecker people[DATA_NUM] = {
        HealthChecker("山田", 170, 50.0);
        HealthChecker("佐藤", 170, 50.0);
        HealthChecker("鈴木", 170, 50.0);
    }

    for (int i = 0; i < DATA_NUM; i++) {
        // BMIを表示する
        cout << people[i].getName() << "さんのBMIは、" << people[i].getBmi() << "です" << endl;
    }
    return 0;
}