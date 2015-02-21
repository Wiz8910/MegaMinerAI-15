// -*-c++-*-

#include "TrapType.h"
#include "game.h"


TrapType::TrapType(_TrapType* pointer)
{
    ptr = (void*) pointer;
}

int TrapType::id()
{
  return ((_TrapType*)ptr)->id;
}

char* TrapType::name()
{
  return ((_TrapType*)ptr)->name;
}

int TrapType::type()
{
  return ((_TrapType*)ptr)->type;
}

int TrapType::cost()
{
  return ((_TrapType*)ptr)->cost;
}

int TrapType::startsVisible()
{
  return ((_TrapType*)ptr)->startsVisible;
}

int TrapType::hasAction()
{
  return ((_TrapType*)ptr)->hasAction;
}




std::ostream& operator<<(std::ostream& stream,TrapType ob)
{
  stream << "id: " << ((_TrapType*)ob.ptr)->id  <<'\n';
  stream << "name: " << ((_TrapType*)ob.ptr)->name  <<'\n';
  stream << "type: " << ((_TrapType*)ob.ptr)->type  <<'\n';
  stream << "cost: " << ((_TrapType*)ob.ptr)->cost  <<'\n';
  stream << "startsVisible: " << ((_TrapType*)ob.ptr)->startsVisible  <<'\n';
  stream << "hasAction: " << ((_TrapType*)ob.ptr)->hasAction  <<'\n';
  return stream;
}
