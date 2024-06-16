#pragma once

 

// Package: WBP_CommonToolTip_Unreleased

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CommonToolTip_Unreleased.WBP_CommonToolTip_Unreleased_C.SetInfo
// 0x0128 (0x0128 - 0x0000)
struct WBP_CommonToolTip_Unreleased_C_SetInfo final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InReleaseLevel;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InClassType;                                       // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsClassTypeVisible;                              // 0x0015(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81B8[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalSkillTypeName;                                // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalReleaseLevel;                                 // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           LocalSkillAbilityType;                             // 0x002D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  LocalSkillType;                                    // 0x002E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81B9[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81BA[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81BB[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00E0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
};
static_assert(alignof(WBP_CommonToolTip_Unreleased_C_SetInfo) == 0x000008, "Wrong alignment on WBP_CommonToolTip_Unreleased_C_SetInfo");
static_assert(sizeof(WBP_CommonToolTip_Unreleased_C_SetInfo) == 0x000128, "Wrong size on WBP_CommonToolTip_Unreleased_C_SetInfo");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, InName) == 0x000000, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::InName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, InReleaseLevel) == 0x000010, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::InReleaseLevel' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, InClassType) == 0x000014, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::InClassType' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, InIsClassTypeVisible) == 0x000015, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::InIsClassTypeVisible' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, LocalSkillTypeName) == 0x000018, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::LocalSkillTypeName' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, LocalReleaseLevel) == 0x000028, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::LocalReleaseLevel' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, LocalClassType) == 0x00002C, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::LocalClassType' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, LocalSkillAbilityType) == 0x00002D, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::LocalSkillAbilityType' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, LocalSkillType) == 0x00002E, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::LocalSkillType' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, CallFunc_GetClassNameText_ReturnValue) == 0x000030, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, K2Node_MakeArray_Array) == 0x0000B0, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, Temp_byte_Variable) == 0x0000C0, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, Temp_byte_Variable_1) == 0x0000C1, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, Temp_bool_Variable) == 0x0000C2, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, K2Node_Select_Default) == 0x0000C3, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000C8, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, CallFunc_MakeLiteralBool_ReturnValue) == 0x0000D8, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000E0, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F8, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTip_Unreleased_C_SetInfo, CallFunc_Format_ReturnValue) == 0x000110, "Member 'WBP_CommonToolTip_Unreleased_C_SetInfo::CallFunc_Format_ReturnValue' has a wrong offset!");

}

