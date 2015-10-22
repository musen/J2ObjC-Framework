//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/UnknownServiceException.java
//

#ifndef _JavaNetUnknownServiceException_H_
#define _JavaNetUnknownServiceException_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Is thrown if no appropriate <code>ContentHandler</code> could be found for a
 particular service requested by the URL connection.
 This could be happened if
 there is an invalid MIME type or the application wants to send data over a
 read-only connection.
 */
@interface JavaNetUnknownServiceException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance with the given detail message.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new instance with given detail message and cause.
  internal use only
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetUnknownServiceException)

FOUNDATION_EXPORT void JavaNetUnknownServiceException_init(JavaNetUnknownServiceException *self);

FOUNDATION_EXPORT JavaNetUnknownServiceException *new_JavaNetUnknownServiceException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetUnknownServiceException_initWithNSString_(JavaNetUnknownServiceException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetUnknownServiceException *new_JavaNetUnknownServiceException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetUnknownServiceException_initWithNSString_withJavaLangThrowable_(JavaNetUnknownServiceException *self, NSString *detailMessage, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetUnknownServiceException *new_JavaNetUnknownServiceException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetUnknownServiceException)

#endif // _JavaNetUnknownServiceException_H_