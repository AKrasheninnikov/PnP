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



#ifndef MSGRAPHSERVICEDIRECTORYROLEFETCHER_H
#define MSGRAPHSERVICEDIRECTORYROLEFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceDirectoryObjectFetcher;
@class MSGraphServiceDirectoryRoleOperations;


/** MSGraphServiceDirectoryRoleFetcher
 *
 */
@interface MSGraphServiceDirectoryRoleFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphServiceDirectoryRoleOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServiceDirectoryRole *, MSOrcError *))callback;
- (void)update:(MSGraphServiceDirectoryRole *)directoryRole callback:(void (^)(MSGraphServiceDirectoryRole *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServiceDirectoryRoleFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceDirectoryRoleFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServiceDirectoryRoleFetcher *)select:(NSString *)params;
- (MSGraphServiceDirectoryRoleFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=members) MSGraphServiceDirectoryObjectCollectionFetcher *members;

- (MSGraphServiceDirectoryObjectFetcher *)membersById:(id)identifier;


@end

#endif
