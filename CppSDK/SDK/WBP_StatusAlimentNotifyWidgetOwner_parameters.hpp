#pragma once

 

// Package: WBP_StatusAlimentNotifyWidgetOwner

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner
// 0x0088 (0x0088 - 0x0000)
struct WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E6B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStatusAlimentNotifyWidget*           CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusAlimentNotify_C*                 K2Node_DynamicCast_AsStatus_Aliment_Notify;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E6C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStatusAilmentIconConfig             K2Node_Event_InStatusAilmentIconType;              // 0x0028(0x0014)(NoDestructor)
	uint8                                         Pad_4E6D[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOwnerActor;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E6E[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E6F[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner) == 0x000008, "Wrong alignment on WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner");
static_assert(sizeof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner) == 0x000088, "Wrong size on WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, EntryPoint) == 0x000000, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, CallFunc_IsDemoPlaying_ReturnValue) == 0x000004, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_DynamicCast_AsStatus_Aliment_Notify) == 0x000010, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_DynamicCast_AsStatus_Aliment_Notify' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, CallFunc_AddChildToCanvas_ReturnValue) == 0x000020, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_Event_InStatusAilmentIconType) == 0x000028, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_Event_InStatusAilmentIconType' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_Event_InOwnerActor) == 0x000040, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_Event_InOwnerActor' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000048, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_CustomEvent_InUIType) == 0x000050, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_CustomEvent_bInVisibility) == 0x000051, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_CustomEvent_bInInstantly) == 0x000052, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_CreateDelegate_OutputDelegate) == 0x000054, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000064, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000068, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000080, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");

// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.OnUIVisibleSettingChange
// 0x0003 (0x0003 - 0x0000)
struct WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange) == 0x000001, "Wrong alignment on WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange");
static_assert(sizeof(WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange) == 0x000003, "Wrong size on WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange, InUIType) == 0x000000, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange::InUIType' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange, bInVisibility) == 0x000001, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange::bInVisibility' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange, bInInstantly) == 0x000002, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_OnUIVisibleSettingChange::bInInstantly' has a wrong offset!");

// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.AddProcessing
// 0x0020 (0x0020 - 0x0000)
struct WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing final
{
public:
	struct FSBStatusAilmentIconConfig             InStatusAilmentIconType;                           // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_4E70[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InOwnerActor;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing) == 0x000008, "Wrong alignment on WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing");
static_assert(sizeof(WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing) == 0x000020, "Wrong size on WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing, InStatusAilmentIconType) == 0x000000, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing::InStatusAilmentIconType' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing, InOwnerActor) == 0x000018, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_AddProcessing::InOwnerActor' has a wrong offset!");

// Function WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C.SetSystemVisibility
// 0x0002 (0x0002 - 0x0000)
struct WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility final
{
public:
	bool                                          bVisibility;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility) == 0x000001, "Wrong alignment on WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility");
static_assert(sizeof(WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility) == 0x000002, "Wrong size on WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility, bVisibility) == 0x000000, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility::bVisibility' has a wrong offset!");
static_assert(offsetof(WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'WBP_StatusAlimentNotifyWidgetOwner_C_SetSystemVisibility::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

