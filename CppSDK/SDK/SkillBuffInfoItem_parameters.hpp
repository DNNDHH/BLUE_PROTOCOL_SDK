#pragma once

 

// Package: SkillBuffInfoItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "BuffIconAssetData_structs.hpp"


namespace SDK::Params
{

// Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetSkillBuff
// 0x00A0 (0x00A0 - 0x0000)
struct SkillBuffInfoItem_C_SetSkillBuff final
{
public:
	struct FBuffIconAssetData                     InSkillBuffData;                                   // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEfficacyValue;                                // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB6[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalEfficacyDesc;                                 // 0x0030(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CB7[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
};
static_assert(alignof(SkillBuffInfoItem_C_SetSkillBuff) == 0x000008, "Wrong alignment on SkillBuffInfoItem_C_SetSkillBuff");
static_assert(sizeof(SkillBuffInfoItem_C_SetSkillBuff) == 0x0000A0, "Wrong size on SkillBuffInfoItem_C_SetSkillBuff");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, InSkillBuffData) == 0x000000, "Member 'SkillBuffInfoItem_C_SetSkillBuff::InSkillBuffData' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, LocalEfficacyValue) == 0x000028, "Member 'SkillBuffInfoItem_C_SetSkillBuff::LocalEfficacyValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, LocalEfficacyDesc) == 0x000030, "Member 'SkillBuffInfoItem_C_SetSkillBuff::LocalEfficacyDesc' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'SkillBuffInfoItem_C_SetSkillBuff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'SkillBuffInfoItem_C_SetSkillBuff::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, CallFunc_Conv_NameToString_ReturnValue) == 0x000050, "Member 'SkillBuffInfoItem_C_SetSkillBuff::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'SkillBuffInfoItem_C_SetSkillBuff::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, CallFunc_Conv_StringToName_ReturnValue) == 0x000070, "Member 'SkillBuffInfoItem_C_SetSkillBuff::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000078, "Member 'SkillBuffInfoItem_C_SetSkillBuff::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetSkillBuff, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'SkillBuffInfoItem_C_SetSkillBuff::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetOverlineVisibility
// 0x0006 (0x0006 - 0x0000)
struct SkillBuffInfoItem_C_SetOverlineVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillBuffInfoItem_C_SetOverlineVisibility) == 0x000001, "Wrong alignment on SkillBuffInfoItem_C_SetOverlineVisibility");
static_assert(sizeof(SkillBuffInfoItem_C_SetOverlineVisibility) == 0x000006, "Wrong size on SkillBuffInfoItem_C_SetOverlineVisibility");
static_assert(offsetof(SkillBuffInfoItem_C_SetOverlineVisibility, InIsVisible) == 0x000000, "Member 'SkillBuffInfoItem_C_SetOverlineVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetOverlineVisibility, Temp_byte_Variable) == 0x000001, "Member 'SkillBuffInfoItem_C_SetOverlineVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetOverlineVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'SkillBuffInfoItem_C_SetOverlineVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetOverlineVisibility, Temp_bool_Variable) == 0x000003, "Member 'SkillBuffInfoItem_C_SetOverlineVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetOverlineVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SkillBuffInfoItem_C_SetOverlineVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoItem_C_SetOverlineVisibility, K2Node_Select_Default) == 0x000005, "Member 'SkillBuffInfoItem_C_SetOverlineVisibility::K2Node_Select_Default' has a wrong offset!");

}

