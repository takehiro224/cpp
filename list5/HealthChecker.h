class HealthChecker {
    private:
        string name; // 氏名を格納するメンバ変数
        double height; // 身長を格納するメンバ変数
        double weight; // 体重を格納するメンバ変数
        double bmi; // BMIを格納するメンバ変数
    public
        double getBmi(); // BMIを返すメンバ変数
        HealthChecker(string name, double height, double weight); // コンストラクタ
};