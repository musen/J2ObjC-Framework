//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/net/url/FileHandler.java
//

#ifndef _LibcoreNetUrlFileHandler_H_
#define _LibcoreNetUrlFileHandler_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/net/URLStreamHandler.h"

@class JavaNetProxy;
@class JavaNetURL;
@class JavaNetURLConnection;

/*!
 @brief This is the handler that is responsible for reading files from the file
 system.
 */
@interface LibcoreNetUrlFileHandler : JavaNetURLStreamHandler

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns a connection to the a file pointed by this <code>URL</code> in
 the file system
 @return A connection to the resource pointed by this url.
 @param url
 URL The URL to which the connection is pointing to
 */
- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)url;

/*!
 @brief The behavior of this method is the same as openConnection(URL).
 <code>proxy</code> is not used in FileURLConnection.
 @param url
 the URL which the connection is pointing to
 @param proxy
 Proxy
 @return a connection to the resource pointed by this url.
 @throws IOException
 if this handler fails to establish a connection.
 @throws IllegalArgumentException
 if the url argument is null.
 @throws UnsupportedOperationException
 if the protocol handler doesn't support this method.
 */
- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)url
                                      withJavaNetProxy:(JavaNetProxy *)proxy;

#pragma mark Protected

/*!
 @brief Parse the <code>string</code>str into <code>URL</code> u which
 already have the context properties.
 The string generally have the
 following format: <code><center>/c:/windows/win.ini</center></code>.
 @param url
 The URL object that's parsed into
 @param spec
 The string equivalent of the specification URL
 @param start
 The index in the spec string from which to begin parsing
 @param end
 The index to stop parsing
 */
- (void)parseURLWithJavaNetURL:(JavaNetURL *)url
                  withNSString:(NSString *)spec
                       withInt:(jint)start
                       withInt:(jint)end;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreNetUrlFileHandler)

FOUNDATION_EXPORT void LibcoreNetUrlFileHandler_init(LibcoreNetUrlFileHandler *self);

FOUNDATION_EXPORT LibcoreNetUrlFileHandler *new_LibcoreNetUrlFileHandler_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreNetUrlFileHandler)

#endif // _LibcoreNetUrlFileHandler_H_