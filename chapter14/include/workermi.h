#ifndef WORKERMI_H_
#define WORKERMI_H_

#include <string>

class Worker
{
private:
    std::string fullname;
    long id;

protected:
    virtual void Data() const;
    virtual void Get();

public:
    Worker() : fullname("no one"), id(0L) {}
    Worker(const std::string &s, long n) : fullname(s), id(n) {}
    // 虚析构函数保证先调用子类的析构函数后再调用基类的派生函数
    virtual ~Worker() = 0;
    // 虚函数保证子类将重写该方法，纯虚函数表示该类为纯虚类，不能实例化，只能用于继承，可以定义结构体
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Waiter : public virtual Worker
{
private:
    int panache;

protected:
    void Data() const;
    void Get();

public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string &s, long n, int p = 0) : Worker(s, n), panache(p) {}
    Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}
    void Set();
    void Show() const;
};

class Singer : public virtual Worker
{
protected:
    enum
    {
        other,
        alto,
        contralto,
        soprano,
        bass,
        bariton,
        tenor
    };
    enum
    {
        Vtypes = 7
    };

    void Data() const;
    void Get();

private:
    static char *pv[Vtypes];
    int voice;

public:
    Singer() : Worker(), voice(other) {}
    Singer(const std::string &s, long n, int v = other) : Worker(s, n), voice(v) {}
    Singer(const Worker &wk, int v = other) : Worker(wk), voice(v) {}

    void Set();
    void Show() const;
};

class SingingWaiter : public Singer, public Waiter
{
protected:
    void Data() const;
    void Get();

public:
    SingingWaiter() {}
    SingingWaiter(
        const std::string &s,
        long n, int p = 0, int v = other) : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
    SingingWaiter(
        const Worker &wk,
        int p = 0, int v = other) : Worker(wk), Waiter(wk, p), Singer(wk, v) {}
    SingingWaiter(
        const Waiter &wt,
        int v = other) : Worker(wt), Waiter(wt), Singer(wt, v) {}
    SingingWaiter(
        const Singer &wt,
        int p = 0) : Worker(wt), Waiter(wt, p), Singer(wt) {}

    void Set();
    void Show() const;
};

#endif