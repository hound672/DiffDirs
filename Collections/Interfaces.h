#ifndef INTERFACES_H
#define INTERFACES_H

#include <QList>
#include <Core/Libs/QComPortThread.h>

class IGui
{
  
public:
  virtual ~IGui() {}
  virtual void init() = 0;
  virtual void show() = 0;
};

#endif // INTERFACES_H
