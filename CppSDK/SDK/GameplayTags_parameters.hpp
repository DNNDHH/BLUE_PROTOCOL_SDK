#pragma once

 

// Package: GameplayTags

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// 0x0028 (0x0028 - 0x0000)
struct BlueprintGameplayTagLibrary_AddGameplayTag final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0020(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_AddGameplayTag) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_AddGameplayTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_AddGameplayTag) == 0x000028, "Wrong size on BlueprintGameplayTagLibrary_AddGameplayTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_AddGameplayTag, TagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_AddGameplayTag::TagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_AddGameplayTag, Tag) == 0x000020, "Member 'BlueprintGameplayTagLibrary_AddGameplayTag::Tag' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// 0x0040 (0x0040 - 0x0000)
struct BlueprintGameplayTagLibrary_AppendGameplayTagContainers final
{
public:
	struct FGameplayTagContainer                  InOutTagContainer;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  InTagContainer;                                    // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_AppendGameplayTagContainers) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_AppendGameplayTagContainers");
static_assert(sizeof(BlueprintGameplayTagLibrary_AppendGameplayTagContainers) == 0x000040, "Wrong size on BlueprintGameplayTagLibrary_AppendGameplayTagContainers");
static_assert(offsetof(BlueprintGameplayTagLibrary_AppendGameplayTagContainers, InOutTagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_AppendGameplayTagContainers::InOutTagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_AppendGameplayTagContainers, InTagContainer) == 0x000020, "Member 'BlueprintGameplayTagLibrary_AppendGameplayTagContainers::InTagContainer' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_BreakGameplayTagContainer final
{
public:
	struct FGameplayTagContainer                  GameplayTagContainer;                              // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                   GameplayTags;                                      // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_BreakGameplayTagContainer) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_BreakGameplayTagContainer");
static_assert(sizeof(BlueprintGameplayTagLibrary_BreakGameplayTagContainer) == 0x000030, "Wrong size on BlueprintGameplayTagLibrary_BreakGameplayTagContainer");
static_assert(offsetof(BlueprintGameplayTagLibrary_BreakGameplayTagContainer, GameplayTagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_BreakGameplayTagContainer::GameplayTagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_BreakGameplayTagContainer, GameplayTags) == 0x000020, "Member 'BlueprintGameplayTagLibrary_BreakGameplayTagContainer::GameplayTags' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// 0x0070 (0x0070 - 0x0000)
struct BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      TagQuery;                                          // 0x0020(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4154[0x7];                                     // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery");
static_assert(sizeof(BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery) == 0x000070, "Wrong size on BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery");
static_assert(offsetof(BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery, TagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery::TagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery, TagQuery) == 0x000020, "Member 'BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery::TagQuery' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery, ReturnValue) == 0x000068, "Member 'BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// 0x0020 (0x0020 - 0x0000)
struct BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag final
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0010(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4155[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag) == 0x000020, "Wrong size on BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag, TagContainerInterface) == 0x000000, "Member 'BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag::TagContainerInterface' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag, Tag) == 0x000010, "Member 'BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag::Tag' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag, ReturnValue) == 0x000018, "Member 'BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// 0x0014 (0x0014 - 0x0000)
struct BlueprintGameplayTagLibrary_EqualEqual_GameplayTag final
{
public:
	struct FGameplayTag                           A;                                                 // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           B;                                                 // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4156[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTag) == 0x000004, "Wrong alignment on BlueprintGameplayTagLibrary_EqualEqual_GameplayTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTag) == 0x000014, "Wrong size on BlueprintGameplayTagLibrary_EqualEqual_GameplayTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTag, A) == 0x000000, "Member 'BlueprintGameplayTagLibrary_EqualEqual_GameplayTag::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTag, B) == 0x000008, "Member 'BlueprintGameplayTagLibrary_EqualEqual_GameplayTag::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTag, ReturnValue) == 0x000010, "Member 'BlueprintGameplayTagLibrary_EqualEqual_GameplayTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// 0x0048 (0x0048 - 0x0000)
struct BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer final
{
public:
	struct FGameplayTagContainer                  A;                                                 // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  B;                                                 // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4157[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer");
static_assert(sizeof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer) == 0x000048, "Wrong size on BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer");
static_assert(offsetof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer, A) == 0x000000, "Member 'BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer, B) == 0x000020, "Member 'BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer, ReturnValue) == 0x000040, "Member 'BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// 0x0068 (0x0068 - 0x0000)
struct BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     ActorClass;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      GameplayTagQuery;                                  // 0x0010(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         OutActors;                                         // 0x0058(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery");
static_assert(sizeof(BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery) == 0x000068, "Wrong size on BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery, WorldContextObject) == 0x000000, "Member 'BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery, ActorClass) == 0x000008, "Member 'BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery::ActorClass' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery, GameplayTagQuery) == 0x000010, "Member 'BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery::GameplayTagQuery' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery, OutActors) == 0x000058, "Member 'BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery::OutActors' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// 0x0018 (0x0018 - 0x0000)
struct BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag) == 0x000018, "Wrong size on BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag, GameplayTag) == 0x000000, "Member 'BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag::GameplayTag' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag, ReturnValue) == 0x000008, "Member 'BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer");
static_assert(sizeof(BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer) == 0x000030, "Wrong size on BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer, TagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer::TagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer, ReturnValue) == 0x000020, "Member 'BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// 0x0028 (0x0028 - 0x0000)
struct BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4158[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer");
static_assert(sizeof(BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer) == 0x000028, "Wrong size on BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer, TagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer::TagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer, ReturnValue) == 0x000020, "Member 'BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// 0x0010 (0x0010 - 0x0000)
struct BlueprintGameplayTagLibrary_GetTagName final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_GetTagName) == 0x000004, "Wrong alignment on BlueprintGameplayTagLibrary_GetTagName");
static_assert(sizeof(BlueprintGameplayTagLibrary_GetTagName) == 0x000010, "Wrong size on BlueprintGameplayTagLibrary_GetTagName");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetTagName, GameplayTag) == 0x000000, "Member 'BlueprintGameplayTagLibrary_GetTagName::GameplayTag' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_GetTagName, ReturnValue) == 0x000008, "Member 'BlueprintGameplayTagLibrary_GetTagName::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// 0x0038 (0x0038 - 0x0000)
struct BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags final
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  OtherContainer;                                    // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4159[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags");
static_assert(sizeof(BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags) == 0x000038, "Wrong size on BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags, TagContainerInterface) == 0x000000, "Member 'BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags::TagContainerInterface' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags, OtherContainer) == 0x000010, "Member 'BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags::OtherContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags, ReturnValue) == 0x000030, "Member 'BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// 0x0048 (0x0048 - 0x0000)
struct BlueprintGameplayTagLibrary_HasAllTags final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  OtherContainer;                                    // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0040(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0041(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_415A[0x6];                                     // 0x0042(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_HasAllTags) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_HasAllTags");
static_assert(sizeof(BlueprintGameplayTagLibrary_HasAllTags) == 0x000048, "Wrong size on BlueprintGameplayTagLibrary_HasAllTags");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAllTags, TagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_HasAllTags::TagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAllTags, OtherContainer) == 0x000020, "Member 'BlueprintGameplayTagLibrary_HasAllTags::OtherContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAllTags, bExactMatch) == 0x000040, "Member 'BlueprintGameplayTagLibrary_HasAllTags::bExactMatch' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAllTags, ReturnValue) == 0x000041, "Member 'BlueprintGameplayTagLibrary_HasAllTags::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// 0x0048 (0x0048 - 0x0000)
struct BlueprintGameplayTagLibrary_HasAnyTags final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  OtherContainer;                                    // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0040(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0041(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_415B[0x6];                                     // 0x0042(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_HasAnyTags) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_HasAnyTags");
static_assert(sizeof(BlueprintGameplayTagLibrary_HasAnyTags) == 0x000048, "Wrong size on BlueprintGameplayTagLibrary_HasAnyTags");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAnyTags, TagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_HasAnyTags::TagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAnyTags, OtherContainer) == 0x000020, "Member 'BlueprintGameplayTagLibrary_HasAnyTags::OtherContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAnyTags, bExactMatch) == 0x000040, "Member 'BlueprintGameplayTagLibrary_HasAnyTags::bExactMatch' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasAnyTags, ReturnValue) == 0x000041, "Member 'BlueprintGameplayTagLibrary_HasAnyTags::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_HasTag final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0020(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0029(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_415C[0x6];                                     // 0x002A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_HasTag) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_HasTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_HasTag) == 0x000030, "Wrong size on BlueprintGameplayTagLibrary_HasTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasTag, TagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_HasTag::TagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasTag, Tag) == 0x000020, "Member 'BlueprintGameplayTagLibrary_HasTag::Tag' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasTag, bExactMatch) == 0x000028, "Member 'BlueprintGameplayTagLibrary_HasTag::bExactMatch' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_HasTag, ReturnValue) == 0x000029, "Member 'BlueprintGameplayTagLibrary_HasTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// 0x000C (0x000C - 0x0000)
struct BlueprintGameplayTagLibrary_IsGameplayTagValid final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_415D[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_IsGameplayTagValid) == 0x000004, "Wrong alignment on BlueprintGameplayTagLibrary_IsGameplayTagValid");
static_assert(sizeof(BlueprintGameplayTagLibrary_IsGameplayTagValid) == 0x00000C, "Wrong size on BlueprintGameplayTagLibrary_IsGameplayTagValid");
static_assert(offsetof(BlueprintGameplayTagLibrary_IsGameplayTagValid, GameplayTag) == 0x000000, "Member 'BlueprintGameplayTagLibrary_IsGameplayTagValid::GameplayTag' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_IsGameplayTagValid, ReturnValue) == 0x000008, "Member 'BlueprintGameplayTagLibrary_IsGameplayTagValid::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
// 0x0050 (0x0050 - 0x0000)
struct BlueprintGameplayTagLibrary_IsTagQueryEmpty final
{
public:
	struct FGameplayTagQuery                      TagQuery;                                          // 0x0000(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_415E[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_IsTagQueryEmpty) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_IsTagQueryEmpty");
static_assert(sizeof(BlueprintGameplayTagLibrary_IsTagQueryEmpty) == 0x000050, "Wrong size on BlueprintGameplayTagLibrary_IsTagQueryEmpty");
static_assert(offsetof(BlueprintGameplayTagLibrary_IsTagQueryEmpty, TagQuery) == 0x000000, "Member 'BlueprintGameplayTagLibrary_IsTagQueryEmpty::TagQuery' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_IsTagQueryEmpty, ReturnValue) == 0x000048, "Member 'BlueprintGameplayTagLibrary_IsTagQueryEmpty::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray final
{
public:
	TArray<struct FGameplayTag>                   GameplayTags;                                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ReturnValue;                                       // 0x0010(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray");
static_assert(sizeof(BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray) == 0x000030, "Wrong size on BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray, GameplayTags) == 0x000000, "Member 'BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray::GameplayTags' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray, ReturnValue) == 0x000010, "Member 'BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// 0x0028 (0x0028 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag final
{
public:
	struct FGameplayTag                           SingleTag;                                         // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ReturnValue;                                       // 0x0008(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag) == 0x000028, "Wrong size on BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag, SingleTag) == 0x000000, "Member 'BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag::SingleTag' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag, ReturnValue) == 0x000008, "Member 'BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// 0x0090 (0x0090 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeGameplayTagQuery final
{
public:
	struct FGameplayTagQuery                      TagQuery;                                          // 0x0000(0x0048)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      ReturnValue;                                       // 0x0048(0x0048)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_MakeGameplayTagQuery) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_MakeGameplayTagQuery");
static_assert(sizeof(BlueprintGameplayTagLibrary_MakeGameplayTagQuery) == 0x000090, "Wrong size on BlueprintGameplayTagLibrary_MakeGameplayTagQuery");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeGameplayTagQuery, TagQuery) == 0x000000, "Member 'BlueprintGameplayTagLibrary_MakeGameplayTagQuery::TagQuery' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeGameplayTagQuery, ReturnValue) == 0x000048, "Member 'BlueprintGameplayTagLibrary_MakeGameplayTagQuery::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// 0x0010 (0x0010 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeLiteralGameplayTag final
{
public:
	struct FGameplayTag                           Value;                                             // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_MakeLiteralGameplayTag) == 0x000004, "Wrong alignment on BlueprintGameplayTagLibrary_MakeLiteralGameplayTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_MakeLiteralGameplayTag) == 0x000010, "Wrong size on BlueprintGameplayTagLibrary_MakeLiteralGameplayTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeLiteralGameplayTag, Value) == 0x000000, "Member 'BlueprintGameplayTagLibrary_MakeLiteralGameplayTag::Value' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeLiteralGameplayTag, ReturnValue) == 0x000008, "Member 'BlueprintGameplayTagLibrary_MakeLiteralGameplayTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// 0x0040 (0x0040 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer final
{
public:
	struct FGameplayTagContainer                  Value;                                             // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer");
static_assert(sizeof(BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer) == 0x000040, "Wrong size on BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer, Value) == 0x000000, "Member 'BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer::Value' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer, ReturnValue) == 0x000020, "Member 'BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_MatchesAnyTags final
{
public:
	struct FGameplayTag                           TagOne;                                            // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  OtherContainer;                                    // 0x0008(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0029(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_415F[0x6];                                     // 0x002A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_MatchesAnyTags) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_MatchesAnyTags");
static_assert(sizeof(BlueprintGameplayTagLibrary_MatchesAnyTags) == 0x000030, "Wrong size on BlueprintGameplayTagLibrary_MatchesAnyTags");
static_assert(offsetof(BlueprintGameplayTagLibrary_MatchesAnyTags, TagOne) == 0x000000, "Member 'BlueprintGameplayTagLibrary_MatchesAnyTags::TagOne' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MatchesAnyTags, OtherContainer) == 0x000008, "Member 'BlueprintGameplayTagLibrary_MatchesAnyTags::OtherContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MatchesAnyTags, bExactMatch) == 0x000028, "Member 'BlueprintGameplayTagLibrary_MatchesAnyTags::bExactMatch' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MatchesAnyTags, ReturnValue) == 0x000029, "Member 'BlueprintGameplayTagLibrary_MatchesAnyTags::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// 0x0014 (0x0014 - 0x0000)
struct BlueprintGameplayTagLibrary_MatchesTag final
{
public:
	struct FGameplayTag                           TagOne;                                            // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           TagTwo;                                            // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4160[0x2];                                     // 0x0012(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_MatchesTag) == 0x000004, "Wrong alignment on BlueprintGameplayTagLibrary_MatchesTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_MatchesTag) == 0x000014, "Wrong size on BlueprintGameplayTagLibrary_MatchesTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_MatchesTag, TagOne) == 0x000000, "Member 'BlueprintGameplayTagLibrary_MatchesTag::TagOne' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MatchesTag, TagTwo) == 0x000008, "Member 'BlueprintGameplayTagLibrary_MatchesTag::TagTwo' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MatchesTag, bExactMatch) == 0x000010, "Member 'BlueprintGameplayTagLibrary_MatchesTag::bExactMatch' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_MatchesTag, ReturnValue) == 0x000011, "Member 'BlueprintGameplayTagLibrary_MatchesTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// 0x0014 (0x0014 - 0x0000)
struct BlueprintGameplayTagLibrary_NotEqual_GameplayTag final
{
public:
	struct FGameplayTag                           A;                                                 // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           B;                                                 // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4161[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_NotEqual_GameplayTag) == 0x000004, "Wrong alignment on BlueprintGameplayTagLibrary_NotEqual_GameplayTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_NotEqual_GameplayTag) == 0x000014, "Wrong size on BlueprintGameplayTagLibrary_NotEqual_GameplayTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_GameplayTag, A) == 0x000000, "Member 'BlueprintGameplayTagLibrary_NotEqual_GameplayTag::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_GameplayTag, B) == 0x000008, "Member 'BlueprintGameplayTagLibrary_NotEqual_GameplayTag::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_GameplayTag, ReturnValue) == 0x000010, "Member 'BlueprintGameplayTagLibrary_NotEqual_GameplayTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// 0x0048 (0x0048 - 0x0000)
struct BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer final
{
public:
	struct FGameplayTagContainer                  A;                                                 // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  B;                                                 // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4162[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer");
static_assert(sizeof(BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer) == 0x000048, "Wrong size on BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer, A) == 0x000000, "Member 'BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer, B) == 0x000020, "Member 'BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer, ReturnValue) == 0x000040, "Member 'BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// 0x0038 (0x0038 - 0x0000)
struct BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer final
{
public:
	struct FGameplayTagContainer                  A;                                                 // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	class FString                                 B;                                                 // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4163[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer");
static_assert(sizeof(BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer) == 0x000038, "Wrong size on BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer, A) == 0x000000, "Member 'BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer, B) == 0x000020, "Member 'BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer, ReturnValue) == 0x000030, "Member 'BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// 0x0020 (0x0020 - 0x0000)
struct BlueprintGameplayTagLibrary_NotEqual_TagTag final
{
public:
	struct FGameplayTag                           A;                                                 // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 B;                                                 // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4164[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_NotEqual_TagTag) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_NotEqual_TagTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_NotEqual_TagTag) == 0x000020, "Wrong size on BlueprintGameplayTagLibrary_NotEqual_TagTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_TagTag, A) == 0x000000, "Member 'BlueprintGameplayTagLibrary_NotEqual_TagTag::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_TagTag, B) == 0x000008, "Member 'BlueprintGameplayTagLibrary_NotEqual_TagTag::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_NotEqual_TagTag, ReturnValue) == 0x000018, "Member 'BlueprintGameplayTagLibrary_NotEqual_TagTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_RemoveGameplayTag final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0020(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4165[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayTagLibrary_RemoveGameplayTag) == 0x000008, "Wrong alignment on BlueprintGameplayTagLibrary_RemoveGameplayTag");
static_assert(sizeof(BlueprintGameplayTagLibrary_RemoveGameplayTag) == 0x000030, "Wrong size on BlueprintGameplayTagLibrary_RemoveGameplayTag");
static_assert(offsetof(BlueprintGameplayTagLibrary_RemoveGameplayTag, TagContainer) == 0x000000, "Member 'BlueprintGameplayTagLibrary_RemoveGameplayTag::TagContainer' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_RemoveGameplayTag, Tag) == 0x000020, "Member 'BlueprintGameplayTagLibrary_RemoveGameplayTag::Tag' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayTagLibrary_RemoveGameplayTag, ReturnValue) == 0x000028, "Member 'BlueprintGameplayTagLibrary_RemoveGameplayTag::ReturnValue' has a wrong offset!");

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// 0x0020 (0x0020 - 0x0000)
struct GameplayTagAssetInterface_GetOwnedGameplayTags final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayTagAssetInterface_GetOwnedGameplayTags) == 0x000008, "Wrong alignment on GameplayTagAssetInterface_GetOwnedGameplayTags");
static_assert(sizeof(GameplayTagAssetInterface_GetOwnedGameplayTags) == 0x000020, "Wrong size on GameplayTagAssetInterface_GetOwnedGameplayTags");
static_assert(offsetof(GameplayTagAssetInterface_GetOwnedGameplayTags, TagContainer) == 0x000000, "Member 'GameplayTagAssetInterface_GetOwnedGameplayTags::TagContainer' has a wrong offset!");

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// 0x0028 (0x0028 - 0x0000)
struct GameplayTagAssetInterface_HasAllMatchingGameplayTags final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4166[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayTagAssetInterface_HasAllMatchingGameplayTags) == 0x000008, "Wrong alignment on GameplayTagAssetInterface_HasAllMatchingGameplayTags");
static_assert(sizeof(GameplayTagAssetInterface_HasAllMatchingGameplayTags) == 0x000028, "Wrong size on GameplayTagAssetInterface_HasAllMatchingGameplayTags");
static_assert(offsetof(GameplayTagAssetInterface_HasAllMatchingGameplayTags, TagContainer) == 0x000000, "Member 'GameplayTagAssetInterface_HasAllMatchingGameplayTags::TagContainer' has a wrong offset!");
static_assert(offsetof(GameplayTagAssetInterface_HasAllMatchingGameplayTags, ReturnValue) == 0x000020, "Member 'GameplayTagAssetInterface_HasAllMatchingGameplayTags::ReturnValue' has a wrong offset!");

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// 0x0028 (0x0028 - 0x0000)
struct GameplayTagAssetInterface_HasAnyMatchingGameplayTags final
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4167[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayTagAssetInterface_HasAnyMatchingGameplayTags) == 0x000008, "Wrong alignment on GameplayTagAssetInterface_HasAnyMatchingGameplayTags");
static_assert(sizeof(GameplayTagAssetInterface_HasAnyMatchingGameplayTags) == 0x000028, "Wrong size on GameplayTagAssetInterface_HasAnyMatchingGameplayTags");
static_assert(offsetof(GameplayTagAssetInterface_HasAnyMatchingGameplayTags, TagContainer) == 0x000000, "Member 'GameplayTagAssetInterface_HasAnyMatchingGameplayTags::TagContainer' has a wrong offset!");
static_assert(offsetof(GameplayTagAssetInterface_HasAnyMatchingGameplayTags, ReturnValue) == 0x000020, "Member 'GameplayTagAssetInterface_HasAnyMatchingGameplayTags::ReturnValue' has a wrong offset!");

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// 0x000C (0x000C - 0x0000)
struct GameplayTagAssetInterface_HasMatchingGameplayTag final
{
public:
	struct FGameplayTag                           TagToCheck;                                        // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4168[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayTagAssetInterface_HasMatchingGameplayTag) == 0x000004, "Wrong alignment on GameplayTagAssetInterface_HasMatchingGameplayTag");
static_assert(sizeof(GameplayTagAssetInterface_HasMatchingGameplayTag) == 0x00000C, "Wrong size on GameplayTagAssetInterface_HasMatchingGameplayTag");
static_assert(offsetof(GameplayTagAssetInterface_HasMatchingGameplayTag, TagToCheck) == 0x000000, "Member 'GameplayTagAssetInterface_HasMatchingGameplayTag::TagToCheck' has a wrong offset!");
static_assert(offsetof(GameplayTagAssetInterface_HasMatchingGameplayTag, ReturnValue) == 0x000008, "Member 'GameplayTagAssetInterface_HasMatchingGameplayTag::ReturnValue' has a wrong offset!");

}
