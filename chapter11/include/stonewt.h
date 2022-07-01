#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt();
    // 默认可以隐式转换
    // Stone test = 19.6将会根据后面的值的数据类型调用对应的构造函数
    Stonewt(double lbs);
    // 禁止隐式转换
    explicit Stonewt(int stn, double lbs);
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};

#endif