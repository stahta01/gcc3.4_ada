
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_ConcurrentSkipListMap$Node__
#define __java_util_concurrent_ConcurrentSkipListMap$Node__

#pragma interface

#include <java/lang/Object.h>

class java::util::concurrent::ConcurrentSkipListMap$Node : public ::java::lang::Object
{

public: // actually package-private
  ConcurrentSkipListMap$Node(::java::lang::Object *, ::java::lang::Object *, ::java::util::concurrent::ConcurrentSkipListMap$Node *);
  ConcurrentSkipListMap$Node(::java::util::concurrent::ConcurrentSkipListMap$Node *);
  jboolean casValue(::java::lang::Object *, ::java::lang::Object *);
  jboolean casNext(::java::util::concurrent::ConcurrentSkipListMap$Node *, ::java::util::concurrent::ConcurrentSkipListMap$Node *);
  jboolean isMarker();
  jboolean isBaseHeader();
  jboolean appendMarker(::java::util::concurrent::ConcurrentSkipListMap$Node *);
  void helpDelete(::java::util::concurrent::ConcurrentSkipListMap$Node *, ::java::util::concurrent::ConcurrentSkipListMap$Node *);
  ::java::lang::Object * getValidValue();
  ::java::util::AbstractMap$SimpleImmutableEntry * createSnapshot();
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) key;
  volatile ::java::lang::Object * value;
  volatile ::java::util::concurrent::ConcurrentSkipListMap$Node * next;
  static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater * nextUpdater;
  static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater * valueUpdater;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_ConcurrentSkipListMap$Node__