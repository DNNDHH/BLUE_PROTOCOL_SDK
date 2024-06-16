#pragma once

 

// Package: BuffIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BuffIcon.BuffIcon_C.ExecuteUbergraph_BuffIcon
// 0x0008 (0x0008 - 0x0000)
struct BuffIcon_C_ExecuteUbergraph_BuffIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuffIcon_C_ExecuteUbergraph_BuffIcon) == 0x000004, "Wrong alignment on BuffIcon_C_ExecuteUbergraph_BuffIcon");
static_assert(sizeof(BuffIcon_C_ExecuteUbergraph_BuffIcon) == 0x000008, "Wrong size on BuffIcon_C_ExecuteUbergraph_BuffIcon");
static_assert(offsetof(BuffIcon_C_ExecuteUbergraph_BuffIcon, EntryPoint) == 0x000000, "Member 'BuffIcon_C_ExecuteUbergraph_BuffIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_ExecuteUbergraph_BuffIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BuffIcon_C_ExecuteUbergraph_BuffIcon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BuffIcon.BuffIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BuffIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuffIcon_C_PreConstruct) == 0x000001, "Wrong alignment on BuffIcon_C_PreConstruct");
static_assert(sizeof(BuffIcon_C_PreConstruct) == 0x000001, "Wrong size on BuffIcon_C_PreConstruct");
static_assert(offsetof(BuffIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BuffIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BuffIcon.BuffIcon_C.OnSetup
// 0x0020 (0x0020 - 0x0000)
struct BuffIcon_C_OnSetup final
{
public:
	ESBStatusAilmentIconType                      InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_948B[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_FindIconAssetData_Texture;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindIconAssetData_IsFind;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_948C[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_FindIconAssetData_TextID;                 // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindIconAssetData_bBuff;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStatusAilmentPlateType                     CallFunc_FindIconAssetData_Type;                   // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BuffIcon_C_OnSetup) == 0x000008, "Wrong alignment on BuffIcon_C_OnSetup");
static_assert(sizeof(BuffIcon_C_OnSetup) == 0x000020, "Wrong size on BuffIcon_C_OnSetup");
static_assert(offsetof(BuffIcon_C_OnSetup, InType) == 0x000000, "Member 'BuffIcon_C_OnSetup::InType' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_OnSetup, ReturnValue) == 0x000001, "Member 'BuffIcon_C_OnSetup::ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_OnSetup, CallFunc_FindIconAssetData_Texture) == 0x000008, "Member 'BuffIcon_C_OnSetup::CallFunc_FindIconAssetData_Texture' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_OnSetup, CallFunc_FindIconAssetData_IsFind) == 0x000010, "Member 'BuffIcon_C_OnSetup::CallFunc_FindIconAssetData_IsFind' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_OnSetup, CallFunc_FindIconAssetData_TextID) == 0x000014, "Member 'BuffIcon_C_OnSetup::CallFunc_FindIconAssetData_TextID' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_OnSetup, CallFunc_FindIconAssetData_bBuff) == 0x00001C, "Member 'BuffIcon_C_OnSetup::CallFunc_FindIconAssetData_bBuff' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_OnSetup, CallFunc_FindIconAssetData_Type) == 0x00001D, "Member 'BuffIcon_C_OnSetup::CallFunc_FindIconAssetData_Type' has a wrong offset!");

// Function BuffIcon.BuffIcon_C.PlayAnim
// 0x0018 (0x0018 - 0x0000)
struct BuffIcon_C_PlayAnim final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_948D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuffIcon_C_PlayAnim) == 0x000008, "Wrong alignment on BuffIcon_C_PlayAnim");
static_assert(sizeof(BuffIcon_C_PlayAnim) == 0x000018, "Wrong size on BuffIcon_C_PlayAnim");
static_assert(offsetof(BuffIcon_C_PlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'BuffIcon_C_PlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BuffIcon_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIcon_C_PlayAnim, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BuffIcon_C_PlayAnim::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BuffIcon.BuffIcon_C.StopAnim
// 0x0001 (0x0001 - 0x0000)
struct BuffIcon_C_StopAnim final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuffIcon_C_StopAnim) == 0x000001, "Wrong alignment on BuffIcon_C_StopAnim");
static_assert(sizeof(BuffIcon_C_StopAnim) == 0x000001, "Wrong size on BuffIcon_C_StopAnim");
static_assert(offsetof(BuffIcon_C_StopAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'BuffIcon_C_StopAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

