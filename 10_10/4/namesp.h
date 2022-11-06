#ifndef NAMESP_H_
#define NAMESP_H_
namespace SALES
{
    const int QUARTERS = 4;

    class Sales
    {
    private:
        double sales_[QUARTERS];
        double average_;
        double max_;
        double min_;
    public:
        void setSales(const double ar[], int n);
        void setSales();
        void showSales();

    };
 
    
}
#endif