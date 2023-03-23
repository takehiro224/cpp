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
    // BMIを返す
    return this->bmi;
}

// コンストラクタの実装
HealthChecker::HealthChecker(string name, double height, double weight) {
    // メンバ変数に初期値を設定する
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->bmi = 0;
}