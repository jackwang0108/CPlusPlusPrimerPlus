#ifndef ACCTABC_H_
#define ACCTABC_H_

#include <iostream>
#include <string>

class AcctABC
{
private:
    std::string fullName;
    long acctNum;
    double balance;

protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string &FullName() const { return fullName; }
    long AcctNum() const { return acctNum; }
    Formatting SetFromat() const;
    void Restore(Formatting &f) const;

public:
    AcctABC(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);
    // 虚析构函数将会保证多态下首先调用子类的析构函数然后再调用基类的析构函数
    virtual ~AcctABC() {}
    void Deposit(double amt);
    // 纯虚函数，虚函数保证派生类将会重写该方法，纯虚表示该类只将用于被继承
    virtual void Withdraw(double amt) = 0;
    double Balance() const { return balance; };
    virtual void ViewAcct() const = 0;
};

class Brass : public AcctABC
{
public:
    Brass(
        const std::string &s = "Nullbody",
        long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}
    virtual ~Brass() {}
    // 子类中必有有函数头一模一样的虚函数，然后再重载
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
};

class BrassPlus : public AcctABC
{
private:
    double maxLoan;
    double rate;
    double owesBank;

public:
    BrassPlus(
        const std::string &s = "Nullbody",
        long an = -1, double bal = 0.0,
        double m1 = 500, double r = 0.10);
    BrassPlus(const Brass &ba, double m1 = 500, double r = 0.10);
    virtual ~BrassPlus() {}
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r) { rate = r; }
    void ReserOwes() { owesBank = 0; }
};

#endif