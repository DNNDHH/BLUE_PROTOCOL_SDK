#pragma once

 

// Package: UMG_NPCFacilityMark_Icon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_NPCFacilityMark_Icon.UMG_NPCFacilityMark_Icon_C.SetIconType
// 0x0009 (0x0009 - 0x0000)
struct UMG_NPCFacilityMark_Icon_C_SetIconType final
{
public:
	ESBFacilityType                               IconType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetNpcFacilityIconTexture_IsFound;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetNpcFacilityIconTexture_IsEnable;       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_NPCFacilityMark_Icon_C_SetIconType) == 0x000001, "Wrong alignment on UMG_NPCFacilityMark_Icon_C_SetIconType");
static_assert(sizeof(UMG_NPCFacilityMark_Icon_C_SetIconType) == 0x000009, "Wrong size on UMG_NPCFacilityMark_Icon_C_SetIconType");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, IconType) == 0x000000, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::IconType' has a wrong offset!");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, Temp_bool_Variable) == 0x000001, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, Temp_byte_Variable) == 0x000002, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, Temp_byte_Variable_1) == 0x000003, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000004, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, CallFunc_SetNpcFacilityIconTexture_IsFound) == 0x000005, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::CallFunc_SetNpcFacilityIconTexture_IsFound' has a wrong offset!");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, CallFunc_SetNpcFacilityIconTexture_IsEnable) == 0x000006, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::CallFunc_SetNpcFacilityIconTexture_IsEnable' has a wrong offset!");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, CallFunc_BooleanAND_ReturnValue) == 0x000007, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NPCFacilityMark_Icon_C_SetIconType, K2Node_Select_Default) == 0x000008, "Member 'UMG_NPCFacilityMark_Icon_C_SetIconType::K2Node_Select_Default' has a wrong offset!");

}

