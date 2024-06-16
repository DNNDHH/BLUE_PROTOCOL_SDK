#pragma once

 

// Package: CharaCreate_DressVisibilityOnOffSwitch

#include "Basic.hpp"


namespace SDK::Params
{

// Function CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C.OnDressVisibilitySwitchClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CharaCreate_DressVisibilityOnOffSwitch_C_OnDressVisibilitySwitchClicked__DelegateSignature final
{
public:
	bool                                          InIsDressVisibilitySwitchOn;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaCreate_DressVisibilityOnOffSwitch_C_OnDressVisibilitySwitchClicked__DelegateSignature) == 0x000001, "Wrong alignment on CharaCreate_DressVisibilityOnOffSwitch_C_OnDressVisibilitySwitchClicked__DelegateSignature");
static_assert(sizeof(CharaCreate_DressVisibilityOnOffSwitch_C_OnDressVisibilitySwitchClicked__DelegateSignature) == 0x000001, "Wrong size on CharaCreate_DressVisibilityOnOffSwitch_C_OnDressVisibilitySwitchClicked__DelegateSignature");
static_assert(offsetof(CharaCreate_DressVisibilityOnOffSwitch_C_OnDressVisibilitySwitchClicked__DelegateSignature, InIsDressVisibilitySwitchOn) == 0x000000, "Member 'CharaCreate_DressVisibilityOnOffSwitch_C_OnDressVisibilitySwitchClicked__DelegateSignature::InIsDressVisibilitySwitchOn' has a wrong offset!");

// Function CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C.ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch
// 0x0004 (0x0004 - 0x0000)
struct CharaCreate_DressVisibilityOnOffSwitch_C_ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreate_DressVisibilityOnOffSwitch_C_ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch) == 0x000004, "Wrong alignment on CharaCreate_DressVisibilityOnOffSwitch_C_ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch");
static_assert(sizeof(CharaCreate_DressVisibilityOnOffSwitch_C_ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch) == 0x000004, "Wrong size on CharaCreate_DressVisibilityOnOffSwitch_C_ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch");
static_assert(offsetof(CharaCreate_DressVisibilityOnOffSwitch_C_ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch, EntryPoint) == 0x000000, "Member 'CharaCreate_DressVisibilityOnOffSwitch_C_ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch::EntryPoint' has a wrong offset!");

// Function CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C.SetActiveDressVisibilitySwitch
// 0x0010 (0x0010 - 0x0000)
struct CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch final
{
public:
	bool                                          InIsDressVisibilitySwitchOnActive;                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89CC[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch) == 0x000004, "Wrong alignment on CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch");
static_assert(sizeof(CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch) == 0x000010, "Wrong size on CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch");
static_assert(offsetof(CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch, InIsDressVisibilitySwitchOnActive) == 0x000000, "Member 'CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch::InIsDressVisibilitySwitchOnActive' has a wrong offset!");
static_assert(offsetof(CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch, Temp_bool_Variable) == 0x000001, "Member 'CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch, Temp_int_Variable) == 0x000004, "Member 'CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch, Temp_int_Variable_1) == 0x000008, "Member 'CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch, K2Node_Select_Default) == 0x00000C, "Member 'CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch::K2Node_Select_Default' has a wrong offset!");

}

