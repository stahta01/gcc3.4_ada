
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_JDBCSessionContext__
#define __gnu_javax_net_ssl_provider_JDBCSessionContext__

#pragma interface

#include <gnu/javax/net/ssl/provider/SessionContext.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class JDBCSessionContext;
              class Session;
              class Session$ID;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace cert
      {
          class Certificate;
      }
    }
    namespace sql
    {
        class Connection;
        class PreparedStatement;
    }
  }
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
          class SSLSession;
      }
    }
  }
}

class gnu::javax::net::ssl::provider::JDBCSessionContext : public ::gnu::javax::net::ssl::provider::SessionContext
{

public: // actually package-private
  JDBCSessionContext();
public:
  virtual ::java::util::Enumeration * getIds();
  virtual ::javax::net::ssl::SSLSession * getSession(JArray< jbyte > *);
public: // actually package-private
  virtual jboolean addSession(::gnu::javax::net::ssl::provider::Session$ID *, ::gnu::javax::net::ssl::provider::Session *);
  virtual jboolean containsSessionID(::gnu::javax::net::ssl::provider::Session$ID *);
public: // actually protected
  virtual jboolean removeSession(::gnu::javax::net::ssl::provider::Session$ID *);
public: // actually package-private
  virtual void notifyAccess(::gnu::javax::net::ssl::provider::Session *);
private:
  JArray< jbyte > * certs(JArray< ::java::security::cert::Certificate * > *);
public: // actually protected
  ::java::sql::Connection * __attribute__((aligned(__alignof__( ::gnu::javax::net::ssl::provider::SessionContext)))) connection;
  ::java::sql::PreparedStatement * selectById;
  ::java::sql::PreparedStatement * insert;
  ::java::sql::PreparedStatement * selectTimestamp;
  ::java::sql::PreparedStatement * updateTimestamp;
  ::java::sql::PreparedStatement * deleteSession;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_JDBCSessionContext__