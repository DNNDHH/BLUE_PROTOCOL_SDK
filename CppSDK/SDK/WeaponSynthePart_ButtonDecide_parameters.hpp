#pragma once

 

// Package: WeaponSynthePart_ButtonDecide

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_ButtonDecide.WeaponSynthePart_ButtonDecide_C.ExecuteUbergraph_WeaponSynthePart_ButtonDecide
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide) == 0x000004, "Wrong alignment on WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide");
static_assert(sizeof(WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide) == 0x000008, "Wrong size on WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WeaponSynthePart_ButtonDecide_C_ExecuteUbergraph_WeaponSynthePart_ButtonDecide::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WeaponSynthePart_ButtonDecide.WeaponSynthePart_ButtonDecide_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_ButtonDecide_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_ButtonDecide_C_PreConstruct) == 0x000001, "Wrong alignment on WeaponSynthePart_ButtonDecide_C_PreConstruct");
static_assert(sizeof(WeaponSynthePart_ButtonDecide_C_PreConstruct) == 0x000001, "Wrong size on WeaponSynthePart_ButtonDecide_C_PreConstruct");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WeaponSynthePart_ButtonDecide_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WeaponSynthePart_ButtonDecide.WeaponSynthePart_ButtonDecide_C.SetEnableButton
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_ButtonDecide_C_SetEnableButton final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_ButtonDecide_C_SetEnableButton) == 0x000001, "Wrong alignment on WeaponSynthePart_ButtonDecide_C_SetEnableButton");
static_assert(sizeof(WeaponSynthePart_ButtonDecide_C_SetEnableButton) == 0x000001, "Wrong size on WeaponSynthePart_ButtonDecide_C_SetEnableButton");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetEnableButton, bInIsEnabled) == 0x000000, "Member 'WeaponSynthePart_ButtonDecide_C_SetEnableButton::bInIsEnabled' has a wrong offset!");

// Function WeaponSynthePart_ButtonDecide.WeaponSynthePart_ButtonDecide_C.SetColorText
// 0x0080 (0x0080 - 0x0000)
struct WeaponSynthePart_ButtonDecide_C_SetColorText final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D5A[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0058(0x0028)()
};
static_assert(alignof(WeaponSynthePart_ButtonDecide_C_SetColorText) == 0x000008, "Wrong alignment on WeaponSynthePart_ButtonDecide_C_SetColorText");
static_assert(sizeof(WeaponSynthePart_ButtonDecide_C_SetColorText) == 0x000080, "Wrong size on WeaponSynthePart_ButtonDecide_C_SetColorText");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetColorText, IsActive) == 0x000000, "Member 'WeaponSynthePart_ButtonDecide_C_SetColorText::IsActive' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetColorText, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_ButtonDecide_C_SetColorText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetColorText, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WeaponSynthePart_ButtonDecide_C_SetColorText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetColorText, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'WeaponSynthePart_ButtonDecide_C_SetColorText::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetColorText, K2Node_Select_Default) == 0x000058, "Member 'WeaponSynthePart_ButtonDecide_C_SetColorText::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_ButtonDecide.WeaponSynthePart_ButtonDecide_C.SetVisibleArrow
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_ButtonDecide_C_SetVisibleArrow final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ButtonDecide_C_SetVisibleArrow) == 0x000001, "Wrong alignment on WeaponSynthePart_ButtonDecide_C_SetVisibleArrow");
static_assert(sizeof(WeaponSynthePart_ButtonDecide_C_SetVisibleArrow) == 0x000005, "Wrong size on WeaponSynthePart_ButtonDecide_C_SetVisibleArrow");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetVisibleArrow, Visible) == 0x000000, "Member 'WeaponSynthePart_ButtonDecide_C_SetVisibleArrow::Visible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetVisibleArrow, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_ButtonDecide_C_SetVisibleArrow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetVisibleArrow, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_ButtonDecide_C_SetVisibleArrow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetVisibleArrow, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_ButtonDecide_C_SetVisibleArrow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_SetVisibleArrow, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_ButtonDecide_C_SetVisibleArrow::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_ButtonDecide.WeaponSynthePart_ButtonDecide_C.PlayAnimArrow
// 0x0002 (0x0002 - 0x0000)
struct WeaponSynthePart_ButtonDecide_C_PlayAnimArrow final
{
public:
	bool                                          CallFunc_IsPlayingAnimation_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_ButtonDecide_C_PlayAnimArrow) == 0x000001, "Wrong alignment on WeaponSynthePart_ButtonDecide_C_PlayAnimArrow");
static_assert(sizeof(WeaponSynthePart_ButtonDecide_C_PlayAnimArrow) == 0x000002, "Wrong size on WeaponSynthePart_ButtonDecide_C_PlayAnimArrow");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_PlayAnimArrow, CallFunc_IsPlayingAnimation_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_ButtonDecide_C_PlayAnimArrow::CallFunc_IsPlayingAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonDecide_C_PlayAnimArrow, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WeaponSynthePart_ButtonDecide_C_PlayAnimArrow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

