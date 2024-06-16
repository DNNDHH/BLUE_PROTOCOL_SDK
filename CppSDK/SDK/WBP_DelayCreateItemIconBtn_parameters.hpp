#pragma once

 

// Package: WBP_DelayCreateItemIconBtn

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.ExecuteUbergraph_WBP_DelayCreateItemIconBtn
// 0x0010 (0x0010 - 0x0000)
struct WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DF9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         CallFunc_TryCreateWidget_Widget;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn) == 0x000008, "Wrong alignment on WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn");
static_assert(sizeof(WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn) == 0x000010, "Wrong size on WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn");
static_assert(offsetof(WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn, EntryPoint) == 0x000000, "Member 'WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn, CallFunc_TryCreateWidget_Widget) == 0x000008, "Member 'WBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn::CallFunc_TryCreateWidget_Widget' has a wrong offset!");

// Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.TryCreateWidget
// 0x0030 (0x0030 - 0x0000)
struct WBP_DelayCreateItemIconBtn_C_TryCreateWidget final
{
public:
	class UItemIconBtn_C*                         Param_Widget;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DFA[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_DelayCreateItemIconBtn_C_TryCreateWidget) == 0x000008, "Wrong alignment on WBP_DelayCreateItemIconBtn_C_TryCreateWidget");
static_assert(sizeof(WBP_DelayCreateItemIconBtn_C_TryCreateWidget) == 0x000030, "Wrong size on WBP_DelayCreateItemIconBtn_C_TryCreateWidget");
static_assert(offsetof(WBP_DelayCreateItemIconBtn_C_TryCreateWidget, Param_Widget) == 0x000000, "Member 'WBP_DelayCreateItemIconBtn_C_TryCreateWidget::Param_Widget' has a wrong offset!");
static_assert(offsetof(WBP_DelayCreateItemIconBtn_C_TryCreateWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_DelayCreateItemIconBtn_C_TryCreateWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DelayCreateItemIconBtn_C_TryCreateWidget, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'WBP_DelayCreateItemIconBtn_C_TryCreateWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DelayCreateItemIconBtn_C_TryCreateWidget, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_DelayCreateItemIconBtn_C_TryCreateWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DelayCreateItemIconBtn_C_TryCreateWidget, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x000020, "Member 'WBP_DelayCreateItemIconBtn_C_TryCreateWidget::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(WBP_DelayCreateItemIconBtn_C_TryCreateWidget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_DelayCreateItemIconBtn_C_TryCreateWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

