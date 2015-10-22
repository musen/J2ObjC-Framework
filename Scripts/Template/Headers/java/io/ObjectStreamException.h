//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectStreamException.java
//

#ifndef _JavaIoObjectStreamException_H_
#define _JavaIoObjectStreamException_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/IOException.h"

/*!
 @brief Signals some sort of problem during either serialization or deserialization
 of objects.
 This is actually the superclass of several other, more specific
 exception classes.
 */
@interface JavaIoObjectStreamException : JavaIoIOException

#pragma mark Protected

/*!
 @brief Constructs a new <code>ObjectStreamException</code> with its stack trace
 filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ObjectStreamException</code> with its stack trace and
 detail message filled in.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectStreamException)

FOUNDATION_EXPORT void JavaIoObjectStreamException_init(JavaIoObjectStreamException *self);

FOUNDATION_EXPORT void JavaIoObjectStreamException_initWithNSString_(JavaIoObjectStreamException *self, NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectStreamException)

#endif // _JavaIoObjectStreamException_H_