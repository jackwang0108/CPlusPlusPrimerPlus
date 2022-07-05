#include <iostream>

using std::cout;
using std::endl;


// 模板类和模板友元函数的第三种关系就是：
//              模板类的模板和友元函数的模板相同或者不相同，或者说，关系是不确定的，具体取决于代码怎么实现

template <typename T>
class ManyFriend{
private:
    T item;

public:
    ManyFriend(const T &i) : item(i) {}

    // 模板T 和 模板C，模板D 的关系不定，可以相同也可以不相同，具体取决于实现
    template <typename C, typename D>
    friend void show2(C &, D &);
};

template <typename C, typename D>
void show2(C &c, D &d){
    // 下面这样实现表示 模板C 和 模板D 实例化后必须有.item属性，因为是友元，所以私有，公有或者保护都行
    cout << c.item << ", " << d.item << endl;
}

int main(){
    ManyFriend<int> hfi1(10);
    ManyFriend<int> hfi2(10);
    ManyFriend<double> hfdb(10.5);

    cout << "hfi1, hfi2: ";
    show2(hfi1, hfi2);

    cout << "hfdb, hfi2: ";
    show2(hfdb, hfi2);

    return 0;
}