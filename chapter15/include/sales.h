#include <stdexcept>
#include <string>

class Sales
{
public:
    enum
    {
        MONTH = 12
    };

    class bad_index : public std::logic_error
    {
    private:
        int bi;

    public:
        explicit bad_index(int ix, const std::string &s = "Index error in Sales object\n");
        int bi_val() const { return bi; }
        virtual ~bad_index() throw() {}
        // throw() 等价于 noexcept
        // virtual ~bad_index() noexcept {}
    };

public:
    explicit Sales(int yy = 0);
    Sales(int yy, const double *gr, int n);
    virtual ~Sales() {}

public:
    int Year() const { return year; }
    virtual double operator[](int i) const;
    virtual double &operator[](int i);

private:
    double gross[MONTH];
    int year;
};

class LabeledSales : public Sales
{
private:
    std::string label;

public:
    class nbad_index : public Sales::bad_index
    {
    private:
        std::string lb1;

    public:
        nbad_index(const std::string &b, int ix, const std::string &s = "Index error in LabeledSales object\n");
        const std::string &label_vaL() const { return lb1; }
        virtual ~nbad_index() {}
    };

public:
    LabeledSales(const std::string &lb, int yy, const double *gr, int n);
    explicit LabeledSales(const std::string &lb = "none", int yy = 0);

    const std::string &Label() const { return label; }
    virtual double operator[](int i) const;
    virtual double &operator[](int i);
};