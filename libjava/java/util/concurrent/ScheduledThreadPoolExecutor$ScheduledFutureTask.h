
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask__
#define __java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask__

#pragma interface

#include <java/util/concurrent/FutureTask.h>

class java::util::concurrent::ScheduledThreadPoolExecutor$ScheduledFutureTask : public ::java::util::concurrent::FutureTask
{

public: // actually package-private
  ScheduledThreadPoolExecutor$ScheduledFutureTask(::java::util::concurrent::ScheduledThreadPoolExecutor *, ::java::lang::Runnable *, ::java::lang::Object *, jlong);
  ScheduledThreadPoolExecutor$ScheduledFutureTask(::java::util::concurrent::ScheduledThreadPoolExecutor *, ::java::lang::Runnable *, ::java::lang::Object *, jlong, jlong);
  ScheduledThreadPoolExecutor$ScheduledFutureTask(::java::util::concurrent::ScheduledThreadPoolExecutor *, ::java::util::concurrent::Callable *, jlong);
public:
  virtual jlong getDelay(::java::util::concurrent::TimeUnit *);
  virtual jint target$compareTo(::java::util::concurrent::Delayed *);
  virtual jboolean isPeriodic();
private:
  void runPeriodic();
public:
  virtual void run();
  virtual jint compareTo(::java::lang::Object *);
public: // actually package-private
  static jboolean access$1(::java::util::concurrent::ScheduledThreadPoolExecutor$ScheduledFutureTask *);
  static void access$2(::java::util::concurrent::ScheduledThreadPoolExecutor$ScheduledFutureTask *);
private:
  jlong __attribute__((aligned(__alignof__( ::java::util::concurrent::FutureTask)))) sequenceNumber;
  jlong time;
  jlong period;
public: // actually package-private
  ::java::util::concurrent::ScheduledThreadPoolExecutor * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask__