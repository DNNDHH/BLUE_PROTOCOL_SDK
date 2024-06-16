#pragma once

 

// Package: TensionTagIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function TensionTagIcon.TensionTagIcon_C.SetTensionTag
// 0x0038 (0x0038 - 0x0000)
struct TensionTagIcon_C_SetTensionTag final
{
public:
	ESBTensionTagType                             InTensionTagId;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E79[0x7];                                      // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             NewImage;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E7A[0x7];                                      // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ObjectToString_ReturnValue;          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TensionTagIcon_C_SetTensionTag) == 0x000008, "Wrong alignment on TensionTagIcon_C_SetTensionTag");
static_assert(sizeof(TensionTagIcon_C_SetTensionTag) == 0x000038, "Wrong size on TensionTagIcon_C_SetTensionTag");
static_assert(offsetof(TensionTagIcon_C_SetTensionTag, InTensionTagId) == 0x000000, "Member 'TensionTagIcon_C_SetTensionTag::InTensionTagId' has a wrong offset!");
static_assert(offsetof(TensionTagIcon_C_SetTensionTag, NewImage) == 0x000008, "Member 'TensionTagIcon_C_SetTensionTag::NewImage' has a wrong offset!");
static_assert(offsetof(TensionTagIcon_C_SetTensionTag, CallFunc_Map_Find_Value) == 0x000010, "Member 'TensionTagIcon_C_SetTensionTag::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(TensionTagIcon_C_SetTensionTag, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'TensionTagIcon_C_SetTensionTag::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(TensionTagIcon_C_SetTensionTag, CallFunc_Conv_ObjectToString_ReturnValue) == 0x000020, "Member 'TensionTagIcon_C_SetTensionTag::CallFunc_Conv_ObjectToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TensionTagIcon_C_SetTensionTag, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000030, "Member 'TensionTagIcon_C_SetTensionTag::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TensionTagIcon_C_SetTensionTag, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000031, "Member 'TensionTagIcon_C_SetTensionTag::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}

