
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet__
#define __java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet__

#pragma interface

#include <java/util/Collections$UnmodifiableSet.h>
#include <gcj/array.h>


class java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet : public ::java::util::Collections$UnmodifiableSet
{

public: // actually package-private
  Collections$UnmodifiableMap$UnmodifiableEntrySet(::java::util::Set *);
public:
  ::java::util::Iterator * iterator();
  JArray< ::java::util::Map$Entry * > * target$toArray();
  JArray< ::java::util::Map$Entry * > * toArray(JArray< ::java::util::Map$Entry * > *);
  JArray< ::java::lang::Object * > * toArray();
private:
  static const jlong serialVersionUID = 7854390611657943733LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet__