
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenPOSIX__
#define __gnu_java_util_regex_RETokenPOSIX__

#pragma interface

#include <gnu/java/util/regex/REToken.h>
#include <gcj/array.h>

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
            class RETokenPOSIX;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenPOSIX : public ::gnu::java::util::regex::REToken
{

public: // actually package-private
  static jint intValue(::java::lang::String *);
  RETokenPOSIX(jint, jint, jboolean, jboolean);
  jint getMinimumLength();
  jint getMaximumLength();
  ::gnu::java::util::regex::REMatch * matchThis(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  jboolean matchOneChar(jchar);
  jboolean returnsFixedLengthMatches();
  jint findFixedLengthMatches(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *, jint);
  void dump(::java::lang::StringBuffer *);
  jint __attribute__((aligned(__alignof__( ::gnu::java::util::regex::REToken)))) type;
  jboolean insens;
  jboolean negated;
  static const jint ALNUM = 0;
  static const jint ALPHA = 1;
  static const jint BLANK = 2;
  static const jint CNTRL = 3;
  static const jint DIGIT = 4;
  static const jint GRAPH = 5;
  static const jint LOWER = 6;
  static const jint PRINT = 7;
  static const jint PUNCT = 8;
  static const jint SPACE = 9;
  static const jint UPPER = 10;
  static const jint XDIGIT = 11;
  static JArray< ::java::lang::String * > * s_nameTable;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenPOSIX__
