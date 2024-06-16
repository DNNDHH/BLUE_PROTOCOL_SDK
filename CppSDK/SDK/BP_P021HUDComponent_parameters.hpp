#pragma once

 

// Package: BP_P021HUDComponent

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_P021HUDComponent.BP_P021HUDComponent_C.ExecuteUbergraph_BP_P021HUDComponent
// 0x0080 (0x0080 - 0x0000)
struct BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6CDF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsShow;                        // 0x0024(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE0[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE1[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE2[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsShow)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	ESBUIType                                     CallFunc_GetUIType_ReturnValue;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CE3[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE4[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnsheathe_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE5[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent) == 0x000008, "Wrong alignment on BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent");
static_assert(sizeof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent) == 0x000080, "Wrong size on BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, EntryPoint) == 0x000000, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000018, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_CustomEvent_InUIType) == 0x000020, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_CustomEvent_bInVisibility) == 0x000021, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_CustomEvent_bInInstantly) == 0x000022, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_IsValid_ReturnValue) == 0x000023, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_CustomEvent_bIsShow) == 0x000024, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_CustomEvent_bIsShow' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_GetConfigSaveManager_IsValid) == 0x000025, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000028, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000030, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000038, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000040, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_GetUIType_ReturnValue) == 0x00005C, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_GetUIType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000060, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000068, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000070, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, CallFunc_IsUnsheathe_ReturnValue) == 0x000079, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::CallFunc_IsUnsheathe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent, K2Node_Event_DeltaSeconds) == 0x00007C, "Member 'BP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_P021HUDComponent.BP_P021HUDComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_P021HUDComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_P021HUDComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_P021HUDComponent_C_ReceiveTick");
static_assert(sizeof(BP_P021HUDComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_P021HUDComponent_C_ReceiveTick");
static_assert(offsetof(BP_P021HUDComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_P021HUDComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnChangeShowAlwaysHUD_event
// 0x0001 (0x0001 - 0x0000)
struct BP_P021HUDComponent_C_OnChangeShowAlwaysHUD_event final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P021HUDComponent_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong alignment on BP_P021HUDComponent_C_OnChangeShowAlwaysHUD_event");
static_assert(sizeof(BP_P021HUDComponent_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong size on BP_P021HUDComponent_C_OnChangeShowAlwaysHUD_event");
static_assert(offsetof(BP_P021HUDComponent_C_OnChangeShowAlwaysHUD_event, bIsShow) == 0x000000, "Member 'BP_P021HUDComponent_C_OnChangeShowAlwaysHUD_event::bIsShow' has a wrong offset!");

// Function BP_P021HUDComponent.BP_P021HUDComponent_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'BP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnCreateUI
// 0x0010 (0x0010 - 0x0000)
struct BP_P021HUDComponent_C_OnCreateUI final
{
public:
	class UP021HUD_C*                             CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P021HUDComponent_C_OnCreateUI) == 0x000008, "Wrong alignment on BP_P021HUDComponent_C_OnCreateUI");
static_assert(sizeof(BP_P021HUDComponent_C_OnCreateUI) == 0x000010, "Wrong size on BP_P021HUDComponent_C_OnCreateUI");
static_assert(offsetof(BP_P021HUDComponent_C_OnCreateUI, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_P021HUDComponent_C_OnCreateUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_P021HUDComponent_C_OnCreateUI, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_P021HUDComponent_C_OnCreateUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnRemoveUI
// 0x0001 (0x0001 - 0x0000)
struct BP_P021HUDComponent_C_OnRemoveUI final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P021HUDComponent_C_OnRemoveUI) == 0x000001, "Wrong alignment on BP_P021HUDComponent_C_OnRemoveUI");
static_assert(sizeof(BP_P021HUDComponent_C_OnRemoveUI) == 0x000001, "Wrong size on BP_P021HUDComponent_C_OnRemoveUI");
static_assert(offsetof(BP_P021HUDComponent_C_OnRemoveUI, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_P021HUDComponent_C_OnRemoveUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnUpdateLayoutView
// 0x0001 (0x0001 - 0x0000)
struct BP_P021HUDComponent_C_OnUpdateLayoutView final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_P021HUDComponent_C_OnUpdateLayoutView) == 0x000001, "Wrong alignment on BP_P021HUDComponent_C_OnUpdateLayoutView");
static_assert(sizeof(BP_P021HUDComponent_C_OnUpdateLayoutView) == 0x000001, "Wrong size on BP_P021HUDComponent_C_OnUpdateLayoutView");
static_assert(offsetof(BP_P021HUDComponent_C_OnUpdateLayoutView, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_P021HUDComponent_C_OnUpdateLayoutView::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_P021HUDComponent.BP_P021HUDComponent_C.GetUIType
// 0x0001 (0x0001 - 0x0000)
struct BP_P021HUDComponent_C_GetUIType final
{
public:
	ESBUIType                                     ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_P021HUDComponent_C_GetUIType) == 0x000001, "Wrong alignment on BP_P021HUDComponent_C_GetUIType");
static_assert(sizeof(BP_P021HUDComponent_C_GetUIType) == 0x000001, "Wrong size on BP_P021HUDComponent_C_GetUIType");
static_assert(offsetof(BP_P021HUDComponent_C_GetUIType, ReturnValue) == 0x000000, "Member 'BP_P021HUDComponent_C_GetUIType::ReturnValue' has a wrong offset!");

}

