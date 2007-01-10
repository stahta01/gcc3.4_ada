
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URLClassLoader$JarURLResource__
#define __java_net_URLClassLoader$JarURLResource__

#pragma interface

#include <java/net/URLClassLoader$Resource.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
        class URL;
        class URLClassLoader$JarURLLoader;
        class URLClassLoader$JarURLResource;
    }
    namespace security
    {
      namespace cert
      {
          class Certificate;
      }
    }
  }
}

class java::net::URLClassLoader$JarURLResource : public ::java::net::URLClassLoader$Resource
{

public: // actually package-private
  URLClassLoader$JarURLResource(::java::net::URLClassLoader$JarURLLoader *, ::java::lang::String *, ::java::util::jar::JarEntry *);
  ::java::io::InputStream * getInputStream();
  jint getLength();
  JArray< ::java::security::cert::Certificate * > * getCertificates();
  ::java::net::URL * getURL();
private:
  ::java::util::jar::JarEntry * __attribute__((aligned(__alignof__( ::java::net::URLClassLoader$Resource)))) entry;
  ::java::lang::String * name;
public:
  static ::java::lang::Class class$;
};

#endif // __java_net_URLClassLoader$JarURLResource__