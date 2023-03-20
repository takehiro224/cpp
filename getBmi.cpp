double getBmi(double height, double weight) {
    double bmi; // BMIの計算結果を入れる
    
    // cm単位をm単位にする
    height /= 100;

    // BMIを計算する
    bmi = weight / height / height;

    // 戻り値としてBMIを返す
    return bmi;
}