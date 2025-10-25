#include <iostream>
#include <cmath>
using namespace std;

unsigned int n; //кол-во переменных
int x; //переменная для числа
int sum; //сумма отрицательных чисел
int max_x = 0; //для подсчета максимального числа
int cnt = 0; //счетчик

short y; //число
unsigned short dig; //цифра
unsigned short max_dig; //максимальная цифра

int main(){
    // 1
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x < 0) {
            sum += x;
            if((x > max_x) or (max_x = 0)) {
                cnt = 0;
                max_x = x;
            } else if(max_x = x){
                cnt += 1;
            };
        }
    }

    if(max_x != 0){
        cout << sum << endl;
        cout << max_x << endl;
        cout << cnt << endl;
    } else {
        cout << "В последовательности не встретились отрицательные числа";
    }
    cout << '\n';

    // 2

    cin >> y;
    y = abs(y);

    while(y!=0){
        dig = y % 10;
        y /= 10;
        if(dig>max_dig) max_dig = dig;
    }

    cout << max_dig << endl;

    return 0;
}

