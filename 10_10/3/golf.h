#ifndef GOLF_H_
#define GOLF_H_


const int Len = 80;
class Golf
{
private:
    char full_name[Len];
    int handicap_;

public: 
    Golf(const char * name, int hc);
    Golf();
    void handicap(int hc);
    void showgolf();

};

#endif