//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/SequenceInputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoSequenceInputStream")
#ifdef RESTRICT_JavaIoSequenceInputStream
#define INCLUDE_ALL_JavaIoSequenceInputStream 0
#else
#define INCLUDE_ALL_JavaIoSequenceInputStream 1
#endif
#undef RESTRICT_JavaIoSequenceInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoSequenceInputStream_) && (INCLUDE_ALL_JavaIoSequenceInputStream || defined(INCLUDE_JavaIoSequenceInputStream))
#define JavaIoSequenceInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "../../java/io/InputStream.h"

@class IOSByteArray;
@protocol JavaUtilEnumeration;

/*!
 @brief Concatenates two or more existing <code>InputStream</code>s.
 Reads are taken from
 the first stream until it ends, then the next stream is used, until the last
 stream returns end of file.
 */
@interface JavaIoSequenceInputStream : JavaIoInputStream

#pragma mark Public

/*!
 @brief Constructs a new SequenceInputStream using the elements returned from
 Enumeration <code>e</code> as the stream sequence.
 The instances returned by
 <code>e.nextElement()</code> must be of type <code>InputStream</code>.
 @param e
 the enumeration of <code>InputStreams</code> to get bytes from.
 @throws NullPointerException
 if any of the elements in <code>e</code> is <code>null</code>.
 */
- (instancetype)initWithJavaUtilEnumeration:(id<JavaUtilEnumeration>)e;

/*!
 @brief Constructs a new <code>SequenceInputStream</code> using the two streams
 <code>s1</code> and <code>s2</code> as the sequence of streams to read from.
 @param s1
 the first stream to get bytes from.
 @param s2
 the second stream to get bytes from.
 @throws NullPointerException
 if <code>s1</code> is <code>null</code>.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)s1
                    withJavaIoInputStream:(JavaIoInputStream *)s2;

- (jint)available;

/*!
 @brief Closes all streams in this sequence of input stream.
 @throws IOException
 if an error occurs while closing any of the input streams.
 */
- (void)close;

/*!
 @brief Reads a single byte from this sequence of input streams and returns it as
 an integer in the range from 0 to 255.
 It tries to read from the current
 stream first; if the end of this stream has been reached, it reads from
 the next one. Blocks until one byte has been read, the end of the last
 input stream in the sequence has been reached, or an exception is thrown.
 @return the byte read or -1 if either the end of the last stream in the
 sequence has been reached or this input stream sequence is
 closed.
 @throws IOException
 if an error occurs while reading the current source input
 stream.
 */
- (jint)read;

/*!
 @brief Reads at most <code>count</code> bytes from this sequence of input streams and
 stores them in the byte array <code>buffer</code> starting at <code>offset</code>.
 Blocks only until at least 1 byte has been read, the end of the stream
 has been reached, or an exception is thrown.
 <p>
 This SequenceInputStream shows the same behavior as other InputStreams.
 To do this it will read only as many bytes as a call to read on the
 current substream returns. If that call does not return as many bytes as
 requested by <code>count</code>, it will not retry to read more on its own
 because subsequent reads might block. This would violate the rule that
 it will only block until at least one byte has been read.
 <p>
 If a substream has already reached the end when this call is made, it
 will close that substream and start with the next one. If there are no
 more substreams it will return -1.
 @param buffer
 the array in which to store the bytes read.
 @param offset
 the initial position in <code>buffer</code> to store the bytes read
 from this stream.
 @param count
 the maximum number of bytes to store in <code>buffer</code>.
 @return the number of bytes actually read; -1 if this sequence of streams
 is closed or if the end of the last stream in the sequence has
 been reached.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>count < 0</code>, or if <code>offset + count</code>
  is greater than the size of <code>buffer</code>.
 @throws IOException
 if an I/O error occurs.
 @throws NullPointerException
 if <code>buffer</code> is <code>null</code>.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoSequenceInputStream)

FOUNDATION_EXPORT void JavaIoSequenceInputStream_initWithJavaIoInputStream_withJavaIoInputStream_(JavaIoSequenceInputStream *self, JavaIoInputStream *s1, JavaIoInputStream *s2);

FOUNDATION_EXPORT JavaIoSequenceInputStream *new_JavaIoSequenceInputStream_initWithJavaIoInputStream_withJavaIoInputStream_(JavaIoInputStream *s1, JavaIoInputStream *s2) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoSequenceInputStream *create_JavaIoSequenceInputStream_initWithJavaIoInputStream_withJavaIoInputStream_(JavaIoInputStream *s1, JavaIoInputStream *s2);

FOUNDATION_EXPORT void JavaIoSequenceInputStream_initWithJavaUtilEnumeration_(JavaIoSequenceInputStream *self, id<JavaUtilEnumeration> e);

FOUNDATION_EXPORT JavaIoSequenceInputStream *new_JavaIoSequenceInputStream_initWithJavaUtilEnumeration_(id<JavaUtilEnumeration> e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoSequenceInputStream *create_JavaIoSequenceInputStream_initWithJavaUtilEnumeration_(id<JavaUtilEnumeration> e);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoSequenceInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoSequenceInputStream")
