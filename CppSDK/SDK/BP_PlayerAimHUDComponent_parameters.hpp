#pragma once

 

// Package: BP_PlayerAimHUDComponent

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ExecuteUbergraph_BP_PlayerAimHUDComponent
// 0x0058 (0x0058 - 0x0000)
struct BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F3F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F40[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F41[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPlayerCurrentHp_ReturnValue;           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBUIType                                     K2Node_CustomEvent_InUIType_1;                     // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InVisibility;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F42[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F43[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClimbing_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsControll_OutIsControll;                 // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent) == 0x000008, "Wrong alignment on BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent) == 0x000058, "Wrong size on BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, EntryPoint) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, Temp_bool_IsClosed_Variable) == 0x000018, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, Temp_bool_IsClosed_Variable_1) == 0x000020, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, CallFunc_GetPlayerCurrentHp_ReturnValue) == 0x000024, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::CallFunc_GetPlayerCurrentHp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_Event_EndPlayReason) == 0x000028, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000029, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_CustomEvent_InUIType_1) == 0x00002A, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_CustomEvent_InUIType_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_CustomEvent_InVisibility) == 0x00002B, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000030, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_CustomEvent_InUIType) == 0x000038, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_CustomEvent_bInVisibility) == 0x000039, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_CustomEvent_bInInstantly) == 0x00003A, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000048, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, CallFunc_IsClimbing_ReturnValue) == 0x000051, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::CallFunc_IsClimbing_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, Temp_bool_Has_Been_Initd_Variable_1) == 0x000052, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, CallFunc_IsControll_OutIsControll) == 0x000053, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::CallFunc_IsControll_OutIsControll' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000054, "Member 'BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.OnChangeVisibleSetting
// 0x0002 (0x0002 - 0x0000)
struct BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InVisibility;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting) == 0x000001, "Wrong alignment on BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting) == 0x000002, "Wrong size on BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting, InUIType) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting, InVisibility) == 0x000001, "Member 'BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting::InVisibility' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerAimHUDComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PlayerAimHUDComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PlayerAimHUDComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerAimHUDComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PlayerAimHUDComponent_C_ReceiveTick");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_PlayerAimHUDComponent_C_ReceiveTick");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.CreateUI
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerAimHUDComponent_C_CreateUI final
{
public:
	ESBClassType                                  CallFunc_GetClassType_OutIsClassType;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F44[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonAimModeUI_C*                     CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_CreateUI) == 0x000008, "Wrong alignment on BP_PlayerAimHUDComponent_C_CreateUI");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_CreateUI) == 0x000010, "Wrong size on BP_PlayerAimHUDComponent_C_CreateUI");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_CreateUI, CallFunc_GetClassType_OutIsClassType) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_CreateUI::CallFunc_GetClassType_OutIsClassType' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_CreateUI, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_PlayerAimHUDComponent_C_CreateUI::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.RemoveUI
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerAimHUDComponent_C_RemoveUI final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_RemoveUI) == 0x000001, "Wrong alignment on BP_PlayerAimHUDComponent_C_RemoveUI");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_RemoveUI) == 0x000001, "Wrong size on BP_PlayerAimHUDComponent_C_RemoveUI");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_RemoveUI, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_RemoveUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.SetAimUIVisibility
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerAimHUDComponent_C_SetAimUIVisibility final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F45[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPlayerCurrentHp_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsControll_OutIsControll;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility) == 0x000004, "Wrong alignment on BP_PlayerAimHUDComponent_C_SetAimUIVisibility");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility) == 0x000010, "Wrong size on BP_PlayerAimHUDComponent_C_SetAimUIVisibility");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, IsVisible) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::IsVisible' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, Temp_byte_Variable) == 0x000001, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, CallFunc_GetPlayerCurrentHp_ReturnValue) == 0x000004, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::CallFunc_GetPlayerCurrentHp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, Temp_bool_Variable) == 0x000008, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000009, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, CallFunc_IsControll_OutIsControll) == 0x00000A, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::CallFunc_IsControll_OutIsControll' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_SetAimUIVisibility, K2Node_Select_Default) == 0x00000D, "Member 'BP_PlayerAimHUDComponent_C_SetAimUIVisibility::K2Node_Select_Default' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UpdateAimMarkerVisibility
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F46[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerTargetingComponent*            CallFunc_GetPlayerTargetingComponent_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnsheathe_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTargetLockonSuspend_ReturnValue;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTargetLockOn_ReturnValue;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility) == 0x000008, "Wrong alignment on BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility) == 0x000028, "Wrong size on BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000008, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_GetPlayerTargetingComponent_ReturnValue) == 0x000018, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_GetPlayerTargetingComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_IsUnsheathe_ReturnValue) == 0x000020, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_IsUnsheathe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_IsTargetLockonSuspend_ReturnValue) == 0x000021, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_IsTargetLockonSuspend_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_IsTargetLockOn_ReturnValue) == 0x000022, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_IsTargetLockOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000023, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000024, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000025, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000026, "Member 'BP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.GetClassType
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerAimHUDComponent_C_GetClassType final
{
public:
	ESBClassType                                  OutIsClassType;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F47[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_GetClassType) == 0x000008, "Wrong alignment on BP_PlayerAimHUDComponent_C_GetClassType");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_GetClassType) == 0x000020, "Wrong size on BP_PlayerAimHUDComponent_C_GetClassType");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_GetClassType, OutIsClassType) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_GetClassType::OutIsClassType' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_GetClassType, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_PlayerAimHUDComponent_C_GetClassType::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_GetClassType, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'BP_PlayerAimHUDComponent_C_GetClassType::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_GetClassType, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerAimHUDComponent_C_GetClassType::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.IsControll
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerAimHUDComponent_C_IsControll final
{
public:
	bool                                          OutIsControll;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F48[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerAimHUDComponent_C_IsControll) == 0x000008, "Wrong alignment on BP_PlayerAimHUDComponent_C_IsControll");
static_assert(sizeof(BP_PlayerAimHUDComponent_C_IsControll) == 0x000020, "Wrong size on BP_PlayerAimHUDComponent_C_IsControll");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_IsControll, OutIsControll) == 0x000000, "Member 'BP_PlayerAimHUDComponent_C_IsControll::OutIsControll' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_IsControll, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'BP_PlayerAimHUDComponent_C_IsControll::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_IsControll, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_PlayerAimHUDComponent_C_IsControll::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_IsControll, CallFunc_IsDedicatedServer_ReturnValue) == 0x000018, "Member 'BP_PlayerAimHUDComponent_C_IsControll::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_IsControll, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000019, "Member 'BP_PlayerAimHUDComponent_C_IsControll::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_IsControll, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'BP_PlayerAimHUDComponent_C_IsControll::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerAimHUDComponent_C_IsControll, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'BP_PlayerAimHUDComponent_C_IsControll::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

