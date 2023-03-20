// iostreamはヘッダファイル
// iostream: 「キーボード入力」や「画面出力」などの機能
#include <iostream> 
// stdというnamespaceを使うという意味
// この記述がないとcoutとendlが何であるか解釈できずにエラーとなる
using namespace std;

int main() {
    // cout: console output(端末への出力)画面出力
    // endl: endo of line(行の終わり)改行
    cout << "Hello World." << endl;
    // useing namespace stdを使わない場合以下のように記載する
    // std::count << "Hello World" << std::endl;

    return 0;
}