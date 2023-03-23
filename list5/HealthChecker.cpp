#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

// BMIを返すメンバ関数の実装
double HealthChecker::getBmi() {
    // まだBMIが計算されていなかったら計算する
    if (this->bmi == 0) {
        double mHeight = this->height / 100;
        this->bmi = this->weight / mHeight / mHeight;
    }
}

// コンストラクタの実装
HealthChecker::HealthChecker(string name, double height, double weight) {

}