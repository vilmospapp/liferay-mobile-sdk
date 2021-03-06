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
@interface UserService_v62 : NSObject

- (NSDictionary *)updateUser:(NSNumber *)userId oldPassword:(NSString *)oldPassword newPassword1:(NSString *)newPassword1 newPassword2:(NSString *)newPassword2 passwordReset:(BOOL)passwordReset reminderQueryQuestion:(NSString *)reminderQueryQuestion reminderQueryAnswer:(NSString *)reminderQueryAnswer screenName:(NSString *)screenName emailAddress:(NSString *)emailAddress facebookId:(NSNumber *)facebookId openId:(NSString *)openId languageId:(NSString *)languageId timeZoneId:(NSString *)timeZoneId greeting:(NSString *)greeting comments:(NSString *)comments firstName:(NSString *)firstName middleName:(NSString *)middleName lastName:(NSString *)lastName prefixId:(NSNumber *)prefixId suffixId:(NSNumber *)suffixId male:(BOOL)male birthdayMonth:(NSNumber *)birthdayMonth birthdayDay:(NSNumber *)birthdayDay birthdayYear:(NSNumber *)birthdayYear smsSn:(NSString *)smsSn aimSn:(NSString *)aimSn facebookSn:(NSString *)facebookSn icqSn:(NSString *)icqSn jabberSn:(NSString *)jabberSn msnSn:(NSString *)msnSn mySpaceSn:(NSString *)mySpaceSn skypeSn:(NSString *)skypeSn twitterSn:(NSString *)twitterSn ymSn:(NSString *)ymSn jobTitle:(NSString *)jobTitle groupIds:(NSArray *)groupIds organizationIds:(NSArray *)organizationIds roleIds:(NSArray *)roleIds userGroupRoles:(NSArray *)userGroupRoles userGroupIds:(NSArray *)userGroupIds addresses:(NSArray *)addresses emailAddresses:(NSArray *)emailAddresses phones:(NSArray *)phones websites:(NSArray *)websites announcementsDelivers:(NSArray *)announcementsDelivers serviceContext:(NSDictionary *)serviceContext;
- (NSNumber *)getUserIdByScreenName:(NSNumber *)companyId screenName:(NSString *)screenName;
- (NSArray *)getCompanyUsers:(NSNumber *)companyId start:(NSNumber *)start end:(NSNumber *)end;
- (void)unsetGroupTeamsUsers:(NSNumber *)groupId userIds:(NSArray *)userIds;
- (void)addUserGroupUsers:(NSNumber *)userGroupId userIds:(NSArray *)userIds;
- (NSNumber *)getCompanyUsersCount:(NSNumber *)companyId;
- (NSDictionary *)updateLockoutById:(NSNumber *)userId lockout:(BOOL)lockout;
- (NSArray *)getUserGroupUsers:(NSNumber *)userGroupId;
- (NSDictionary *)updateReminderQuery:(NSNumber *)userId question:(NSString *)question answer:(NSString *)answer;
- (void)deleteRoleUser:(NSNumber *)roleId userId:(NSNumber *)userId;
- (NSArray *)getGroupUsers:(NSNumber *)groupId;
- (NSArray *)getRoleUserIds:(NSNumber *)roleId;
- (NSDictionary *)updatePassword:(NSNumber *)userId password1:(NSString *)password1 password2:(NSString *)password2 passwordReset:(BOOL)passwordReset;
- (NSArray *)getOrganizationUsers:(NSNumber *)organizationId;
- (NSDictionary *)updateIncompleteUser:(NSNumber *)companyId autoPassword:(BOOL)autoPassword password1:(NSString *)password1 password2:(NSString *)password2 autoScreenName:(BOOL)autoScreenName screenName:(NSString *)screenName emailAddress:(NSString *)emailAddress facebookId:(NSNumber *)facebookId openId:(NSString *)openId locale:(NSString *)locale firstName:(NSString *)firstName middleName:(NSString *)middleName lastName:(NSString *)lastName prefixId:(NSNumber *)prefixId suffixId:(NSNumber *)suffixId male:(BOOL)male birthdayMonth:(NSNumber *)birthdayMonth birthdayDay:(NSNumber *)birthdayDay birthdayYear:(NSNumber *)birthdayYear jobTitle:(NSString *)jobTitle updateUserInformation:(BOOL)updateUserInformation sendEmail:(BOOL)sendEmail serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)updateOpenId:(NSNumber *)userId openId:(NSString *)openId;
- (void)unsetOrganizationUsers:(NSNumber *)organizationId userIds:(NSArray *)userIds;
- (void)deletePortrait:(NSNumber *)userId;
- (NSDictionary *)updateAgreedToTermsOfUse:(NSNumber *)userId agreedToTermsOfUse:(BOOL)agreedToTermsOfUse;
- (void)setRoleUsers:(NSNumber *)roleId userIds:(NSArray *)userIds;
- (void)updateOrganizations:(NSNumber *)userId organizationIds:(NSArray *)organizationIds serviceContext:(NSDictionary *)serviceContext;
- (void)addGroupUsers:(NSNumber *)groupId userIds:(NSArray *)userIds serviceContext:(NSDictionary *)serviceContext;
- (void)addPasswordPolicyUsers:(NSNumber *)passwordPolicyId userIds:(NSArray *)userIds;
- (void)unsetTeamUsers:(NSNumber *)teamId userIds:(NSArray *)userIds;
- (void)unsetRoleUsers:(NSNumber *)roleId userIds:(NSArray *)userIds;
- (void)addOrganizationUsers:(NSNumber *)organizationId userIds:(NSArray *)userIds;
- (void)addTeamUsers:(NSNumber *)teamId userIds:(NSArray *)userIds;
- (NSArray *)getGroupUserIds:(NSNumber *)groupId;
- (NSNumber *)getUserIdByEmailAddress:(NSNumber *)companyId emailAddress:(NSString *)emailAddress;
- (void)unsetGroupUsers:(NSNumber *)groupId userIds:(NSArray *)userIds serviceContext:(NSDictionary *)serviceContext;
- (NSArray *)getOrganizationUserIds:(NSNumber *)organizationId;
- (void)unsetPasswordPolicyUsers:(NSNumber *)passwordPolicyId userIds:(NSArray *)userIds;
- (NSDictionary *)addUser:(NSNumber *)companyId autoPassword:(BOOL)autoPassword password1:(NSString *)password1 password2:(NSString *)password2 autoScreenName:(BOOL)autoScreenName screenName:(NSString *)screenName emailAddress:(NSString *)emailAddress facebookId:(NSNumber *)facebookId openId:(NSString *)openId locale:(NSString *)locale firstName:(NSString *)firstName middleName:(NSString *)middleName lastName:(NSString *)lastName prefixId:(NSNumber *)prefixId suffixId:(NSNumber *)suffixId male:(BOOL)male birthdayMonth:(NSNumber *)birthdayMonth birthdayDay:(NSNumber *)birthdayDay birthdayYear:(NSNumber *)birthdayYear jobTitle:(NSString *)jobTitle groupIds:(NSArray *)groupIds organizationIds:(NSArray *)organizationIds roleIds:(NSArray *)roleIds userGroupIds:(NSArray *)userGroupIds addresses:(NSArray *)addresses emailAddresses:(NSArray *)emailAddresses phones:(NSArray *)phones websites:(NSArray *)websites announcementsDelivers:(NSArray *)announcementsDelivers sendEmail:(BOOL)sendEmail serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)updatePortrait:(NSNumber *)userId bytes:(NSArray *)bytes;
- (NSDictionary *)getUserById:(NSNumber *)userId;
- (BOOL)hasRoleUser:(NSNumber *)companyId name:(NSString *)name userId:(NSNumber *)userId inherited:(BOOL)inherited;
- (BOOL)hasGroupUser:(NSNumber *)groupId userId:(NSNumber *)userId;
- (NSDictionary *)updateStatus:(NSNumber *)userId status:(NSNumber *)status;
- (void)addRoleUsers:(NSNumber *)roleId userIds:(NSArray *)userIds;
- (NSDictionary *)updateEmailAddress:(NSNumber *)userId password:(NSString *)password emailAddress1:(NSString *)emailAddress1 emailAddress2:(NSString *)emailAddress2 serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)addUserWithWorkflow:(NSNumber *)companyId autoPassword:(BOOL)autoPassword password1:(NSString *)password1 password2:(NSString *)password2 autoScreenName:(BOOL)autoScreenName screenName:(NSString *)screenName emailAddress:(NSString *)emailAddress facebookId:(NSNumber *)facebookId openId:(NSString *)openId locale:(NSString *)locale firstName:(NSString *)firstName middleName:(NSString *)middleName lastName:(NSString *)lastName prefixId:(NSNumber *)prefixId suffixId:(NSNumber *)suffixId male:(BOOL)male birthdayMonth:(NSNumber *)birthdayMonth birthdayDay:(NSNumber *)birthdayDay birthdayYear:(NSNumber *)birthdayYear jobTitle:(NSString *)jobTitle groupIds:(NSArray *)groupIds organizationIds:(NSArray *)organizationIds roleIds:(NSArray *)roleIds userGroupIds:(NSArray *)userGroupIds addresses:(NSArray *)addresses emailAddresses:(NSArray *)emailAddresses phones:(NSArray *)phones websites:(NSArray *)websites announcementsDelivers:(NSArray *)announcementsDelivers sendEmail:(BOOL)sendEmail serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)updateScreenName:(NSNumber *)userId screenName:(NSString *)screenName;
- (NSDictionary *)getUserByEmailAddress:(NSNumber *)companyId emailAddress:(NSString *)emailAddress;
- (void)deleteUser:(NSNumber *)userId;
- (NSDictionary *)getUserByScreenName:(NSNumber *)companyId screenName:(NSString *)screenName;
- (void)unsetUserGroupUsers:(NSNumber *)userGroupId userIds:(NSArray *)userIds;
- (void)setUserGroupUsers:(NSNumber *)userGroupId userIds:(NSArray *)userIds;

@end