#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
    char name_[20];
    int CI_;

public:
    Plorg(const char* name="Ploga",int CI=50);
    void setCI(int CI);
    void show();
    void setname(const char * name);

};
#endif
