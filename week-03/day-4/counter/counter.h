#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class counter
{
public:
    counter();
    counter(int);

    void add();
    void add(int);
    int get() const;
    void reset();

private:
int _value;

};

#endif //COUNTER_COUNTER_H
