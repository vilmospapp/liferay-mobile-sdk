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
@interface DLAppService_v62 : NSObject

- (NSArray *)getGroupFileEntries:(NSNumber *)groupId userId:(NSNumber *)userId rootFolderId:(NSNumber *)rootFolderId mimeTypes:(NSArray *)mimeTypes status:(NSNumber *)status start:(NSNumber *)start end:(NSNumber *)end obc:(NSDictionary *)obc;
- (NSNumber *)getFoldersCount:(NSNumber *)repositoryId parentFolderId:(NSNumber *)parentFolderId status:(NSNumber *)status includeMountFolders:(BOOL)includeMountFolders;
- (NSDictionary *)copyFolder:(NSNumber *)repositoryId sourceFolderId:(NSNumber *)sourceFolderId parentFolderId:(NSNumber *)parentFolderId name:(NSString *)name description:(NSString *)description serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)moveFileShortcutFromTrash:(NSNumber *)fileShortcutId newFolderId:(NSNumber *)newFolderId serviceContext:(NSDictionary *)serviceContext;
- (BOOL)verifyFileEntryCheckOut:(NSNumber *)repositoryId fileEntryId:(NSNumber *)fileEntryId lockUuid:(NSString *)lockUuid;
- (NSDictionary *)updateFolder:(NSNumber *)folderId name:(NSString *)name description:(NSString *)description serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)moveFileEntryToTrash:(NSNumber *)fileEntryId;
- (NSDictionary *)moveFileEntry:(NSNumber *)fileEntryId newFolderId:(NSNumber *)newFolderId serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)updateFileEntry:(NSNumber *)fileEntryId sourceFileName:(NSString *)sourceFileName mimeType:(NSString *)mimeType title:(NSString *)title description:(NSString *)description changeLog:(NSString *)changeLog majorVersion:(BOOL)majorVersion file:(NSDictionary *)file serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)moveFolderToTrash:(NSNumber *)folderId;
- (void)revertFileEntry:(NSNumber *)fileEntryId version:(NSString *)version serviceContext:(NSDictionary *)serviceContext;
- (NSArray *)getFoldersAndFileEntriesAndFileShortcuts:(NSNumber *)repositoryId folderId:(NSNumber *)folderId status:(NSNumber *)status mimeTypes:(NSArray *)mimeTypes includeMountFolders:(BOOL)includeMountFolders start:(NSNumber *)start end:(NSNumber *)end obc:(NSDictionary *)obc;
- (void)subscribeFileEntryType:(NSNumber *)groupId fileEntryTypeId:(NSNumber *)fileEntryTypeId;
- (NSDictionary *)search:(NSNumber *)repositoryId creatorUserId:(NSNumber *)creatorUserId folderId:(NSNumber *)folderId mimeTypes:(NSArray *)mimeTypes status:(NSNumber *)status start:(NSNumber *)start end:(NSNumber *)end;
- (void)restoreFileEntryFromTrash:(NSNumber *)fileEntryId;
- (NSNumber *)getFoldersFileEntriesCount:(NSNumber *)repositoryId folderIds:(NSArray *)folderIds status:(NSNumber *)status;
- (void)unlockFolder:(NSNumber *)repositoryId parentFolderId:(NSNumber *)parentFolderId name:(NSString *)name lockUuid:(NSString *)lockUuid;
- (NSArray *)getMountFolders:(NSNumber *)repositoryId parentFolderId:(NSNumber *)parentFolderId start:(NSNumber *)start end:(NSNumber *)end obc:(NSDictionary *)obc;
- (NSDictionary *)moveFileShortcutToTrash:(NSNumber *)fileShortcutId;
- (NSDictionary *)moveFolder:(NSNumber *)folderId parentFolderId:(NSNumber *)parentFolderId serviceContext:(NSDictionary *)serviceContext;
- (NSArray *)getFolders:(NSNumber *)repositoryId parentFolderId:(NSNumber *)parentFolderId status:(NSNumber *)status includeMountFolders:(BOOL)includeMountFolders start:(NSNumber *)start end:(NSNumber *)end obc:(NSDictionary *)obc;
- (void)deleteFolder:(NSNumber *)repositoryId parentFolderId:(NSNumber *)parentFolderId name:(NSString *)name;
- (void)deleteFileVersion:(NSNumber *)fileEntryId version:(NSString *)version;
- (NSNumber *)getFileEntriesAndFileShortcutsCount:(NSNumber *)repositoryId folderId:(NSNumber *)folderId status:(NSNumber *)status mimeTypes:(NSArray *)mimeTypes;
- (NSDictionary *)getFolder:(NSNumber *)repositoryId parentFolderId:(NSNumber *)parentFolderId name:(NSString *)name;
- (NSArray *)getFileEntriesAndFileShortcuts:(NSNumber *)repositoryId folderId:(NSNumber *)folderId status:(NSNumber *)status start:(NSNumber *)start end:(NSNumber *)end;
- (NSDictionary *)checkOutFileEntry:(NSNumber *)fileEntryId owner:(NSString *)owner expirationTime:(NSNumber *)expirationTime serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)lockFolder:(NSNumber *)repositoryId folderId:(NSNumber *)folderId owner:(NSString *)owner inheritable:(BOOL)inheritable expirationTime:(NSNumber *)expirationTime;
- (NSDictionary *)addFileEntry:(NSNumber *)repositoryId folderId:(NSNumber *)folderId sourceFileName:(NSString *)sourceFileName mimeType:(NSString *)mimeType title:(NSString *)title description:(NSString *)description changeLog:(NSString *)changeLog file:(NSDictionary *)file serviceContext:(NSDictionary *)serviceContext;
- (void)deleteTempFileEntry:(NSNumber *)groupId folderId:(NSNumber *)folderId fileName:(NSString *)fileName tempFolderName:(NSString *)tempFolderName;
- (void)restoreFolderFromTrash:(NSNumber *)folderId;
- (NSDictionary *)refreshFolderLock:(NSString *)lockUuid companyId:(NSNumber *)companyId expirationTime:(NSNumber *)expirationTime;
- (NSDictionary *)lockFileEntry:(NSNumber *)fileEntryId owner:(NSString *)owner expirationTime:(NSNumber *)expirationTime;
- (NSDictionary *)addTempFileEntry:(NSNumber *)groupId folderId:(NSNumber *)folderId fileName:(NSString *)fileName tempFolderName:(NSString *)tempFolderName file:(NSDictionary *)file mimeType:(NSString *)mimeType;
- (void)deleteFileShortcut:(NSNumber *)fileShortcutId;
- (NSNumber *)getFileEntriesCount:(NSNumber *)repositoryId folderId:(NSNumber *)folderId fileEntryTypeId:(NSNumber *)fileEntryTypeId;
- (NSDictionary *)getFileShortcut:(NSNumber *)fileShortcutId;
- (void)unsubscribeFolder:(NSNumber *)groupId folderId:(NSNumber *)folderId;
- (void)cancelCheckOut:(NSNumber *)fileEntryId;
- (NSNumber *)getFoldersAndFileEntriesAndFileShortcutsCount:(NSNumber *)repositoryId folderId:(NSNumber *)folderId status:(NSNumber *)status mimeTypes:(NSArray *)mimeTypes includeMountFolders:(BOOL)includeMountFolders;
- (NSArray *)getFileEntries:(NSNumber *)repositoryId folderId:(NSNumber *)folderId fileEntryTypeId:(NSNumber *)fileEntryTypeId start:(NSNumber *)start end:(NSNumber *)end obc:(NSDictionary *)obc;
- (void)getSubfolderIds:(NSNumber *)repositoryId folderIds:(NSArray *)folderIds folderId:(NSNumber *)folderId;
- (void)restoreFileShortcutFromTrash:(NSNumber *)fileShortcutId;
- (NSDictionary *)getFileEntryByUuidAndGroupId:(NSString *)uuid groupId:(NSNumber *)groupId;
- (NSNumber *)getGroupFileEntriesCount:(NSNumber *)groupId userId:(NSNumber *)userId rootFolderId:(NSNumber *)rootFolderId mimeTypes:(NSArray *)mimeTypes status:(NSNumber *)status;
- (NSDictionary *)refreshFileEntryLock:(NSString *)lockUuid companyId:(NSNumber *)companyId expirationTime:(NSNumber *)expirationTime;
- (void)deleteFileEntry:(NSNumber *)fileEntryId;
- (BOOL)verifyFileEntryLock:(NSNumber *)repositoryId fileEntryId:(NSNumber *)fileEntryId lockUuid:(NSString *)lockUuid;
- (void)checkInFileEntry:(NSNumber *)fileEntryId majorVersion:(BOOL)majorVersion changeLog:(NSString *)changeLog serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)moveFolderFromTrash:(NSNumber *)folderId parentFolderId:(NSNumber *)parentFolderId serviceContext:(NSDictionary *)serviceContext;
- (void)unsubscribeFileEntryType:(NSNumber *)groupId fileEntryTypeId:(NSNumber *)fileEntryTypeId;
- (BOOL)verifyInheritableLock:(NSNumber *)repositoryId folderId:(NSNumber *)folderId lockUuid:(NSString *)lockUuid;
- (NSDictionary *)updateFileShortcut:(NSNumber *)fileShortcutId folderId:(NSNumber *)folderId toFileEntryId:(NSNumber *)toFileEntryId serviceContext:(NSDictionary *)serviceContext;
- (void)unlockFileEntry:(NSNumber *)fileEntryId lockUuid:(NSString *)lockUuid;
- (NSArray *)getTempFileEntryNames:(NSNumber *)groupId folderId:(NSNumber *)folderId tempFolderName:(NSString *)tempFolderName;
- (NSDictionary *)updateFileEntryAndCheckIn:(NSNumber *)fileEntryId sourceFileName:(NSString *)sourceFileName mimeType:(NSString *)mimeType title:(NSString *)title description:(NSString *)description changeLog:(NSString *)changeLog majorVersion:(BOOL)majorVersion file:(NSDictionary *)file serviceContext:(NSDictionary *)serviceContext;
- (NSNumber *)getMountFoldersCount:(NSNumber *)repositoryId parentFolderId:(NSNumber *)parentFolderId;
- (NSDictionary *)addFolder:(NSNumber *)repositoryId parentFolderId:(NSNumber *)parentFolderId name:(NSString *)name description:(NSString *)description serviceContext:(NSDictionary *)serviceContext;
- (NSDictionary *)addFileShortcut:(NSNumber *)repositoryId folderId:(NSNumber *)folderId toFileEntryId:(NSNumber *)toFileEntryId serviceContext:(NSDictionary *)serviceContext;
- (void)deleteFileEntryByTitle:(NSNumber *)repositoryId folderId:(NSNumber *)folderId title:(NSString *)title;
- (NSDictionary *)moveFileEntryFromTrash:(NSNumber *)fileEntryId newFolderId:(NSNumber *)newFolderId serviceContext:(NSDictionary *)serviceContext;
- (void)subscribeFolder:(NSNumber *)groupId folderId:(NSNumber *)folderId;
- (NSDictionary *)getFileEntry:(NSNumber *)groupId folderId:(NSNumber *)folderId title:(NSString *)title;

@end