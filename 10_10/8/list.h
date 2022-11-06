#ifndef LIST_H_
#define lIST_H_


typedef int Item;
class List{

private:

    enum {MAX=10};
    Item items[MAX];
    int top;

public:
    List();
    bool isempty() const;
    bool isfull() const;
    bool add(const Item & item);
    void show();
};

#endif