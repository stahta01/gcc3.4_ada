
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_rmi_CORBA_ValueHandlerDelegateImpl__
#define __gnu_javax_rmi_CORBA_ValueHandlerDelegateImpl__

#pragma interface

#include <gnu/javax/rmi/CORBA/RmiUtilities.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace rmi
      {
        namespace CORBA
        {
            class ValueHandlerDelegateImpl;
        }
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
        namespace portable
        {
            class OutputStream;
        }
      }
      namespace SendingContext
      {
          class RunTime;
      }
    }
  }
}

class gnu::javax::rmi::CORBA::ValueHandlerDelegateImpl : public ::gnu::javax::rmi::CORBA::RmiUtilities
{

public:
  ValueHandlerDelegateImpl();
  virtual jbyte getMaximumStreamFormatVersion();
  virtual void writeValue(::org::omg::CORBA::portable::OutputStream *, ::java::io::Serializable *, jbyte);
  virtual ::org::omg::SendingContext::RunTime * getRunTimeCodeBase();
  virtual jboolean isCustomMarshaled(::java::lang::Class *);
  virtual ::java::io::Serializable * writeReplace(::java::io::Serializable *);
  virtual ::java::lang::String * getRMIRepositoryID(::java::lang::Class *);
public: // actually package-private
  virtual jlong getSid(::java::lang::Class *);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_rmi_CORBA_ValueHandlerDelegateImpl__