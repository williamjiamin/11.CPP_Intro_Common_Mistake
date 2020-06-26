//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

//    一定要注意：在做判断的时候不要使用浮点型这类近似的数据类型，尽量使用int，因为浮点并不是你看到的那样

    float value = 1.8;

    cout << fixed << setprecision(20) << value << endl;

    if (value == 1.8) {
        cout << "1.8,fafafa" << endl;
    } else {
        cout << "not 1.8" << endl;
    }

    return 0;
}
