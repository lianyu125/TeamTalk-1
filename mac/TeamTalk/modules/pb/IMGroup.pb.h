// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

#import "IMBaseDefine.pb.h"
// @@protoc_insertion_point(imports)

@class AuthInfo;
@class AuthInfoBuilder;
@class ContactSessionInfo;
@class ContactSessionInfoBuilder;
@class DepartInfo;
@class DepartInfoBuilder;
@class GroupInfo;
@class GroupInfoBuilder;
@class GroupVersionInfo;
@class GroupVersionInfoBuilder;
@class IMGroupChangeMemberNotify;
@class IMGroupChangeMemberNotifyBuilder;
@class IMGroupChangeMemberReq;
@class IMGroupChangeMemberReqBuilder;
@class IMGroupChangeMemberRsp;
@class IMGroupChangeMemberRspBuilder;
@class IMGroupCreateReq;
@class IMGroupCreateReqBuilder;
@class IMGroupCreateRsp;
@class IMGroupCreateRspBuilder;
@class IMGroupInfoListReq;
@class IMGroupInfoListReqBuilder;
@class IMGroupInfoListRsp;
@class IMGroupInfoListRspBuilder;
@class IMGroupShieldReq;
@class IMGroupShieldReqBuilder;
@class IMGroupShieldRsp;
@class IMGroupShieldRspBuilder;
@class IMNormalGroupListReq;
@class IMNormalGroupListReqBuilder;
@class IMNormalGroupListRsp;
@class IMNormalGroupListRspBuilder;
@class IpAddr;
@class IpAddrBuilder;
@class MsgInfo;
@class MsgInfoBuilder;
@class OfflineFileInfo;
@class OfflineFileInfoBuilder;
@class PushResult;
@class PushResultBuilder;
@class ServerUserStat;
@class ServerUserStatBuilder;
@class ShieldStatus;
@class ShieldStatusBuilder;
@class UnreadInfo;
@class UnreadInfoBuilder;
@class UserInfo;
@class UserInfoBuilder;
@class UserStat;
@class UserStatBuilder;
@class UserTokenInfo;
@class UserTokenInfoBuilder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface ImgroupRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface IMNormalGroupListReq : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  NSData* attachData;
  UInt32 userId;
}
- (BOOL) hasUserId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSData* attachData;

+ (IMNormalGroupListReq*) defaultInstance;
- (IMNormalGroupListReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMNormalGroupListReqBuilder*) builder;
+ (IMNormalGroupListReqBuilder*) builder;
+ (IMNormalGroupListReqBuilder*) builderWithPrototype:(IMNormalGroupListReq*) prototype;
- (IMNormalGroupListReqBuilder*) toBuilder;

+ (IMNormalGroupListReq*) parseFromData:(NSData*) data;
+ (IMNormalGroupListReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMNormalGroupListReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMNormalGroupListReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMNormalGroupListReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMNormalGroupListReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMNormalGroupListReqBuilder : PBGeneratedMessageBuilder {
@private
  IMNormalGroupListReq* result;
}

- (IMNormalGroupListReq*) defaultInstance;

- (IMNormalGroupListReqBuilder*) clear;
- (IMNormalGroupListReqBuilder*) clone;

- (IMNormalGroupListReq*) build;
- (IMNormalGroupListReq*) buildPartial;

- (IMNormalGroupListReqBuilder*) mergeFrom:(IMNormalGroupListReq*) other;
- (IMNormalGroupListReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMNormalGroupListReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMNormalGroupListReqBuilder*) setUserId:(UInt32) value;
- (IMNormalGroupListReqBuilder*) clearUserId;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMNormalGroupListReqBuilder*) setAttachData:(NSData*) value;
- (IMNormalGroupListReqBuilder*) clearAttachData;
@end

@interface IMNormalGroupListRsp : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  NSData* attachData;
  UInt32 userId;
  NSMutableArray * groupVersionListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSArray * groupVersionList;
@property (readonly, strong) NSData* attachData;
- (GroupVersionInfo*)groupVersionListAtIndex:(NSUInteger)index;

+ (IMNormalGroupListRsp*) defaultInstance;
- (IMNormalGroupListRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMNormalGroupListRspBuilder*) builder;
+ (IMNormalGroupListRspBuilder*) builder;
+ (IMNormalGroupListRspBuilder*) builderWithPrototype:(IMNormalGroupListRsp*) prototype;
- (IMNormalGroupListRspBuilder*) toBuilder;

+ (IMNormalGroupListRsp*) parseFromData:(NSData*) data;
+ (IMNormalGroupListRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMNormalGroupListRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMNormalGroupListRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMNormalGroupListRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMNormalGroupListRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMNormalGroupListRspBuilder : PBGeneratedMessageBuilder {
@private
  IMNormalGroupListRsp* result;
}

- (IMNormalGroupListRsp*) defaultInstance;

- (IMNormalGroupListRspBuilder*) clear;
- (IMNormalGroupListRspBuilder*) clone;

- (IMNormalGroupListRsp*) build;
- (IMNormalGroupListRsp*) buildPartial;

- (IMNormalGroupListRspBuilder*) mergeFrom:(IMNormalGroupListRsp*) other;
- (IMNormalGroupListRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMNormalGroupListRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMNormalGroupListRspBuilder*) setUserId:(UInt32) value;
- (IMNormalGroupListRspBuilder*) clearUserId;

- (NSMutableArray *)groupVersionList;
- (GroupVersionInfo*)groupVersionListAtIndex:(NSUInteger)index;
- (IMNormalGroupListRspBuilder *)addGroupVersionList:(GroupVersionInfo*)value;
- (IMNormalGroupListRspBuilder *)setGroupVersionListArray:(NSArray *)array;
- (IMNormalGroupListRspBuilder *)clearGroupVersionList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMNormalGroupListRspBuilder*) setAttachData:(NSData*) value;
- (IMNormalGroupListRspBuilder*) clearAttachData;
@end

@interface IMGroupInfoListReq : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  NSData* attachData;
  UInt32 userId;
  NSMutableArray * groupVersionListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSArray * groupVersionList;
@property (readonly, strong) NSData* attachData;
- (GroupVersionInfo*)groupVersionListAtIndex:(NSUInteger)index;

+ (IMGroupInfoListReq*) defaultInstance;
- (IMGroupInfoListReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupInfoListReqBuilder*) builder;
+ (IMGroupInfoListReqBuilder*) builder;
+ (IMGroupInfoListReqBuilder*) builderWithPrototype:(IMGroupInfoListReq*) prototype;
- (IMGroupInfoListReqBuilder*) toBuilder;

+ (IMGroupInfoListReq*) parseFromData:(NSData*) data;
+ (IMGroupInfoListReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupInfoListReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupInfoListReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupInfoListReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupInfoListReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupInfoListReqBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupInfoListReq* result;
}

- (IMGroupInfoListReq*) defaultInstance;

- (IMGroupInfoListReqBuilder*) clear;
- (IMGroupInfoListReqBuilder*) clone;

- (IMGroupInfoListReq*) build;
- (IMGroupInfoListReq*) buildPartial;

- (IMGroupInfoListReqBuilder*) mergeFrom:(IMGroupInfoListReq*) other;
- (IMGroupInfoListReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupInfoListReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupInfoListReqBuilder*) setUserId:(UInt32) value;
- (IMGroupInfoListReqBuilder*) clearUserId;

- (NSMutableArray *)groupVersionList;
- (GroupVersionInfo*)groupVersionListAtIndex:(NSUInteger)index;
- (IMGroupInfoListReqBuilder *)addGroupVersionList:(GroupVersionInfo*)value;
- (IMGroupInfoListReqBuilder *)setGroupVersionListArray:(NSArray *)array;
- (IMGroupInfoListReqBuilder *)clearGroupVersionList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGroupInfoListReqBuilder*) setAttachData:(NSData*) value;
- (IMGroupInfoListReqBuilder*) clearAttachData;
@end

@interface IMGroupInfoListRsp : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  NSData* attachData;
  UInt32 userId;
  NSMutableArray * groupInfoListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSArray * groupInfoList;
@property (readonly, strong) NSData* attachData;
- (GroupInfo*)groupInfoListAtIndex:(NSUInteger)index;

+ (IMGroupInfoListRsp*) defaultInstance;
- (IMGroupInfoListRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupInfoListRspBuilder*) builder;
+ (IMGroupInfoListRspBuilder*) builder;
+ (IMGroupInfoListRspBuilder*) builderWithPrototype:(IMGroupInfoListRsp*) prototype;
- (IMGroupInfoListRspBuilder*) toBuilder;

+ (IMGroupInfoListRsp*) parseFromData:(NSData*) data;
+ (IMGroupInfoListRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupInfoListRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupInfoListRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupInfoListRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupInfoListRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupInfoListRspBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupInfoListRsp* result;
}

- (IMGroupInfoListRsp*) defaultInstance;

- (IMGroupInfoListRspBuilder*) clear;
- (IMGroupInfoListRspBuilder*) clone;

- (IMGroupInfoListRsp*) build;
- (IMGroupInfoListRsp*) buildPartial;

- (IMGroupInfoListRspBuilder*) mergeFrom:(IMGroupInfoListRsp*) other;
- (IMGroupInfoListRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupInfoListRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupInfoListRspBuilder*) setUserId:(UInt32) value;
- (IMGroupInfoListRspBuilder*) clearUserId;

- (NSMutableArray *)groupInfoList;
- (GroupInfo*)groupInfoListAtIndex:(NSUInteger)index;
- (IMGroupInfoListRspBuilder *)addGroupInfoList:(GroupInfo*)value;
- (IMGroupInfoListRspBuilder *)setGroupInfoListArray:(NSArray *)array;
- (IMGroupInfoListRspBuilder *)clearGroupInfoList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGroupInfoListRspBuilder*) setAttachData:(NSData*) value;
- (IMGroupInfoListRspBuilder*) clearAttachData;
@end

@interface IMGroupCreateReq : PBGeneratedMessage {
@private
  BOOL hasGroupName_:1;
  BOOL hasGroupAvatar_:1;
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasGroupType_:1;
  NSString* groupName;
  NSString* groupAvatar;
  NSData* attachData;
  UInt32 userId;
  GroupType groupType;
  PBAppendableArray * memberIdListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasGroupType;
- (BOOL) hasGroupName;
- (BOOL) hasGroupAvatar;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) GroupType groupType;
@property (readonly, strong) NSString* groupName;
@property (readonly, strong) NSString* groupAvatar;
@property (readonly, strong) PBArray * memberIdList;
@property (readonly, strong) NSData* attachData;
- (UInt32)memberIdListAtIndex:(NSUInteger)index;

+ (IMGroupCreateReq*) defaultInstance;
- (IMGroupCreateReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupCreateReqBuilder*) builder;
+ (IMGroupCreateReqBuilder*) builder;
+ (IMGroupCreateReqBuilder*) builderWithPrototype:(IMGroupCreateReq*) prototype;
- (IMGroupCreateReqBuilder*) toBuilder;

+ (IMGroupCreateReq*) parseFromData:(NSData*) data;
+ (IMGroupCreateReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupCreateReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupCreateReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupCreateReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupCreateReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupCreateReqBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupCreateReq* result;
}

- (IMGroupCreateReq*) defaultInstance;

- (IMGroupCreateReqBuilder*) clear;
- (IMGroupCreateReqBuilder*) clone;

- (IMGroupCreateReq*) build;
- (IMGroupCreateReq*) buildPartial;

- (IMGroupCreateReqBuilder*) mergeFrom:(IMGroupCreateReq*) other;
- (IMGroupCreateReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupCreateReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupCreateReqBuilder*) setUserId:(UInt32) value;
- (IMGroupCreateReqBuilder*) clearUserId;

- (BOOL) hasGroupType;
- (GroupType) groupType;
- (IMGroupCreateReqBuilder*) setGroupType:(GroupType) value;
- (IMGroupCreateReqBuilder*) clearGroupType;

- (BOOL) hasGroupName;
- (NSString*) groupName;
- (IMGroupCreateReqBuilder*) setGroupName:(NSString*) value;
- (IMGroupCreateReqBuilder*) clearGroupName;

- (BOOL) hasGroupAvatar;
- (NSString*) groupAvatar;
- (IMGroupCreateReqBuilder*) setGroupAvatar:(NSString*) value;
- (IMGroupCreateReqBuilder*) clearGroupAvatar;

- (PBAppendableArray *)memberIdList;
- (UInt32)memberIdListAtIndex:(NSUInteger)index;
- (IMGroupCreateReqBuilder *)addMemberIdList:(UInt32)value;
- (IMGroupCreateReqBuilder *)setMemberIdListArray:(NSArray *)array;
- (IMGroupCreateReqBuilder *)setMemberIdListValues:(const UInt32 *)values count:(NSUInteger)count;
- (IMGroupCreateReqBuilder *)clearMemberIdList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGroupCreateReqBuilder*) setAttachData:(NSData*) value;
- (IMGroupCreateReqBuilder*) clearAttachData;
@end

@interface IMGroupCreateRsp : PBGeneratedMessage {
@private
  BOOL hasGroupName_:1;
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasResultCode_:1;
  BOOL hasGroupId_:1;
  NSString* groupName;
  NSData* attachData;
  UInt32 userId;
  UInt32 resultCode;
  UInt32 groupId;
  PBAppendableArray * userIdListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasResultCode;
- (BOOL) hasGroupId;
- (BOOL) hasGroupName;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 resultCode;
@property (readonly) UInt32 groupId;
@property (readonly, strong) NSString* groupName;
@property (readonly, strong) PBArray * userIdList;
@property (readonly, strong) NSData* attachData;
- (UInt32)userIdListAtIndex:(NSUInteger)index;

+ (IMGroupCreateRsp*) defaultInstance;
- (IMGroupCreateRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupCreateRspBuilder*) builder;
+ (IMGroupCreateRspBuilder*) builder;
+ (IMGroupCreateRspBuilder*) builderWithPrototype:(IMGroupCreateRsp*) prototype;
- (IMGroupCreateRspBuilder*) toBuilder;

+ (IMGroupCreateRsp*) parseFromData:(NSData*) data;
+ (IMGroupCreateRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupCreateRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupCreateRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupCreateRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupCreateRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupCreateRspBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupCreateRsp* result;
}

- (IMGroupCreateRsp*) defaultInstance;

- (IMGroupCreateRspBuilder*) clear;
- (IMGroupCreateRspBuilder*) clone;

- (IMGroupCreateRsp*) build;
- (IMGroupCreateRsp*) buildPartial;

- (IMGroupCreateRspBuilder*) mergeFrom:(IMGroupCreateRsp*) other;
- (IMGroupCreateRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupCreateRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupCreateRspBuilder*) setUserId:(UInt32) value;
- (IMGroupCreateRspBuilder*) clearUserId;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMGroupCreateRspBuilder*) setResultCode:(UInt32) value;
- (IMGroupCreateRspBuilder*) clearResultCode;

- (BOOL) hasGroupId;
- (UInt32) groupId;
- (IMGroupCreateRspBuilder*) setGroupId:(UInt32) value;
- (IMGroupCreateRspBuilder*) clearGroupId;

- (BOOL) hasGroupName;
- (NSString*) groupName;
- (IMGroupCreateRspBuilder*) setGroupName:(NSString*) value;
- (IMGroupCreateRspBuilder*) clearGroupName;

- (PBAppendableArray *)userIdList;
- (UInt32)userIdListAtIndex:(NSUInteger)index;
- (IMGroupCreateRspBuilder *)addUserIdList:(UInt32)value;
- (IMGroupCreateRspBuilder *)setUserIdListArray:(NSArray *)array;
- (IMGroupCreateRspBuilder *)setUserIdListValues:(const UInt32 *)values count:(NSUInteger)count;
- (IMGroupCreateRspBuilder *)clearUserIdList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGroupCreateRspBuilder*) setAttachData:(NSData*) value;
- (IMGroupCreateRspBuilder*) clearAttachData;
@end

@interface IMGroupChangeMemberReq : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasGroupId_:1;
  BOOL hasChangeType_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 groupId;
  GroupModifyType changeType;
  PBAppendableArray * memberIdListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasChangeType;
- (BOOL) hasGroupId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) GroupModifyType changeType;
@property (readonly) UInt32 groupId;
@property (readonly, strong) PBArray * memberIdList;
@property (readonly, strong) NSData* attachData;
- (UInt32)memberIdListAtIndex:(NSUInteger)index;

+ (IMGroupChangeMemberReq*) defaultInstance;
- (IMGroupChangeMemberReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupChangeMemberReqBuilder*) builder;
+ (IMGroupChangeMemberReqBuilder*) builder;
+ (IMGroupChangeMemberReqBuilder*) builderWithPrototype:(IMGroupChangeMemberReq*) prototype;
- (IMGroupChangeMemberReqBuilder*) toBuilder;

+ (IMGroupChangeMemberReq*) parseFromData:(NSData*) data;
+ (IMGroupChangeMemberReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupChangeMemberReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupChangeMemberReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupChangeMemberReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupChangeMemberReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupChangeMemberReqBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupChangeMemberReq* result;
}

- (IMGroupChangeMemberReq*) defaultInstance;

- (IMGroupChangeMemberReqBuilder*) clear;
- (IMGroupChangeMemberReqBuilder*) clone;

- (IMGroupChangeMemberReq*) build;
- (IMGroupChangeMemberReq*) buildPartial;

- (IMGroupChangeMemberReqBuilder*) mergeFrom:(IMGroupChangeMemberReq*) other;
- (IMGroupChangeMemberReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupChangeMemberReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupChangeMemberReqBuilder*) setUserId:(UInt32) value;
- (IMGroupChangeMemberReqBuilder*) clearUserId;

- (BOOL) hasChangeType;
- (GroupModifyType) changeType;
- (IMGroupChangeMemberReqBuilder*) setChangeType:(GroupModifyType) value;
- (IMGroupChangeMemberReqBuilder*) clearChangeType;

- (BOOL) hasGroupId;
- (UInt32) groupId;
- (IMGroupChangeMemberReqBuilder*) setGroupId:(UInt32) value;
- (IMGroupChangeMemberReqBuilder*) clearGroupId;

- (PBAppendableArray *)memberIdList;
- (UInt32)memberIdListAtIndex:(NSUInteger)index;
- (IMGroupChangeMemberReqBuilder *)addMemberIdList:(UInt32)value;
- (IMGroupChangeMemberReqBuilder *)setMemberIdListArray:(NSArray *)array;
- (IMGroupChangeMemberReqBuilder *)setMemberIdListValues:(const UInt32 *)values count:(NSUInteger)count;
- (IMGroupChangeMemberReqBuilder *)clearMemberIdList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGroupChangeMemberReqBuilder*) setAttachData:(NSData*) value;
- (IMGroupChangeMemberReqBuilder*) clearAttachData;
@end

@interface IMGroupChangeMemberRsp : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasResultCode_:1;
  BOOL hasGroupId_:1;
  BOOL hasChangeType_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 resultCode;
  UInt32 groupId;
  GroupModifyType changeType;
  PBAppendableArray * curUserIdListArray;
  PBAppendableArray * chgUserIdListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasChangeType;
- (BOOL) hasResultCode;
- (BOOL) hasGroupId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) GroupModifyType changeType;
@property (readonly) UInt32 resultCode;
@property (readonly) UInt32 groupId;
@property (readonly, strong) PBArray * curUserIdList;
@property (readonly, strong) PBArray * chgUserIdList;
@property (readonly, strong) NSData* attachData;
- (UInt32)curUserIdListAtIndex:(NSUInteger)index;
- (UInt32)chgUserIdListAtIndex:(NSUInteger)index;

+ (IMGroupChangeMemberRsp*) defaultInstance;
- (IMGroupChangeMemberRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupChangeMemberRspBuilder*) builder;
+ (IMGroupChangeMemberRspBuilder*) builder;
+ (IMGroupChangeMemberRspBuilder*) builderWithPrototype:(IMGroupChangeMemberRsp*) prototype;
- (IMGroupChangeMemberRspBuilder*) toBuilder;

+ (IMGroupChangeMemberRsp*) parseFromData:(NSData*) data;
+ (IMGroupChangeMemberRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupChangeMemberRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupChangeMemberRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupChangeMemberRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupChangeMemberRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupChangeMemberRspBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupChangeMemberRsp* result;
}

- (IMGroupChangeMemberRsp*) defaultInstance;

- (IMGroupChangeMemberRspBuilder*) clear;
- (IMGroupChangeMemberRspBuilder*) clone;

- (IMGroupChangeMemberRsp*) build;
- (IMGroupChangeMemberRsp*) buildPartial;

- (IMGroupChangeMemberRspBuilder*) mergeFrom:(IMGroupChangeMemberRsp*) other;
- (IMGroupChangeMemberRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupChangeMemberRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupChangeMemberRspBuilder*) setUserId:(UInt32) value;
- (IMGroupChangeMemberRspBuilder*) clearUserId;

- (BOOL) hasChangeType;
- (GroupModifyType) changeType;
- (IMGroupChangeMemberRspBuilder*) setChangeType:(GroupModifyType) value;
- (IMGroupChangeMemberRspBuilder*) clearChangeType;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMGroupChangeMemberRspBuilder*) setResultCode:(UInt32) value;
- (IMGroupChangeMemberRspBuilder*) clearResultCode;

- (BOOL) hasGroupId;
- (UInt32) groupId;
- (IMGroupChangeMemberRspBuilder*) setGroupId:(UInt32) value;
- (IMGroupChangeMemberRspBuilder*) clearGroupId;

- (PBAppendableArray *)curUserIdList;
- (UInt32)curUserIdListAtIndex:(NSUInteger)index;
- (IMGroupChangeMemberRspBuilder *)addCurUserIdList:(UInt32)value;
- (IMGroupChangeMemberRspBuilder *)setCurUserIdListArray:(NSArray *)array;
- (IMGroupChangeMemberRspBuilder *)setCurUserIdListValues:(const UInt32 *)values count:(NSUInteger)count;
- (IMGroupChangeMemberRspBuilder *)clearCurUserIdList;

- (PBAppendableArray *)chgUserIdList;
- (UInt32)chgUserIdListAtIndex:(NSUInteger)index;
- (IMGroupChangeMemberRspBuilder *)addChgUserIdList:(UInt32)value;
- (IMGroupChangeMemberRspBuilder *)setChgUserIdListArray:(NSArray *)array;
- (IMGroupChangeMemberRspBuilder *)setChgUserIdListValues:(const UInt32 *)values count:(NSUInteger)count;
- (IMGroupChangeMemberRspBuilder *)clearChgUserIdList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGroupChangeMemberRspBuilder*) setAttachData:(NSData*) value;
- (IMGroupChangeMemberRspBuilder*) clearAttachData;
@end

@interface IMGroupShieldReq : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasGroupId_:1;
  BOOL hasShieldStatus_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 groupId;
  UInt32 shieldStatus;
}
- (BOOL) hasUserId;
- (BOOL) hasGroupId;
- (BOOL) hasShieldStatus;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 groupId;
@property (readonly) UInt32 shieldStatus;
@property (readonly, strong) NSData* attachData;

+ (IMGroupShieldReq*) defaultInstance;
- (IMGroupShieldReq*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupShieldReqBuilder*) builder;
+ (IMGroupShieldReqBuilder*) builder;
+ (IMGroupShieldReqBuilder*) builderWithPrototype:(IMGroupShieldReq*) prototype;
- (IMGroupShieldReqBuilder*) toBuilder;

+ (IMGroupShieldReq*) parseFromData:(NSData*) data;
+ (IMGroupShieldReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupShieldReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupShieldReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupShieldReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupShieldReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupShieldReqBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupShieldReq* result;
}

- (IMGroupShieldReq*) defaultInstance;

- (IMGroupShieldReqBuilder*) clear;
- (IMGroupShieldReqBuilder*) clone;

- (IMGroupShieldReq*) build;
- (IMGroupShieldReq*) buildPartial;

- (IMGroupShieldReqBuilder*) mergeFrom:(IMGroupShieldReq*) other;
- (IMGroupShieldReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupShieldReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupShieldReqBuilder*) setUserId:(UInt32) value;
- (IMGroupShieldReqBuilder*) clearUserId;

- (BOOL) hasGroupId;
- (UInt32) groupId;
- (IMGroupShieldReqBuilder*) setGroupId:(UInt32) value;
- (IMGroupShieldReqBuilder*) clearGroupId;

- (BOOL) hasShieldStatus;
- (UInt32) shieldStatus;
- (IMGroupShieldReqBuilder*) setShieldStatus:(UInt32) value;
- (IMGroupShieldReqBuilder*) clearShieldStatus;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGroupShieldReqBuilder*) setAttachData:(NSData*) value;
- (IMGroupShieldReqBuilder*) clearAttachData;
@end

@interface IMGroupShieldRsp : PBGeneratedMessage {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  BOOL hasGroupId_:1;
  BOOL hasResultCode_:1;
  NSData* attachData;
  UInt32 userId;
  UInt32 groupId;
  UInt32 resultCode;
}
- (BOOL) hasUserId;
- (BOOL) hasGroupId;
- (BOOL) hasResultCode;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 groupId;
@property (readonly) UInt32 resultCode;
@property (readonly, strong) NSData* attachData;

+ (IMGroupShieldRsp*) defaultInstance;
- (IMGroupShieldRsp*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupShieldRspBuilder*) builder;
+ (IMGroupShieldRspBuilder*) builder;
+ (IMGroupShieldRspBuilder*) builderWithPrototype:(IMGroupShieldRsp*) prototype;
- (IMGroupShieldRspBuilder*) toBuilder;

+ (IMGroupShieldRsp*) parseFromData:(NSData*) data;
+ (IMGroupShieldRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupShieldRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupShieldRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupShieldRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupShieldRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupShieldRspBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupShieldRsp* result;
}

- (IMGroupShieldRsp*) defaultInstance;

- (IMGroupShieldRspBuilder*) clear;
- (IMGroupShieldRspBuilder*) clone;

- (IMGroupShieldRsp*) build;
- (IMGroupShieldRsp*) buildPartial;

- (IMGroupShieldRspBuilder*) mergeFrom:(IMGroupShieldRsp*) other;
- (IMGroupShieldRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupShieldRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupShieldRspBuilder*) setUserId:(UInt32) value;
- (IMGroupShieldRspBuilder*) clearUserId;

- (BOOL) hasGroupId;
- (UInt32) groupId;
- (IMGroupShieldRspBuilder*) setGroupId:(UInt32) value;
- (IMGroupShieldRspBuilder*) clearGroupId;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMGroupShieldRspBuilder*) setResultCode:(UInt32) value;
- (IMGroupShieldRspBuilder*) clearResultCode;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMGroupShieldRspBuilder*) setAttachData:(NSData*) value;
- (IMGroupShieldRspBuilder*) clearAttachData;
@end

@interface IMGroupChangeMemberNotify : PBGeneratedMessage {
@private
  BOOL hasUserId_:1;
  BOOL hasGroupId_:1;
  BOOL hasChangeType_:1;
  UInt32 userId;
  UInt32 groupId;
  GroupModifyType changeType;
  PBAppendableArray * curUserIdListArray;
  PBAppendableArray * chgUserIdListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasChangeType;
- (BOOL) hasGroupId;
@property (readonly) UInt32 userId;
@property (readonly) GroupModifyType changeType;
@property (readonly) UInt32 groupId;
@property (readonly, strong) PBArray * curUserIdList;
@property (readonly, strong) PBArray * chgUserIdList;
- (UInt32)curUserIdListAtIndex:(NSUInteger)index;
- (UInt32)chgUserIdListAtIndex:(NSUInteger)index;

+ (IMGroupChangeMemberNotify*) defaultInstance;
- (IMGroupChangeMemberNotify*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMGroupChangeMemberNotifyBuilder*) builder;
+ (IMGroupChangeMemberNotifyBuilder*) builder;
+ (IMGroupChangeMemberNotifyBuilder*) builderWithPrototype:(IMGroupChangeMemberNotify*) prototype;
- (IMGroupChangeMemberNotifyBuilder*) toBuilder;

+ (IMGroupChangeMemberNotify*) parseFromData:(NSData*) data;
+ (IMGroupChangeMemberNotify*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupChangeMemberNotify*) parseFromInputStream:(NSInputStream*) input;
+ (IMGroupChangeMemberNotify*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMGroupChangeMemberNotify*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMGroupChangeMemberNotify*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMGroupChangeMemberNotifyBuilder : PBGeneratedMessageBuilder {
@private
  IMGroupChangeMemberNotify* result;
}

- (IMGroupChangeMemberNotify*) defaultInstance;

- (IMGroupChangeMemberNotifyBuilder*) clear;
- (IMGroupChangeMemberNotifyBuilder*) clone;

- (IMGroupChangeMemberNotify*) build;
- (IMGroupChangeMemberNotify*) buildPartial;

- (IMGroupChangeMemberNotifyBuilder*) mergeFrom:(IMGroupChangeMemberNotify*) other;
- (IMGroupChangeMemberNotifyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMGroupChangeMemberNotifyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMGroupChangeMemberNotifyBuilder*) setUserId:(UInt32) value;
- (IMGroupChangeMemberNotifyBuilder*) clearUserId;

- (BOOL) hasChangeType;
- (GroupModifyType) changeType;
- (IMGroupChangeMemberNotifyBuilder*) setChangeType:(GroupModifyType) value;
- (IMGroupChangeMemberNotifyBuilder*) clearChangeType;

- (BOOL) hasGroupId;
- (UInt32) groupId;
- (IMGroupChangeMemberNotifyBuilder*) setGroupId:(UInt32) value;
- (IMGroupChangeMemberNotifyBuilder*) clearGroupId;

- (PBAppendableArray *)curUserIdList;
- (UInt32)curUserIdListAtIndex:(NSUInteger)index;
- (IMGroupChangeMemberNotifyBuilder *)addCurUserIdList:(UInt32)value;
- (IMGroupChangeMemberNotifyBuilder *)setCurUserIdListArray:(NSArray *)array;
- (IMGroupChangeMemberNotifyBuilder *)setCurUserIdListValues:(const UInt32 *)values count:(NSUInteger)count;
- (IMGroupChangeMemberNotifyBuilder *)clearCurUserIdList;

- (PBAppendableArray *)chgUserIdList;
- (UInt32)chgUserIdListAtIndex:(NSUInteger)index;
- (IMGroupChangeMemberNotifyBuilder *)addChgUserIdList:(UInt32)value;
- (IMGroupChangeMemberNotifyBuilder *)setChgUserIdListArray:(NSArray *)array;
- (IMGroupChangeMemberNotifyBuilder *)setChgUserIdListValues:(const UInt32 *)values count:(NSUInteger)count;
- (IMGroupChangeMemberNotifyBuilder *)clearChgUserIdList;
@end


// @@protoc_insertion_point(global_scope)
