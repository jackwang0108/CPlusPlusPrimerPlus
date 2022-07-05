#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class HasFriend
{
private:
    T item;
    static int ct;

public:
    HasFriend(const T &i) : item(i) { ct++; }
    ~HasFriend() { ct--; }

    // 友元函数不是类的成员函数，是类的朋友函数
    // 因此友元函数就会和模板类的模板有关系

    // 第一种：友元函数与模板类的模板无关，例如count，因此对于所有实例化的类，都共享同一个友元函数count
    friend void counts();
    // 第二种：友元函数与模板类的模板有关，例如reports，这个时候需要针对每一个实例化的类分别定义友元函数，或者直接声明友元函数也是一个模板函数
    friend void reports(HasFriend<T> &);
};

template <typename T>
int HasFriend<T>::ct = 0;

void counts()
{
    cout << "int count: " << HasFriend<int>::ct << "; ";
    cout << "double count: " << HasFriend<double>::ct << endl;
}

void reports(HasFriend<int> &hf)
{
    cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double> &hf)
{
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main(void)
{

    cout << "No objects declared: ";
    counts();

    HasFriend<int> hfi1(10);
    cout << "After hfi1 declared: ";
    counts();

    HasFriend<int> hfi2(20);
    cout << "After hfi2 declared: ";
    counts();

    HasFriend<double> hfdb(10.5);
    cout << "After hfdb declared: ";
    counts();

    reports(hfi1);
    reports(hfi2);
    reports(hfdb);

    return 0;
}
