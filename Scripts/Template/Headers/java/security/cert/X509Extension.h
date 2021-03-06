//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/X509Extension.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertX509Extension")
#ifdef RESTRICT_JavaSecurityCertX509Extension
#define INCLUDE_ALL_JavaSecurityCertX509Extension 0
#else
#define INCLUDE_ALL_JavaSecurityCertX509Extension 1
#endif
#undef RESTRICT_JavaSecurityCertX509Extension

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertX509Extension_) && (INCLUDE_ALL_JavaSecurityCertX509Extension || defined(INCLUDE_JavaSecurityCertX509Extension))
#define JavaSecurityCertX509Extension_

@class IOSByteArray;
@protocol JavaUtilSet;

/*!
 @brief The interface specifying an X.509 Certificate or CRL extension.
 */
@protocol JavaSecurityCertX509Extension < NSObject, JavaObject >

/*!
 @brief Returns the set of OIDs of the extension(s) marked as CRITICAL, that this
 implementation manages.
 @return the set of extension OIDs marked as CRITIAL, an empty set if none
 are marked as CRITICAL, or <code>null</code> if no extensions are
 present.
 */
- (id<JavaUtilSet>)getCriticalExtensionOIDs;

/*!
 @brief Returns the extension value as DER-encoded OCTET string for the specified
 OID.
 @param oid
 the object identifier to get the extension value for.
 @return the extension value as DER-encoded OCTET string, or <code>null</code>
 if no extension for the specified OID can be found.
 */
- (IOSByteArray *)getExtensionValueWithNSString:(NSString *)oid;

/*!
 @brief Returns the set of OIDs of the extension(s) marked as NON-CRITICAL, that
 this implementation manages.
 @return the set of extension OIDs marked as NON-CRITIAL, an empty set if
 none are marked as NON-.CRITICAL, or <code>null</code> if no
 extensions are present.
 */
- (id<JavaUtilSet>)getNonCriticalExtensionOIDs;

/*!
 @brief Returns whether this instance has an extension marked as CRITICAL that it
 cannot support.
 @return <code>true</code> if an unsupported CRITICAL extension is present,
 <code>false</code> otherwise.
 */
- (jboolean)hasUnsupportedCriticalExtension;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertX509Extension)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertX509Extension)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertX509Extension")
