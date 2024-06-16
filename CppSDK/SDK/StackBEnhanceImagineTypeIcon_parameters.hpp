#pragma once

 

// Package: StackBEnhanceImagineTypeIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetMasterData
// 0x00D8 (0x00D8 - 0x0000)
struct StackBEnhanceImagineTypeIcon_C_SetMasterData final
{
public:
	struct FSBMasterImagine                       SBMasterImagine;                                   // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE8[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_1;                           // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_2;                           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_3;                           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBEnhanceImagineTypeIcon_C_SetMasterData) == 0x000008, "Wrong alignment on StackBEnhanceImagineTypeIcon_C_SetMasterData");
static_assert(sizeof(StackBEnhanceImagineTypeIcon_C_SetMasterData) == 0x0000D8, "Wrong size on StackBEnhanceImagineTypeIcon_C_SetMasterData");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, SBMasterImagine) == 0x000000, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::SBMasterImagine' has a wrong offset!");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, Temp_bool_Variable) == 0x0000B0, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, Temp_bool_Variable_1) == 0x0000B1, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, Temp_bool_Variable_2) == 0x0000B2, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, Temp_bool_Variable_3) == 0x0000B3, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, K2Node_Select_Default) == 0x0000B8, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, K2Node_Select_Default_1) == 0x0000C0, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, K2Node_Select_Default_2) == 0x0000C8, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetMasterData, K2Node_Select_Default_3) == 0x0000D0, "Member 'StackBEnhanceImagineTypeIcon_C_SetMasterData::K2Node_Select_Default_3' has a wrong offset!");

// Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetIconColor
// 0x0010 (0x0010 - 0x0000)
struct StackBEnhanceImagineTypeIcon_C_SetIconColor final
{
public:
	struct FLinearColor                           NewParam;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBEnhanceImagineTypeIcon_C_SetIconColor) == 0x000004, "Wrong alignment on StackBEnhanceImagineTypeIcon_C_SetIconColor");
static_assert(sizeof(StackBEnhanceImagineTypeIcon_C_SetIconColor) == 0x000010, "Wrong size on StackBEnhanceImagineTypeIcon_C_SetIconColor");
static_assert(offsetof(StackBEnhanceImagineTypeIcon_C_SetIconColor, NewParam) == 0x000000, "Member 'StackBEnhanceImagineTypeIcon_C_SetIconColor::NewParam' has a wrong offset!");

}

