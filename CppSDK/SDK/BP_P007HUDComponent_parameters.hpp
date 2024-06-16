#pragma once

 

// Package: BP_P007HUDComponent

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_P007HUDComponent.BP_P007HUDComponent_C.ExecuteUbergraph_BP_P007HUDComponent
// 0x0070 (0x0070 - 0x0000)
struct BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F5B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsShow)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsShow;                        // 0x0024(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F5C[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnsheathe_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F5D[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F5E[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     CallFunc_GetUIType_ReturnValue;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F5F[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent) == 0x000008, "Wrong alignment on BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent");
static_assert(sizeof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent) == 0x000070, "Wrong size on BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, EntryPoint) == 0x000000, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000008, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_CustomEvent_InUIType) == 0x000021, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_CustomEvent_bInVisibility) == 0x000022, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_CustomEvent_bInInstantly) == 0x000023, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_CustomEvent_bIsShow) == 0x000024, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_CustomEvent_bIsShow' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_GetConfigSaveManager_IsValid) == 0x000025, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000028, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000030, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000038, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_IsUnsheathe_ReturnValue) == 0x000041, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_IsUnsheathe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000054, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000058, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000060, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_GetUIType_ReturnValue) == 0x000068, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_GetUIType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00006A, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent, K2Node_Event_DeltaSeconds) == 0x00006C, "Member 'BP_P007HUDComponent_C_ExecuteUbergraph_BP_P007HUDComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_P007HUDComponent.BP_P007HUDComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_P007HUDComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_P007HUDComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_P007HUDComponent_C_ReceiveTick");
static_assert(sizeof(BP_P007HUDComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_P007HUDComponent_C_ReceiveTick");
static_assert(offsetof(BP_P007HUDComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_P007HUDComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_P007HUDComponent.BP_P007HUDComponent_C.OnChangeShowAlwaysHUD_event
// 0x0001 (0x0001 - 0x0000)
struct BP_P007HUDComponent_C_OnChangeShowAlwaysHUD_event final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P007HUDComponent_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong alignment on BP_P007HUDComponent_C_OnChangeShowAlwaysHUD_event");
static_assert(sizeof(BP_P007HUDComponent_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong size on BP_P007HUDComponent_C_OnChangeShowAlwaysHUD_event");
static_assert(offsetof(BP_P007HUDComponent_C_OnChangeShowAlwaysHUD_event, bIsShow) == 0x000000, "Member 'BP_P007HUDComponent_C_OnChangeShowAlwaysHUD_event::bIsShow' has a wrong offset!");

// Function BP_P007HUDComponent.BP_P007HUDComponent_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'BP_P007HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function BP_P007HUDComponent.BP_P007HUDComponent_C.OnCreateUI
// 0x0010 (0x0010 - 0x0000)
struct BP_P007HUDComponent_C_OnCreateUI final
{
public:
	class UP007HUD_C*                             CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P007HUDComponent_C_OnCreateUI) == 0x000008, "Wrong alignment on BP_P007HUDComponent_C_OnCreateUI");
static_assert(sizeof(BP_P007HUDComponent_C_OnCreateUI) == 0x000010, "Wrong size on BP_P007HUDComponent_C_OnCreateUI");
static_assert(offsetof(BP_P007HUDComponent_C_OnCreateUI, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_P007HUDComponent_C_OnCreateUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P007HUDComponent_C_OnCreateUI, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_P007HUDComponent_C_OnCreateUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_P007HUDComponent.BP_P007HUDComponent_C.OnRemoveUI
// 0x0001 (0x0001 - 0x0000)
struct BP_P007HUDComponent_C_OnRemoveUI final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P007HUDComponent_C_OnRemoveUI) == 0x000001, "Wrong alignment on BP_P007HUDComponent_C_OnRemoveUI");
static_assert(sizeof(BP_P007HUDComponent_C_OnRemoveUI) == 0x000001, "Wrong size on BP_P007HUDComponent_C_OnRemoveUI");
static_assert(offsetof(BP_P007HUDComponent_C_OnRemoveUI, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_P007HUDComponent_C_OnRemoveUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_P007HUDComponent.BP_P007HUDComponent_C.OnUpdateLayoutView
// 0x0001 (0x0001 - 0x0000)
struct BP_P007HUDComponent_C_OnUpdateLayoutView final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P007HUDComponent_C_OnUpdateLayoutView) == 0x000001, "Wrong alignment on BP_P007HUDComponent_C_OnUpdateLayoutView");
static_assert(sizeof(BP_P007HUDComponent_C_OnUpdateLayoutView) == 0x000001, "Wrong size on BP_P007HUDComponent_C_OnUpdateLayoutView");
static_assert(offsetof(BP_P007HUDComponent_C_OnUpdateLayoutView, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_P007HUDComponent_C_OnUpdateLayoutView::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_P007HUDComponent.BP_P007HUDComponent_C.GetUIType
// 0x0001 (0x0001 - 0x0000)
struct BP_P007HUDComponent_C_GetUIType final
{
public:
	ESBUIType                                     ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_P007HUDComponent_C_GetUIType) == 0x000001, "Wrong alignment on BP_P007HUDComponent_C_GetUIType");
static_assert(sizeof(BP_P007HUDComponent_C_GetUIType) == 0x000001, "Wrong size on BP_P007HUDComponent_C_GetUIType");
static_assert(offsetof(BP_P007HUDComponent_C_GetUIType, ReturnValue) == 0x000000, "Member 'BP_P007HUDComponent_C_GetUIType::ReturnValue' has a wrong offset!");

}

