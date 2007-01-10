
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenEndSub__
#define __gnu_java_util_regex_RETokenEndSub__

#pragma interface

#include <gnu/java/util/regex/REToken.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
        namespace regex
        {
            class CharIndexed;
            class REMatch;
            class RETokenEndSub;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenEndSub : public ::gnu::java::util::regex::REToken
{

public: // actually package-private
  RETokenEndSub(jint);
  jint getMaximumLength();
  ::gnu::java::util::regex::REMatch * matchThis(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  ::gnu::java::util::regex::REMatch * findMatch(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  void setHitEnd(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  void dump(::java::lang::StringBuffer *);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenEndSub__