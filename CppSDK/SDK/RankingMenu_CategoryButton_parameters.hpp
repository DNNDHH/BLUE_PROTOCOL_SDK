#pragma once

 

// Package: RankingMenu_CategoryButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct RankingMenu_CategoryButton_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_ButtonId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_CategoryButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on RankingMenu_CategoryButton_C_OnClick__DelegateSignature");
static_assert(sizeof(RankingMenu_CategoryButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on RankingMenu_CategoryButton_C_OnClick__DelegateSignature");
static_assert(offsetof(RankingMenu_CategoryButton_C_OnClick__DelegateSignature, Param_ButtonId) == 0x000000, "Member 'RankingMenu_CategoryButton_C_OnClick__DelegateSignature::Param_ButtonId' has a wrong offset!");

// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.ExecuteUbergraph_RankingMenu_CategoryButton
// 0x0008 (0x0008 - 0x0000)
struct RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton) == 0x000004, "Wrong alignment on RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton");
static_assert(sizeof(RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton) == 0x000008, "Wrong size on RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton");
static_assert(offsetof(RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton, EntryPoint) == 0x000000, "Member 'RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct RankingMenu_CategoryButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_CategoryButton_C_PreConstruct) == 0x000001, "Wrong alignment on RankingMenu_CategoryButton_C_PreConstruct");
static_assert(sizeof(RankingMenu_CategoryButton_C_PreConstruct) == 0x000001, "Wrong size on RankingMenu_CategoryButton_C_PreConstruct");
static_assert(offsetof(RankingMenu_CategoryButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RankingMenu_CategoryButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.SetMenuFocus
// 0x000C (0x000C - 0x0000)
struct RankingMenu_CategoryButton_C_SetMenuFocus final
{
public:
	bool                                          InFocus;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_532A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_CategoryButton_C_SetMenuFocus) == 0x000004, "Wrong alignment on RankingMenu_CategoryButton_C_SetMenuFocus");
static_assert(sizeof(RankingMenu_CategoryButton_C_SetMenuFocus) == 0x00000C, "Wrong size on RankingMenu_CategoryButton_C_SetMenuFocus");
static_assert(offsetof(RankingMenu_CategoryButton_C_SetMenuFocus, InFocus) == 0x000000, "Member 'RankingMenu_CategoryButton_C_SetMenuFocus::InFocus' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButton_C_SetMenuFocus, CallFunc_Conv_BoolToInt_ReturnValue) == 0x000004, "Member 'RankingMenu_CategoryButton_C_SetMenuFocus::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButton_C_SetMenuFocus, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000008, "Member 'RankingMenu_CategoryButton_C_SetMenuFocus::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

