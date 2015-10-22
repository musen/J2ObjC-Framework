//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Formattable.java
//

#ifndef _JavaUtilFormattable_H_
#define _JavaUtilFormattable_H_

#include "../../J2ObjC_header.h"

@class JavaUtilFormatter;

/*!
 @brief Classes that handle custom formatting for the 's' specifier of <code>Formatter</code>
 should implement the <code>Formattable</code> interface.
 It gives basic control over
 formatting objects.
 */
@protocol JavaUtilFormattable < NSObject, JavaObject >

/*!
 @brief Formats the object using the specified <code>Formatter</code>.
 @param formatter
 the <code>Formatter</code> to use.
 @param flags
 the flags applied to the output format, which is a bitmask
 that is any combination of <code>FormattableFlags.LEFT_JUSTIFY</code>,
 <code>FormattableFlags.UPPERCASE</code>, and <code>FormattableFlags.ALTERNATE</code>. If
 no such flag is set, the output is formatted by the default
 formatting of the implementation.
 @param width
 the minimum number of characters that should be written to the
 output. If the length of the converted value is less than <code>width</code>
 Additional space characters (' ') are added to the output if the
 as needed to make up the difference. These spaces are added at the
 beginning by default unless the flag
 FormattableFlags.LEFT_JUSTIFY is set, which denotes that
 padding should be added at the end. If width is -1, then
 minimum length is not enforced.
 @param precision
 the maximum number of characters that can be written to the
 output. The length of the output is trimmed down to this size
 before the width padding is applied. If the precision
 is -1, then maximum length is not enforced.
 @throws IllegalFormatException
 if any of the parameters is not supported.
 */
- (void)formatToWithJavaUtilFormatter:(JavaUtilFormatter *)formatter
                              withInt:(jint)flags
                              withInt:(jint)width
                              withInt:(jint)precision;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormattable)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormattable)

#endif // _JavaUtilFormattable_H_