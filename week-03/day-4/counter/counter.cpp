#include "counter.h"

int initialValue;

counter::counter()
{
    _value = 0;
}

counter::counter(int initValue)
{
    _value = initValue;
    initialValue=initValue;
}

void counter::add() {
    _value++;
}

void counter::add(int number){
    _value +=number;
}

void counter::reset(){
    _value = initialValue;

}

int counter::get() const
{
    return _value;
}



//int _value = 0;