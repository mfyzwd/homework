#ifndef _STOCK_H_
#define _STOCK_H_
#include <string>

class Stock{

    private:
        char *company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() {
            total_val =shares *share_val;
        }
    public:
        Stock();
        Stock(const char *co,long n ,double pr);
        ~Stock();
        void buy(long num,double price);
        void sell(long num, double price);
        void update(double price);
        friend std::ostream &operator<<(std::ostream &os,const Stock &s);
        const Stock &topval(const Stock &s) const;
};

#endif