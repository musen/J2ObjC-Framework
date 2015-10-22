//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertPathParameters.java
//

#ifndef _JavaSecurityCertCertPathParameters_H_
#define _JavaSecurityCertCertPathParameters_H_

#include "../../../J2ObjC_header.h"

/*!
 @brief The interface specification for certification path algorithm parameters.
 <p>
 This interface is for grouping purposes of <code>CertPath</code> parameter
 implementations.
 */
@protocol JavaSecurityCertCertPathParameters < NSCopying, NSObject, JavaObject >

/*!
 @brief Clones this <code>CertPathParameters</code> instance.
 @return the cloned instance.
 */
- (id)clone;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathParameters)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathParameters)

#endif // _JavaSecurityCertCertPathParameters_H_