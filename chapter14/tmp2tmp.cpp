#include <iostream>

using std::cout;
using std::endl;

// 第二种关系：友元函数与模板类的模板有关，
//           此时要么针对每一个实例化的类来定义友元函数，
//           要么声明友元函数为模板函数（保证友元函数的模板和模板类的模板相同）

// 声明友元函数为模板函数（保证友元函数的模板和模板类的模板相同）
template <typename T>
void counts();
template <typename T>
void reports(T &);

template <typename TT>
class HasFriendT
{
private:
    TT item;
    static int ct;

public:
    HasFriendT(const TT &i) : item(i) { ct++; }
    ~HasFriendT() { ct--; }

    // 友元函数不是类的成员函数，是类的朋友函数
    // 因此友元函数就会和模板类的模板有关系

    // 第二种：友元函数与模板类的模板有关，直接声明友元函数也是一个模板函数，
    //        然后保证模板相同
    friend void counts<TT>();
    friend void reports<HasFriendT<TT>>(HasFriendT<TT> &);

    // 也可以下面这样留空，因为可以根据前面声明的函数头来推断出来模板的类型为HasFriendT<TT>
    // friend void reports<>(HasFriendT<TT> &);
};

template <typename T>
int HasFriendT<T>::ct = 0;

template <typename T>
void counts()
{
    cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
    cout << "template counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void reports(T &hf)
{
    cout << hf.item << endl;
}


int main(void)
{
    counts<int>();

    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);

    reports(hfi1);
    reports(hfi2);
    reports(hfdb);

    cout << "counts<int>() output:\n";
    counts<int>();

    cout << "counts<double>() output:\n";
    counts<double>();

    return 0;
}
