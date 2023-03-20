// 健康診断のデータを格納する構造体の定義
struct HealthCheck {
    string name;
    double height;
    double weight;
    double bmi;
};


// BMIを求める関数のプロトタイプ宣言
double getBmi(double height, double weight);

//二次方程式を解く関数のプロトタイプ宣言
bool quadEq(double a, double b, double c, double *px1, double *px2);

// 配列の平均値を返す関数のプロトタイプ宣言
double getAverage(const int a[], int length);