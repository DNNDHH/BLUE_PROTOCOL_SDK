#pragma once

 

// Package: EventIcon

#include "Basic.hpp"

#include "ToolTipType_structs.hpp"


namespace SDK::Params
{

// Function EventIcon.EventIcon_C.GetToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct EventIcon_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventIconToolTip_C*                    CallFunc_CreateToolTipWidgetifNeeded_Widget;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on EventIcon_C_GetToolTipWidget_0");
static_assert(sizeof(EventIcon_C_GetToolTipWidget_0) == 0x000010, "Wrong size on EventIcon_C_GetToolTipWidget_0");
static_assert(offsetof(EventIcon_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'EventIcon_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(EventIcon_C_GetToolTipWidget_0, CallFunc_CreateToolTipWidgetifNeeded_Widget) == 0x000008, "Member 'EventIcon_C_GetToolTipWidget_0::CallFunc_CreateToolTipWidgetifNeeded_Widget' has a wrong offset!");

// Function EventIcon.EventIcon_C.CreateToolTipWidgetifNeeded
// 0x0050 (0x0050 - 0x0000)
struct EventIcon_C_CreateToolTipWidgetifNeeded final
{
public:
	class UEventIconToolTip_C*                    Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EToolTipType                                  ToolTipType;                                       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B81[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventIconToolTip_C*                    CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B82[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B83[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedToolTip_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventIconToolTip_C*                    K2Node_DynamicCast_AsEvent_Icon_Tool_Tip;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventIcon_C_CreateToolTipWidgetifNeeded) == 0x000008, "Wrong alignment on EventIcon_C_CreateToolTipWidgetifNeeded");
static_assert(sizeof(EventIcon_C_CreateToolTipWidgetifNeeded) == 0x000050, "Wrong size on EventIcon_C_CreateToolTipWidgetifNeeded");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, Widget) == 0x000000, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::Widget' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, ToolTipType) == 0x000008, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::ToolTipType' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00000C, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Create_ReturnValue) == 0x000010, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000018, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_IsValid) == 0x00001C, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_ReturnValue) == 0x000020, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_IsValid_1) == 0x000028, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_ReturnValue_1) == 0x000030, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetCachedToolTip_ReturnValue) == 0x000038, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetCachedToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, K2Node_DynamicCast_AsEvent_Icon_Tool_Tip) == 0x000040, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::K2Node_DynamicCast_AsEvent_Icon_Tool_Tip' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventIcon_C_CreateToolTipWidgetifNeeded, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'EventIcon_C_CreateToolTipWidgetifNeeded::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

