#pragma once

 

// Package: PlatformIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PlatformIcon.PlatformIcon_C.ExecuteUbergraph_PlatformIcon
// 0x0008 (0x0008 - 0x0000)
struct PlatformIcon_C_ExecuteUbergraph_PlatformIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlatformIcon_C_ExecuteUbergraph_PlatformIcon) == 0x000004, "Wrong alignment on PlatformIcon_C_ExecuteUbergraph_PlatformIcon");
static_assert(sizeof(PlatformIcon_C_ExecuteUbergraph_PlatformIcon) == 0x000008, "Wrong size on PlatformIcon_C_ExecuteUbergraph_PlatformIcon");
static_assert(offsetof(PlatformIcon_C_ExecuteUbergraph_PlatformIcon, EntryPoint) == 0x000000, "Member 'PlatformIcon_C_ExecuteUbergraph_PlatformIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlatformIcon_C_ExecuteUbergraph_PlatformIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'PlatformIcon_C_ExecuteUbergraph_PlatformIcon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function PlatformIcon.PlatformIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PlatformIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlatformIcon_C_PreConstruct) == 0x000001, "Wrong alignment on PlatformIcon_C_PreConstruct");
static_assert(sizeof(PlatformIcon_C_PreConstruct) == 0x000001, "Wrong size on PlatformIcon_C_PreConstruct");
static_assert(offsetof(PlatformIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PlatformIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PlatformIcon.PlatformIcon_C.InitByType
// 0x0018 (0x0018 - 0x0000)
struct PlatformIcon_C_InitByType final
{
public:
	ESBPlatformType                               Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsActive;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5438[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetPlatformIconTextureAssetByType_LoadedTexture; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPlatformIconTextureAssetByType_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlatformIcon_C_InitByType) == 0x000008, "Wrong alignment on PlatformIcon_C_InitByType");
static_assert(sizeof(PlatformIcon_C_InitByType) == 0x000018, "Wrong size on PlatformIcon_C_InitByType");
static_assert(offsetof(PlatformIcon_C_InitByType, Type) == 0x000000, "Member 'PlatformIcon_C_InitByType::Type' has a wrong offset!");
static_assert(offsetof(PlatformIcon_C_InitByType, bIsActive) == 0x000001, "Member 'PlatformIcon_C_InitByType::bIsActive' has a wrong offset!");
static_assert(offsetof(PlatformIcon_C_InitByType, CallFunc_GetPlatformIconTextureAssetByType_LoadedTexture) == 0x000008, "Member 'PlatformIcon_C_InitByType::CallFunc_GetPlatformIconTextureAssetByType_LoadedTexture' has a wrong offset!");
static_assert(offsetof(PlatformIcon_C_InitByType, CallFunc_GetPlatformIconTextureAssetByType_ReturnValue) == 0x000010, "Member 'PlatformIcon_C_InitByType::CallFunc_GetPlatformIconTextureAssetByType_ReturnValue' has a wrong offset!");

// Function PlatformIcon.PlatformIcon_C.InitbyId
// 0x0018 (0x0018 - 0x0000)
struct PlatformIcon_C_InitbyId final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsActive;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5439[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetPlatformIconTextureAssetByIndex_LoadedTexture; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPlatformIconTextureAssetByIndex_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlatformIcon_C_InitbyId) == 0x000008, "Wrong alignment on PlatformIcon_C_InitbyId");
static_assert(sizeof(PlatformIcon_C_InitbyId) == 0x000018, "Wrong size on PlatformIcon_C_InitbyId");
static_assert(offsetof(PlatformIcon_C_InitbyId, ID) == 0x000000, "Member 'PlatformIcon_C_InitbyId::ID' has a wrong offset!");
static_assert(offsetof(PlatformIcon_C_InitbyId, bIsActive) == 0x000004, "Member 'PlatformIcon_C_InitbyId::bIsActive' has a wrong offset!");
static_assert(offsetof(PlatformIcon_C_InitbyId, CallFunc_GetPlatformIconTextureAssetByIndex_LoadedTexture) == 0x000008, "Member 'PlatformIcon_C_InitbyId::CallFunc_GetPlatformIconTextureAssetByIndex_LoadedTexture' has a wrong offset!");
static_assert(offsetof(PlatformIcon_C_InitbyId, CallFunc_GetPlatformIconTextureAssetByIndex_ReturnValue) == 0x000010, "Member 'PlatformIcon_C_InitbyId::CallFunc_GetPlatformIconTextureAssetByIndex_ReturnValue' has a wrong offset!");

}

