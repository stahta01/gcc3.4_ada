
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_PolicyFactoryOperations__
#define __org_omg_PortableInterceptor_PolicyFactoryOperations__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Policy;
      }
      namespace PortableInterceptor
      {
          class PolicyFactoryOperations;
      }
    }
  }
}

class org::omg::PortableInterceptor::PolicyFactoryOperations : public ::java::lang::Object
{

public:
  virtual ::org::omg::CORBA::Policy * create_policy(jint, ::org::omg::CORBA::Any *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_omg_PortableInterceptor_PolicyFactoryOperations__