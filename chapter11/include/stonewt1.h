#ifndef STONEWT1_H_
#define STONEWT1_H_

class Stonewt {
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt();
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    ~Stonewt();

    void show_lbs() const;
    void show_stn() const;

    // convertion
    operator int() const;
    // 使用explict禁止arrary[Stonewt(1.2)]这样的隐式转换
    explicit operator double() const;
};

#endif