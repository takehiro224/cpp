#include <iostream>
#include <string>
using namespace std;
#include "chapter4.h"

int main() {
    const int DATA_NUM = 3; // 配列の要素数
    // HealthCheck構造体をデータ型とした配列
    HealthCheck people[DATA_NUM] = {
        {"山田", 170, 67.5, 0},
        {"佐藤", 160, 54.5, 0},
        {"鈴木", 180, 85.5, 0}
    };
    int i; // ループカウンタ
    // 配列の要素を順番に処理する
    for (i = 0; i < DATA_NUM; i++) {
        // BMIを求める
        people[i].bmi = getBmi(&people[i]);
        // BMIを表示する
        cout << people[i].name << "さんのBMIは、" << people[i].bmi << "です。" << endl;
    }
    return 0;
}