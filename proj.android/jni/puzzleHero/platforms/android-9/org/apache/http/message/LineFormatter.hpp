/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.LineFormatter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEFORMATTER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEFORMATTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class StatusLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/RequestLine.hpp>
#include <org/apache/http/StatusLine.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class LineFormatter;
	class LineFormatter
		: public object<LineFormatter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit LineFormatter(jobject jobj)
		: object<LineFormatter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::util::CharArrayBuffer > appendProtocolVersion(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::ProtocolVersion >  const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatRequestLine(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::RequestLine >  const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatStatusLine(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::StatusLine >  const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatHeader(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::Header >  const&);
	}; //class LineFormatter

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEFORMATTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEFORMATTER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEFORMATTER_HPP_IMPL

namespace j2cpp {



org::apache::http::message::LineFormatter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::LineFormatter::appendProtocolVersion(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::ProtocolVersion > const &a1)
{
	return call_method<
		org::apache::http::message::LineFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::LineFormatter::J2CPP_METHOD_NAME(0),
		org::apache::http::message::LineFormatter::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::LineFormatter::formatRequestLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::RequestLine > const &a1)
{
	return call_method<
		org::apache::http::message::LineFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::LineFormatter::J2CPP_METHOD_NAME(1),
		org::apache::http::message::LineFormatter::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::LineFormatter::formatStatusLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::StatusLine > const &a1)
{
	return call_method<
		org::apache::http::message::LineFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::LineFormatter::J2CPP_METHOD_NAME(2),
		org::apache::http::message::LineFormatter::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::LineFormatter::formatHeader(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::Header > const &a1)
{
	return call_method<
		org::apache::http::message::LineFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::LineFormatter::J2CPP_METHOD_NAME(3),
		org::apache::http::message::LineFormatter::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::message::LineFormatter,"org/apache/http/message/LineFormatter")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineFormatter,0,"appendProtocolVersion","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/ProtocolVersion;)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineFormatter,1,"formatRequestLine","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/RequestLine;)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineFormatter,2,"formatStatusLine","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/StatusLine;)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineFormatter,3,"formatHeader","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/Header;)Lorg/apache/http/util/CharArrayBuffer;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEFORMATTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
