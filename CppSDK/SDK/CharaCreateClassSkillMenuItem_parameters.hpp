#pragma once

 

// Package: CharaCreateClassSkillMenuItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature final
{
public:
	class UCharaCreateClassSkillMenuItem_C*       InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on CharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature) == 0x000008, "Wrong size on CharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature, InSelectedItem) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature::InSelectedItem' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature final
{
public:
	class UCharaCreateClassSkillMenuItem_C*       Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on CharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature) == 0x000008, "Wrong size on CharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature, Sender) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature::Sender' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnReleased__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature final
{
public:
	class UCharaCreateClassSkillMenuItem_C*       Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature) == 0x000008, "Wrong alignment on CharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature) == 0x000008, "Wrong size on CharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature, Sender) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature::Sender' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.ExecuteUbergraph_CharaCreateClassSkillMenuItem
// 0x0050 (0x0050 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanStartSkillAtPosition_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem) == 0x000008, "Wrong alignment on CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem) == 0x000050, "Wrong size on CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem, EntryPoint) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem, K2Node_Event_MyGeometry) == 0x000004, "Member 'CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000040, "Member 'CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem, CallFunc_CanStartSkillAtPosition_ReturnValue) == 0x000048, "Member 'CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem::CallFunc_CanStartSkillAtPosition_ReturnValue' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.Tick
// 0x003C (0x003C - 0x0000)
struct CharaCreateClassSkillMenuItem_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_Tick) == 0x000004, "Wrong alignment on CharaCreateClassSkillMenuItem_C_Tick");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_Tick) == 0x00003C, "Wrong size on CharaCreateClassSkillMenuItem_C_Tick");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_Tick, MyGeometry) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_Tick, InDeltaTime) == 0x000038, "Member 'CharaCreateClassSkillMenuItem_C_Tick::InDeltaTime' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillNameText
// 0x0018 (0x0018 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_SetSkillNameText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_SetSkillNameText) == 0x000008, "Wrong alignment on CharaCreateClassSkillMenuItem_C_SetSkillNameText");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_SetSkillNameText) == 0x000018, "Wrong size on CharaCreateClassSkillMenuItem_C_SetSkillNameText");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillNameText, InText) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillNameText::InText' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSelected
// 0x0009 (0x0009 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_SetSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_SetSelected) == 0x000001, "Wrong alignment on CharaCreateClassSkillMenuItem_C_SetSelected");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_SetSelected) == 0x000009, "Wrong size on CharaCreateClassSkillMenuItem_C_SetSelected");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, IsSelected) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, Temp_byte_Variable) == 0x000001, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, Temp_byte_Variable_1) == 0x000002, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, Temp_bool_Variable) == 0x000003, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, Temp_byte_Variable_2) == 0x000004, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, Temp_byte_Variable_3) == 0x000005, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, Temp_bool_Variable_1) == 0x000006, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, K2Node_Select_Default) == 0x000007, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSelected, K2Node_Select_Default_1) == 0x000008, "Member 'CharaCreateClassSkillMenuItem_C_SetSelected::K2Node_Select_Default_1' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetPlayIconVisibility
// 0x0005 (0x0005 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility) == 0x000001, "Wrong alignment on CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility) == 0x000005, "Wrong size on CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility, Param_IsVisible) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility, Temp_bool_Variable) == 0x000001, "Member 'CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility, Temp_byte_Variable) == 0x000002, "Member 'CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility, K2Node_Select_Default) == 0x000004, "Member 'CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillNamePadding
// 0x0030 (0x0030 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_SetSkillNamePadding final
{
public:
	struct FMargin                                InPadding;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UButtonSlot*                            K2Node_DynamicCast_AsButton_Slot;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_SetSkillNamePadding) == 0x000008, "Wrong alignment on CharaCreateClassSkillMenuItem_C_SetSkillNamePadding");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_SetSkillNamePadding) == 0x000030, "Wrong size on CharaCreateClassSkillMenuItem_C_SetSkillNamePadding");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillNamePadding, InPadding) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillNamePadding::InPadding' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillNamePadding, K2Node_MakeStruct_Margin) == 0x000010, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillNamePadding::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillNamePadding, K2Node_DynamicCast_AsButton_Slot) == 0x000020, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillNamePadding::K2Node_DynamicCast_AsButton_Slot' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillNamePadding, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillNamePadding::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillNamePadding, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillNamePadding::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillDataAtPhotoMode
// 0x0020 (0x0020 - 0x0000)
struct CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESkillActionPosition                          InPosition;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode) == 0x000008, "Wrong alignment on CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode");
static_assert(sizeof(CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode) == 0x000020, "Wrong size on CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode, InText) == 0x000000, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode::InText' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode, InPosition) == 0x000018, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode::InPosition' has a wrong offset!");
static_assert(offsetof(CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

