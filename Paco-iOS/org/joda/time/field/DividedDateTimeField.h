//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: joda-time/src/main/java/org/joda/time/field/DividedDateTimeField.java
//

#include "J2ObjC_header.h"

#pragma push_macro("OrgJodaTimeFieldDividedDateTimeField_INCLUDE_ALL")
#ifdef OrgJodaTimeFieldDividedDateTimeField_RESTRICT
#define OrgJodaTimeFieldDividedDateTimeField_INCLUDE_ALL 0
#else
#define OrgJodaTimeFieldDividedDateTimeField_INCLUDE_ALL 1
#endif
#undef OrgJodaTimeFieldDividedDateTimeField_RESTRICT

#if !defined (OrgJodaTimeFieldDividedDateTimeField_) && (OrgJodaTimeFieldDividedDateTimeField_INCLUDE_ALL || defined(OrgJodaTimeFieldDividedDateTimeField_INCLUDE))
#define OrgJodaTimeFieldDividedDateTimeField_

#define OrgJodaTimeFieldDecoratedDateTimeField_RESTRICT 1
#define OrgJodaTimeFieldDecoratedDateTimeField_INCLUDE 1
#include "org/joda/time/field/DecoratedDateTimeField.h"

@class OrgJodaTimeDateTimeField;
@class OrgJodaTimeDateTimeFieldType;
@class OrgJodaTimeDurationField;
@class OrgJodaTimeFieldRemainderDateTimeField;

@interface OrgJodaTimeFieldDividedDateTimeField : OrgJodaTimeFieldDecoratedDateTimeField {
 @public
  jint iDivisor_;
  OrgJodaTimeDurationField *iDurationField_;
  OrgJodaTimeDurationField *iRangeDurationField_;
}

#pragma mark Public

- (instancetype)initWithOrgJodaTimeDateTimeField:(OrgJodaTimeDateTimeField *)field
                withOrgJodaTimeDateTimeFieldType:(OrgJodaTimeDateTimeFieldType *)type
                                         withInt:(jint)divisor;

- (instancetype)initWithOrgJodaTimeDateTimeField:(OrgJodaTimeDateTimeField *)field
                    withOrgJodaTimeDurationField:(OrgJodaTimeDurationField *)rangeField
                withOrgJodaTimeDateTimeFieldType:(OrgJodaTimeDateTimeFieldType *)type
                                         withInt:(jint)divisor;

- (instancetype)initWithOrgJodaTimeFieldRemainderDateTimeField:(OrgJodaTimeFieldRemainderDateTimeField *)remainderField
                              withOrgJodaTimeDateTimeFieldType:(OrgJodaTimeDateTimeFieldType *)type;

- (instancetype)initWithOrgJodaTimeFieldRemainderDateTimeField:(OrgJodaTimeFieldRemainderDateTimeField *)remainderField
                                  withOrgJodaTimeDurationField:(OrgJodaTimeDurationField *)rangeField
                              withOrgJodaTimeDateTimeFieldType:(OrgJodaTimeDateTimeFieldType *)type;

- (jlong)addWithLong:(jlong)instant
             withInt:(jint)amount;

- (jlong)addWithLong:(jlong)instant
            withLong:(jlong)amount;

- (jlong)addWrapFieldWithLong:(jlong)instant
                      withInt:(jint)amount;

- (jint)getWithLong:(jlong)instant;

- (jint)getDifferenceWithLong:(jlong)minuendInstant
                     withLong:(jlong)subtrahendInstant;

- (jlong)getDifferenceAsLongWithLong:(jlong)minuendInstant
                            withLong:(jlong)subtrahendInstant;

- (jint)getDivisor;

- (OrgJodaTimeDurationField *)getDurationField;

- (jint)getMaximumValue;

- (jint)getMinimumValue;

- (OrgJodaTimeDurationField *)getRangeDurationField;

- (jlong)remainderWithLong:(jlong)instant;

- (jlong)roundFloorWithLong:(jlong)instant;

- (jlong)setWithLong:(jlong)instant
             withInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaTimeFieldDividedDateTimeField)

J2OBJC_FIELD_SETTER(OrgJodaTimeFieldDividedDateTimeField, iDurationField_, OrgJodaTimeDurationField *)
J2OBJC_FIELD_SETTER(OrgJodaTimeFieldDividedDateTimeField, iRangeDurationField_, OrgJodaTimeDurationField *)

FOUNDATION_EXPORT void OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeDateTimeField_withOrgJodaTimeDateTimeFieldType_withInt_(OrgJodaTimeFieldDividedDateTimeField *self, OrgJodaTimeDateTimeField *field, OrgJodaTimeDateTimeFieldType *type, jint divisor);

FOUNDATION_EXPORT OrgJodaTimeFieldDividedDateTimeField *new_OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeDateTimeField_withOrgJodaTimeDateTimeFieldType_withInt_(OrgJodaTimeDateTimeField *field, OrgJodaTimeDateTimeFieldType *type, jint divisor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaTimeFieldDividedDateTimeField *create_OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeDateTimeField_withOrgJodaTimeDateTimeFieldType_withInt_(OrgJodaTimeDateTimeField *field, OrgJodaTimeDateTimeFieldType *type, jint divisor);

FOUNDATION_EXPORT void OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeDateTimeField_withOrgJodaTimeDurationField_withOrgJodaTimeDateTimeFieldType_withInt_(OrgJodaTimeFieldDividedDateTimeField *self, OrgJodaTimeDateTimeField *field, OrgJodaTimeDurationField *rangeField, OrgJodaTimeDateTimeFieldType *type, jint divisor);

FOUNDATION_EXPORT OrgJodaTimeFieldDividedDateTimeField *new_OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeDateTimeField_withOrgJodaTimeDurationField_withOrgJodaTimeDateTimeFieldType_withInt_(OrgJodaTimeDateTimeField *field, OrgJodaTimeDurationField *rangeField, OrgJodaTimeDateTimeFieldType *type, jint divisor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaTimeFieldDividedDateTimeField *create_OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeDateTimeField_withOrgJodaTimeDurationField_withOrgJodaTimeDateTimeFieldType_withInt_(OrgJodaTimeDateTimeField *field, OrgJodaTimeDurationField *rangeField, OrgJodaTimeDateTimeFieldType *type, jint divisor);

FOUNDATION_EXPORT void OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeFieldRemainderDateTimeField_withOrgJodaTimeDateTimeFieldType_(OrgJodaTimeFieldDividedDateTimeField *self, OrgJodaTimeFieldRemainderDateTimeField *remainderField, OrgJodaTimeDateTimeFieldType *type);

FOUNDATION_EXPORT OrgJodaTimeFieldDividedDateTimeField *new_OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeFieldRemainderDateTimeField_withOrgJodaTimeDateTimeFieldType_(OrgJodaTimeFieldRemainderDateTimeField *remainderField, OrgJodaTimeDateTimeFieldType *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaTimeFieldDividedDateTimeField *create_OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeFieldRemainderDateTimeField_withOrgJodaTimeDateTimeFieldType_(OrgJodaTimeFieldRemainderDateTimeField *remainderField, OrgJodaTimeDateTimeFieldType *type);

FOUNDATION_EXPORT void OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeFieldRemainderDateTimeField_withOrgJodaTimeDurationField_withOrgJodaTimeDateTimeFieldType_(OrgJodaTimeFieldDividedDateTimeField *self, OrgJodaTimeFieldRemainderDateTimeField *remainderField, OrgJodaTimeDurationField *rangeField, OrgJodaTimeDateTimeFieldType *type);

FOUNDATION_EXPORT OrgJodaTimeFieldDividedDateTimeField *new_OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeFieldRemainderDateTimeField_withOrgJodaTimeDurationField_withOrgJodaTimeDateTimeFieldType_(OrgJodaTimeFieldRemainderDateTimeField *remainderField, OrgJodaTimeDurationField *rangeField, OrgJodaTimeDateTimeFieldType *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaTimeFieldDividedDateTimeField *create_OrgJodaTimeFieldDividedDateTimeField_initWithOrgJodaTimeFieldRemainderDateTimeField_withOrgJodaTimeDurationField_withOrgJodaTimeDateTimeFieldType_(OrgJodaTimeFieldRemainderDateTimeField *remainderField, OrgJodaTimeDurationField *rangeField, OrgJodaTimeDateTimeFieldType *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaTimeFieldDividedDateTimeField)

#endif

#pragma pop_macro("OrgJodaTimeFieldDividedDateTimeField_INCLUDE_ALL")