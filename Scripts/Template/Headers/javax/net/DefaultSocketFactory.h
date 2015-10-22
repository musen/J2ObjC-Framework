//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/DefaultSocketFactory.java
//

#ifndef _JavaxNetDefaultSocketFactory_H_
#define _JavaxNetDefaultSocketFactory_H_

#include "../../J2ObjC_header.h"
#include "../../javax/net/SocketFactory.h"

@class JavaNetInetAddress;
@class JavaNetSocket;

/*!
 @brief Default implementation of <code>javax.net.SocketFactory</code>
 */
@interface JavaxNetDefaultSocketFactory : JavaxNetSocketFactory

#pragma mark Public

- (JavaNetSocket *)createSocket;

- (JavaNetSocket *)createSocketWithJavaNetInetAddress:(JavaNetInetAddress *)host
                                              withInt:(jint)port;

- (JavaNetSocket *)createSocketWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                              withInt:(jint)port
                               withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                                              withInt:(jint)localPort;

- (JavaNetSocket *)createSocketWithNSString:(NSString *)host
                                    withInt:(jint)port;

- (JavaNetSocket *)createSocketWithNSString:(NSString *)host
                                    withInt:(jint)port
                     withJavaNetInetAddress:(JavaNetInetAddress *)localHost
                                    withInt:(jint)localPort;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetDefaultSocketFactory)

FOUNDATION_EXPORT void JavaxNetDefaultSocketFactory_init(JavaxNetDefaultSocketFactory *self);

FOUNDATION_EXPORT JavaxNetDefaultSocketFactory *new_JavaxNetDefaultSocketFactory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetDefaultSocketFactory)

#endif // _JavaxNetDefaultSocketFactory_H_