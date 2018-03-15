/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHSERVICESERVICEPLANINFO_H
#define MSGRAPHSERVICESERVICEPLANINFO_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

#import "core/MSOrcBaseEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSGraphServiceServicePlanInfo
 *
 */
@interface MSGraphServiceServicePlanInfo : MSOrcBaseEntity <MSOrcInteroperableWithDictionary>

/** Property servicePlanId
 *
 */
@property (nonatomic,  copy, setter=setServicePlanId:, getter=servicePlanId) NSString * servicePlanId;

/** Property servicePlanName
 *
 */
@property (nonatomic,  copy, setter=setServicePlanName:, getter=servicePlanName) NSString * servicePlanName;

/** Property provisioningStatus
 *
 */
@property (nonatomic,  copy, setter=setProvisioningStatus:, getter=provisioningStatus) NSString * provisioningStatus;

/** Property appliesTo
 *
 */
@property (nonatomic,  copy, setter=setAppliesTo:, getter=appliesTo) NSString * appliesTo;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif
