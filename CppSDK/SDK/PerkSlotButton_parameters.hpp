#pragma once

 

// Package: PerkSlotButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PerkSlotButton.PerkSlotButton_C.OnSelectedItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PerkSlotButton_C_OnSelectedItem__DelegateSignature final
{
public:
	class UPerkSlotButton_C*                      SelectedButton;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkSlotButton_C_OnSelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on PerkSlotButton_C_OnSelectedItem__DelegateSignature");
static_assert(sizeof(PerkSlotButton_C_OnSelectedItem__DelegateSignature) == 0x000008, "Wrong size on PerkSlotButton_C_OnSelectedItem__DelegateSignature");
static_assert(offsetof(PerkSlotButton_C_OnSelectedItem__DelegateSignature, SelectedButton) == 0x000000, "Member 'PerkSlotButton_C_OnSelectedItem__DelegateSignature::SelectedButton' has a wrong offset!");

// Function PerkSlotButton.PerkSlotButton_C.ExecuteUbergraph_PerkSlotButton
// 0x0004 (0x0004 - 0x0000)
struct PerkSlotButton_C_ExecuteUbergraph_PerkSlotButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkSlotButton_C_ExecuteUbergraph_PerkSlotButton) == 0x000004, "Wrong alignment on PerkSlotButton_C_ExecuteUbergraph_PerkSlotButton");
static_assert(sizeof(PerkSlotButton_C_ExecuteUbergraph_PerkSlotButton) == 0x000004, "Wrong size on PerkSlotButton_C_ExecuteUbergraph_PerkSlotButton");
static_assert(offsetof(PerkSlotButton_C_ExecuteUbergraph_PerkSlotButton, EntryPoint) == 0x000000, "Member 'PerkSlotButton_C_ExecuteUbergraph_PerkSlotButton::EntryPoint' has a wrong offset!");

// Function PerkSlotButton.PerkSlotButton_C.SetData
// 0x001C (0x001C - 0x0000)
struct PerkSlotButton_C_SetData final
{
public:
	struct FSBCharacterWeaponPerkData             SBCharacter_Weapon_Perk_Data;                      // 0x0000(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(PerkSlotButton_C_SetData) == 0x000004, "Wrong alignment on PerkSlotButton_C_SetData");
static_assert(sizeof(PerkSlotButton_C_SetData) == 0x00001C, "Wrong size on PerkSlotButton_C_SetData");
static_assert(offsetof(PerkSlotButton_C_SetData, SBCharacter_Weapon_Perk_Data) == 0x000000, "Member 'PerkSlotButton_C_SetData::SBCharacter_Weapon_Perk_Data' has a wrong offset!");

// Function PerkSlotButton.PerkSlotButton_C.SetSelected
// 0x0005 (0x0005 - 0x0000)
struct PerkSlotButton_C_SetSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkSlotButton_C_SetSelected) == 0x000001, "Wrong alignment on PerkSlotButton_C_SetSelected");
static_assert(sizeof(PerkSlotButton_C_SetSelected) == 0x000005, "Wrong size on PerkSlotButton_C_SetSelected");
static_assert(offsetof(PerkSlotButton_C_SetSelected, bSelected) == 0x000000, "Member 'PerkSlotButton_C_SetSelected::bSelected' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSelected, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'PerkSlotButton_C_SetSelected::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSelected, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'PerkSlotButton_C_SetSelected::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSelected, Temp_bool_Variable) == 0x000003, "Member 'PerkSlotButton_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSelected, K2Node_Select_Default) == 0x000004, "Member 'PerkSlotButton_C_SetSelected::K2Node_Select_Default' has a wrong offset!");

// Function PerkSlotButton.PerkSlotButton_C.SetSlotDeficiency
// 0x0006 (0x0006 - 0x0000)
struct PerkSlotButton_C_SetSlotDeficiency final
{
public:
	bool                                          bDeficiency;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkSlotButton_C_SetSlotDeficiency) == 0x000001, "Wrong alignment on PerkSlotButton_C_SetSlotDeficiency");
static_assert(sizeof(PerkSlotButton_C_SetSlotDeficiency) == 0x000006, "Wrong size on PerkSlotButton_C_SetSlotDeficiency");
static_assert(offsetof(PerkSlotButton_C_SetSlotDeficiency, bDeficiency) == 0x000000, "Member 'PerkSlotButton_C_SetSlotDeficiency::bDeficiency' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSlotDeficiency, Temp_bool_Variable) == 0x000001, "Member 'PerkSlotButton_C_SetSlotDeficiency::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSlotDeficiency, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'PerkSlotButton_C_SetSlotDeficiency::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSlotDeficiency, Temp_byte_Variable) == 0x000003, "Member 'PerkSlotButton_C_SetSlotDeficiency::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSlotDeficiency, Temp_byte_Variable_1) == 0x000004, "Member 'PerkSlotButton_C_SetSlotDeficiency::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_SetSlotDeficiency, K2Node_Select_Default) == 0x000005, "Member 'PerkSlotButton_C_SetSlotDeficiency::K2Node_Select_Default' has a wrong offset!");

// Function PerkSlotButton.PerkSlotButton_C.GetData
// 0x0038 (0x0038 - 0x0000)
struct PerkSlotButton_C_GetData final
{
public:
	struct FSBCharacterWeaponPerkData             Data;                                              // 0x0000(0x001C)(Parm, OutParm, NoDestructor)
	struct FSBCharacterWeaponPerkData             CallFunc_GetData_data;                             // 0x001C(0x001C)(NoDestructor)
};
static_assert(alignof(PerkSlotButton_C_GetData) == 0x000004, "Wrong alignment on PerkSlotButton_C_GetData");
static_assert(sizeof(PerkSlotButton_C_GetData) == 0x000038, "Wrong size on PerkSlotButton_C_GetData");
static_assert(offsetof(PerkSlotButton_C_GetData, Data) == 0x000000, "Member 'PerkSlotButton_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(PerkSlotButton_C_GetData, CallFunc_GetData_data) == 0x00001C, "Member 'PerkSlotButton_C_GetData::CallFunc_GetData_data' has a wrong offset!");

}

