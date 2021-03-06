/**
 * Copyright (c) 2000-2013 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

#import <Foundation/Foundation.h>

/**
 * author Bruno Farache
 */
@interface EmailAddressService_v62 : NSObject

- (NSDictionary *)updateEmailAddress:(NSNumber *)emailAddressId address:(NSString *)address typeId:(NSNumber *)typeId primary:(BOOL)primary;
- (NSArray *)getEmailAddresses:(NSString *)className classPK:(NSNumber *)classPK;
- (NSDictionary *)getEmailAddress:(NSNumber *)emailAddressId;
- (NSDictionary *)addEmailAddress:(NSString *)className classPK:(NSNumber *)classPK address:(NSString *)address typeId:(NSNumber *)typeId primary:(BOOL)primary serviceContext:(NSDictionary *)serviceContext;
- (void)deleteEmailAddress:(NSNumber *)emailAddressId;

@end