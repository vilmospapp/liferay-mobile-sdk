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
@interface MembershipRequestService_v62 : NSObject

- (NSDictionary *)addMembershipRequest:(NSNumber *)groupId comments:(NSString *)comments serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)getMembershipRequest:(NSNumber *)membershipRequestId;
- (void)updateStatus:(NSNumber *)membershipRequestId reviewComments:(NSString *)reviewComments statusId:(NSNumber *)statusId serviceContext:(NSDictionary *)serviceContext;
- (void)deleteMembershipRequests:(NSNumber *)groupId statusId:(NSNumber *)statusId;

@end