//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/CharacterDataImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomCharacterDataImpl_H_
#define _OrgApacheHarmonyXmlDomCharacterDataImpl_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../org/apache/harmony/xml/dom/LeafNodeImpl.h"
#include "../../../../../org/w3c/dom/CharacterData.h"

@class JavaLangStringBuffer;
@class JavaLangStringBuilder;
@class OrgApacheHarmonyXmlDomDocumentImpl;

/*!
 @brief Provides a straightforward implementation of the corresponding W3C DOM
 interface.
 The class is used internally only, thus only notable members that
 are not in the original interface are documented (the W3C docs are quite
 extensive). Hope that's ok.
 <p>
 Some of the fields may have package visibility, so other classes belonging to
 the DOM implementation can easily access them while maintaining the DOM tree
 structure.
 */
@interface OrgApacheHarmonyXmlDomCharacterDataImpl : OrgApacheHarmonyXmlDomLeafNodeImpl < OrgW3cDomCharacterData > {
 @public
  JavaLangStringBuffer *buffer_;
}

#pragma mark Public

- (void)appendDataWithNSString:(NSString *)arg;

/*!
 @brief Appends this node's text content to the given builder.
 */
- (void)appendDataToWithJavaLangStringBuilder:(JavaLangStringBuilder *)stringBuilder;

- (void)deleteDataWithInt:(jint)offset
                  withInt:(jint)count;

- (NSString *)getData;

- (jint)getLength;

- (NSString *)getNodeValue;

- (void)insertDataWithInt:(jint)offset
             withNSString:(NSString *)arg;

- (void)replaceDataWithInt:(jint)offset
                   withInt:(jint)count
              withNSString:(NSString *)arg;

- (void)setDataWithNSString:(NSString *)data;

- (NSString *)substringDataWithInt:(jint)offset
                           withInt:(jint)count;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)data;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomCharacterDataImpl)

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomCharacterDataImpl, buffer_, JavaLangStringBuffer *)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomCharacterDataImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomCharacterDataImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *data);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomCharacterDataImpl)

#endif // _OrgApacheHarmonyXmlDomCharacterDataImpl_H_