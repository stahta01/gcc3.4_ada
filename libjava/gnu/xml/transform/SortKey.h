
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_transform_SortKey__
#define __gnu_xml_transform_SortKey__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace transform
      {
          class SortKey;
          class Stylesheet;
          class TemplateNode;
      }
      namespace xpath
      {
          class Expr;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace
      {
          class QName;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class gnu::xml::transform::SortKey : public ::java::lang::Object
{

public: // actually package-private
  SortKey(::gnu::xml::xpath::Expr *, ::gnu::xml::transform::TemplateNode *, ::gnu::xml::transform::TemplateNode *, ::gnu::xml::transform::TemplateNode *, ::gnu::xml::transform::TemplateNode *);
  ::java::lang::String * key(::org::w3c::dom::Node *);
  void init(::gnu::xml::transform::Stylesheet *, ::javax::xml::namespace::QName *, ::org::w3c::dom::Node *, jint, jint, ::org::w3c::dom::Node *, ::org::w3c::dom::Node *);
  jboolean references(::javax::xml::namespace::QName *);
  static const jint DEFAULT = 0;
  static const jint UPPER_FIRST = 1;
  static const jint LOWER_FIRST = 2;
  ::gnu::xml::xpath::Expr * __attribute__((aligned(__alignof__( ::java::lang::Object)))) select;
  ::gnu::xml::transform::TemplateNode * langTemplate;
  ::gnu::xml::transform::TemplateNode * dataTypeTemplate;
  ::gnu::xml::transform::TemplateNode * orderTemplate;
  ::gnu::xml::transform::TemplateNode * caseOrderTemplate;
  ::java::lang::String * lang;
  ::java::lang::String * dataType;
  jboolean descending;
  jint caseOrder;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_transform_SortKey__
