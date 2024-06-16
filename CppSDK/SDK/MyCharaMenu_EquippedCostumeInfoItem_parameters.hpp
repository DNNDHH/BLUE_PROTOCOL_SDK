#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfoItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfoItem_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfoItem_C_SetText) == 0x000008, "Wrong alignment on MyCharaMenu_EquippedCostumeInfoItem_C_SetText");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfoItem_C_SetText) == 0x000018, "Wrong size on MyCharaMenu_EquippedCostumeInfoItem_C_SetText");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoItem_C_SetText, InText) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfoItem_C_SetText::InText' has a wrong offset!");

// Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetIsGrayOut
// 0x0060 (0x0060 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut final
{
public:
	bool                                          InIsGrayOut;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B84[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B85[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut) == 0x000008, "Wrong alignment on MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut) == 0x000060, "Wrong size on MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut, InIsGrayOut) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut::InIsGrayOut' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut, Temp_struct_Variable) == 0x000004, "Member 'MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut, Temp_struct_Variable_1) == 0x000014, "Member 'MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut, K2Node_Select_Default) == 0x000024, "Member 'MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

