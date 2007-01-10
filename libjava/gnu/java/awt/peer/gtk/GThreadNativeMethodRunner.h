
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GThreadNativeMethodRunner__
#define __gnu_java_awt_peer_gtk_GThreadNativeMethodRunner__

#pragma interface

#include <java/lang/Thread.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GThreadNativeMethodRunner;
          }
        }
      }
    }
  }
}

class gnu::java::awt::peer::gtk::GThreadNativeMethodRunner : public ::java::lang::Thread
{

public: // actually package-private
  GThreadNativeMethodRunner(jlong, jlong, jboolean);
public:
  virtual void run();
private:
  void nativeRun(jlong, jlong);
  static jint registerThread(::java::lang::Thread *);
public: // actually package-private
  static jint threadToThreadID(::java::lang::Thread *);
  static ::java::lang::Thread * threadIDToThread(jint);
private:
  void registerSelfJoinable();
public: // actually package-private
  static void deRegisterJoinable(::java::lang::Thread *);
private:
  jlong __attribute__((aligned(__alignof__( ::java::lang::Thread)))) funcPtr;
  jlong funcArg;
  static JArray< ::java::lang::ref::WeakReference * > * threads;
  static ::java::util::Set * joinable;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GThreadNativeMethodRunner__