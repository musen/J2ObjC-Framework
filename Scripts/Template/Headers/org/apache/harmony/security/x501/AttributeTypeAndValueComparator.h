//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x501/AttributeTypeAndValueComparator.java
//

#ifndef _OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_H_
#define _OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../java/io/Serializable.h"
#include "../../../../../java/util/Comparator.h"

@class OrgApacheHarmonySecurityX501AttributeTypeAndValue;

/*!
 @author Alexander V. Esin
 @version $Revision$
 */

/*!
 @brief AttributeTypeAndValue comparator
 */
@interface OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator : NSObject < JavaUtilComparator, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

/*!
 @brief compares two AttributeTypeAndValues
 @param atav1
 first AttributeTypeAndValue
 @param atav2
 second AttributeTypeAndValue
 @return -1 of first AttributeTypeAndValue "less" than second
 AttributeTypeAndValue 1 otherwise, 0 if they are equal
 */
- (jint)compareWithId:(OrgApacheHarmonySecurityX501AttributeTypeAndValue *)atav1
               withId:(OrgApacheHarmonySecurityX501AttributeTypeAndValue *)atav2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_init(OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator *self);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator *new_OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator)

#endif // _OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_H_