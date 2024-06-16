#pragma once

 

// Package: WBP_StackB_L

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_StackB_L.WBP_StackB_L_C.ExecuteUbergraph_WBP_StackB_L
// 0x0004 (0x0004 - 0x0000)
struct WBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L) == 0x000004, "Wrong alignment on WBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L");
static_assert(sizeof(WBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L) == 0x000004, "Wrong size on WBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L");
static_assert(offsetof(WBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L, EntryPoint) == 0x000000, "Member 'WBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L::EntryPoint' has a wrong offset!");

// Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNumByItemInfo
// 0x0120 (0x0120 - 0x0000)
struct WBP_StackB_L_C_SetStackBNumByItemInfo final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_GetStackBMax_ReturnValue;                 // 0x0118(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StackB_L_C_SetStackBNumByItemInfo) == 0x000008, "Wrong alignment on WBP_StackB_L_C_SetStackBNumByItemInfo");
static_assert(sizeof(WBP_StackB_L_C_SetStackBNumByItemInfo) == 0x000120, "Wrong size on WBP_StackB_L_C_SetStackBNumByItemInfo");
static_assert(offsetof(WBP_StackB_L_C_SetStackBNumByItemInfo, ItemInfo) == 0x000000, "Member 'WBP_StackB_L_C_SetStackBNumByItemInfo::ItemInfo' has a wrong offset!");
static_assert(offsetof(WBP_StackB_L_C_SetStackBNumByItemInfo, CallFunc_GetStackBMax_ReturnValue) == 0x000118, "Member 'WBP_StackB_L_C_SetStackBNumByItemInfo::CallFunc_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_L_C_SetStackBNumByItemInfo, CallFunc_GetStackBNum_ReturnValue) == 0x00011C, "Member 'WBP_StackB_L_C_SetStackBNumByItemInfo::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");

// Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNum
// 0x0020 (0x0020 - 0x0000)
struct WBP_StackB_L_C_SetStackBNum final
{
public:
	int32                                         Param_StackBNum;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DD6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_StackB_L_C_SetStackBNum) == 0x000008, "Wrong alignment on WBP_StackB_L_C_SetStackBNum");
static_assert(sizeof(WBP_StackB_L_C_SetStackBNum) == 0x000020, "Wrong size on WBP_StackB_L_C_SetStackBNum");
static_assert(offsetof(WBP_StackB_L_C_SetStackBNum, Param_StackBNum) == 0x000000, "Member 'WBP_StackB_L_C_SetStackBNum::Param_StackBNum' has a wrong offset!");
static_assert(offsetof(WBP_StackB_L_C_SetStackBNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_StackB_L_C_SetStackBNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_StackB_L.WBP_StackB_L_C.SetStackBMax
// 0x0004 (0x0004 - 0x0000)
struct WBP_StackB_L_C_SetStackBMax final
{
public:
	int32                                         Param_StackBMax;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StackB_L_C_SetStackBMax) == 0x000004, "Wrong alignment on WBP_StackB_L_C_SetStackBMax");
static_assert(sizeof(WBP_StackB_L_C_SetStackBMax) == 0x000004, "Wrong size on WBP_StackB_L_C_SetStackBMax");
static_assert(offsetof(WBP_StackB_L_C_SetStackBMax, Param_StackBMax) == 0x000000, "Member 'WBP_StackB_L_C_SetStackBMax::Param_StackBMax' has a wrong offset!");

// Function WBP_StackB_L.WBP_StackB_L_C.SetVisibleStackBMax
// 0x0001 (0x0001 - 0x0000)
struct WBP_StackB_L_C_SetVisibleStackBMax final
{
public:
	bool                                          Param_VisibleStackBMax;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_L_C_SetVisibleStackBMax) == 0x000001, "Wrong alignment on WBP_StackB_L_C_SetVisibleStackBMax");
static_assert(sizeof(WBP_StackB_L_C_SetVisibleStackBMax) == 0x000001, "Wrong size on WBP_StackB_L_C_SetVisibleStackBMax");
static_assert(offsetof(WBP_StackB_L_C_SetVisibleStackBMax, Param_VisibleStackBMax) == 0x000000, "Member 'WBP_StackB_L_C_SetVisibleStackBMax::Param_VisibleStackBMax' has a wrong offset!");

// Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBView
// 0x0002 (0x0002 - 0x0000)
struct WBP_StackB_L_C_UpdateStackBView final
{
public:
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_L_C_UpdateStackBView) == 0x000001, "Wrong alignment on WBP_StackB_L_C_UpdateStackBView");
static_assert(sizeof(WBP_StackB_L_C_UpdateStackBView) == 0x000002, "Wrong size on WBP_StackB_L_C_UpdateStackBView");
static_assert(offsetof(WBP_StackB_L_C_UpdateStackBView, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000000, "Member 'WBP_StackB_L_C_UpdateStackBView::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_L_C_UpdateStackBView, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000001, "Member 'WBP_StackB_L_C_UpdateStackBView::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

