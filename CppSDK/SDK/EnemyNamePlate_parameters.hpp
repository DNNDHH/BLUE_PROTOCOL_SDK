#pragma once

 

// Package: EnemyNamePlate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EnemyNamePlate.EnemyNamePlate_C.ExecuteUbergraph_EnemyNamePlate
// 0x00B0 (0x00B0 - 0x0000)
struct EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9AB2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AB3[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AB4[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_HpRate;                               // 0x0048(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9AB5[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDepth;                              // 0x0070(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AB6[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetEffectMaterial_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AB7[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_InScreenPositionOffset;               // 0x0084(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AB8[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetEffectMaterial_ReturnValue_1;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate) == 0x000008, "Wrong alignment on EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate");
static_assert(sizeof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate) == 0x0000B0, "Wrong size on EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, EntryPoint) == 0x000000, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::EntryPoint' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000018, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, K2Node_CustomEvent_InUIType) == 0x000028, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, K2Node_CustomEvent_bInVisibility) == 0x000029, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, K2Node_CustomEvent_bInInstantly) == 0x00002A, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000030, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000039, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, K2Node_Event_HpRate) == 0x000048, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::K2Node_Event_HpRate' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000068, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, K2Node_Event_InDepth) == 0x000070, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::K2Node_Event_InDepth' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_IsValid_ReturnValue) == 0x000074, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_GetEffectMaterial_ReturnValue) == 0x000078, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_GetEffectMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, K2Node_Event_InScreenPositionOffset) == 0x000084, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::K2Node_Event_InScreenPositionOffset' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000094, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_GetSize_ReturnValue) == 0x000098, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_GetEffectMaterial_ReturnValue_1) == 0x0000A0, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_GetEffectMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_IsValid_ReturnValue_2) == 0x0000A8, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate, CallFunc_IsValid_ReturnValue_3) == 0x0000A9, "Member 'EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetScreenPositionOffset
// 0x0010 (0x0010 - 0x0000)
struct EnemyNamePlate_C_SetScreenPositionOffset final
{
public:
	struct FLinearColor                           InScreenPositionOffset;                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EnemyNamePlate_C_SetScreenPositionOffset) == 0x000004, "Wrong alignment on EnemyNamePlate_C_SetScreenPositionOffset");
static_assert(sizeof(EnemyNamePlate_C_SetScreenPositionOffset) == 0x000010, "Wrong size on EnemyNamePlate_C_SetScreenPositionOffset");
static_assert(offsetof(EnemyNamePlate_C_SetScreenPositionOffset, InScreenPositionOffset) == 0x000000, "Member 'EnemyNamePlate_C_SetScreenPositionOffset::InScreenPositionOffset' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetDepth
// 0x0004 (0x0004 - 0x0000)
struct EnemyNamePlate_C_SetDepth final
{
public:
	float                                         InDepth;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EnemyNamePlate_C_SetDepth) == 0x000004, "Wrong alignment on EnemyNamePlate_C_SetDepth");
static_assert(sizeof(EnemyNamePlate_C_SetDepth) == 0x000004, "Wrong size on EnemyNamePlate_C_SetDepth");
static_assert(offsetof(EnemyNamePlate_C_SetDepth, InDepth) == 0x000000, "Member 'EnemyNamePlate_C_SetDepth::InDepth' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetHpRate
// 0x0004 (0x0004 - 0x0000)
struct EnemyNamePlate_C_SetHpRate final
{
public:
	float                                         HPRate;                                            // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EnemyNamePlate_C_SetHpRate) == 0x000004, "Wrong alignment on EnemyNamePlate_C_SetHpRate");
static_assert(sizeof(EnemyNamePlate_C_SetHpRate) == 0x000004, "Wrong size on EnemyNamePlate_C_SetHpRate");
static_assert(offsetof(EnemyNamePlate_C_SetHpRate, HPRate) == 0x000000, "Member 'EnemyNamePlate_C_SetHpRate::HPRate' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetupBuffIcon
// 0x0020 (0x0020 - 0x0000)
struct EnemyNamePlate_C_SetupBuffIcon final
{
public:
	TScriptInterface<class ISBBattleStatusInterface> CallFunc_GetBattleStatusComponent_self_CastInput;  // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBBattleStatusComponent*               CallFunc_GetBattleStatusComponent_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowBuddyIcon_ShowBuddyIcon;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EnemyNamePlate_C_SetupBuffIcon) == 0x000008, "Wrong alignment on EnemyNamePlate_C_SetupBuffIcon");
static_assert(sizeof(EnemyNamePlate_C_SetupBuffIcon) == 0x000020, "Wrong size on EnemyNamePlate_C_SetupBuffIcon");
static_assert(offsetof(EnemyNamePlate_C_SetupBuffIcon, CallFunc_GetBattleStatusComponent_self_CastInput) == 0x000000, "Member 'EnemyNamePlate_C_SetupBuffIcon::CallFunc_GetBattleStatusComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetupBuffIcon, CallFunc_GetBattleStatusComponent_ReturnValue) == 0x000010, "Member 'EnemyNamePlate_C_SetupBuffIcon::CallFunc_GetBattleStatusComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetupBuffIcon, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'EnemyNamePlate_C_SetupBuffIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetupBuffIcon, CallFunc_IsShowBuddyIcon_ShowBuddyIcon) == 0x000019, "Member 'EnemyNamePlate_C_SetupBuffIcon::CallFunc_IsShowBuddyIcon_ShowBuddyIcon' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetupBuffIcon, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'EnemyNamePlate_C_SetupBuffIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetColorText
// 0x0040 (0x0040 - 0x0000)
struct EnemyNamePlate_C_SetColorText final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColorIndex;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_4;        // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EnemyNamePlate_C_SetColorText) == 0x000008, "Wrong alignment on EnemyNamePlate_C_SetColorText");
static_assert(sizeof(EnemyNamePlate_C_SetColorText) == 0x000040, "Wrong size on EnemyNamePlate_C_SetColorText");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, Level) == 0x000000, "Member 'EnemyNamePlate_C_SetColorText::Level' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, ColorIndex) == 0x000004, "Member 'EnemyNamePlate_C_SetColorText::ColorIndex' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, CallFunc_GetClassLevel_ReturnValue) == 0x000008, "Member 'EnemyNamePlate_C_SetColorText::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'EnemyNamePlate_C_SetColorText::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'EnemyNamePlate_C_SetColorText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000038, "Member 'EnemyNamePlate_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000039, "Member 'EnemyNamePlate_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x00003A, "Member 'EnemyNamePlate_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x00003B, "Member 'EnemyNamePlate_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue_4) == 0x00003C, "Member 'EnemyNamePlate_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue_4' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetColorLV
// 0x0028 (0x0028 - 0x0000)
struct EnemyNamePlate_C_SetColorLV final
{
public:
	struct FSlateColor                            InColorAndOpacity;                                 // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EnemyNamePlate_C_SetColorLV) == 0x000008, "Wrong alignment on EnemyNamePlate_C_SetColorLV");
static_assert(sizeof(EnemyNamePlate_C_SetColorLV) == 0x000028, "Wrong size on EnemyNamePlate_C_SetColorLV");
static_assert(offsetof(EnemyNamePlate_C_SetColorLV, InColorAndOpacity) == 0x000000, "Member 'EnemyNamePlate_C_SetColorLV::InColorAndOpacity' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetColorName
// 0x0028 (0x0028 - 0x0000)
struct EnemyNamePlate_C_SetColorName final
{
public:
	struct FSlateColor                            InColorAndOpacity;                                 // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EnemyNamePlate_C_SetColorName) == 0x000008, "Wrong alignment on EnemyNamePlate_C_SetColorName");
static_assert(sizeof(EnemyNamePlate_C_SetColorName) == 0x000028, "Wrong size on EnemyNamePlate_C_SetColorName");
static_assert(offsetof(EnemyNamePlate_C_SetColorName, InColorAndOpacity) == 0x000000, "Member 'EnemyNamePlate_C_SetColorName::InColorAndOpacity' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.OnDisplayStart
// 0x0008 (0x0008 - 0x0000)
struct EnemyNamePlate_C_OnDisplayStart final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EnemyNamePlate_C_OnDisplayStart) == 0x000008, "Wrong alignment on EnemyNamePlate_C_OnDisplayStart");
static_assert(sizeof(EnemyNamePlate_C_OnDisplayStart) == 0x000008, "Wrong size on EnemyNamePlate_C_OnDisplayStart");
static_assert(offsetof(EnemyNamePlate_C_OnDisplayStart, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'EnemyNamePlate_C_OnDisplayStart::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetLevel
// 0x0080 (0x0080 - 0x0000)
struct EnemyNamePlate_C_SetLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AB9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ABA[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};
static_assert(alignof(EnemyNamePlate_C_SetLevel) == 0x000008, "Wrong alignment on EnemyNamePlate_C_SetLevel");
static_assert(sizeof(EnemyNamePlate_C_SetLevel) == 0x000080, "Wrong size on EnemyNamePlate_C_SetLevel");
static_assert(offsetof(EnemyNamePlate_C_SetLevel, Level) == 0x000000, "Member 'EnemyNamePlate_C_SetLevel::Level' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetLevel, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'EnemyNamePlate_C_SetLevel::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetLevel, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'EnemyNamePlate_C_SetLevel::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetLevel, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'EnemyNamePlate_C_SetLevel::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetLevel, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'EnemyNamePlate_C_SetLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetLevel, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'EnemyNamePlate_C_SetLevel::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetLevel, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'EnemyNamePlate_C_SetLevel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetName
// 0x0028 (0x0028 - 0x0000)
struct EnemyNamePlate_C_SetName final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(EnemyNamePlate_C_SetName) == 0x000008, "Wrong alignment on EnemyNamePlate_C_SetName");
static_assert(sizeof(EnemyNamePlate_C_SetName) == 0x000028, "Wrong size on EnemyNamePlate_C_SetName");
static_assert(offsetof(EnemyNamePlate_C_SetName, Param_Name) == 0x000000, "Member 'EnemyNamePlate_C_SetName::Param_Name' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'EnemyNamePlate_C_SetName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetVisibleCanvas
// 0x0005 (0x0005 - 0x0000)
struct EnemyNamePlate_C_SetVisibleCanvas final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EnemyNamePlate_C_SetVisibleCanvas) == 0x000001, "Wrong alignment on EnemyNamePlate_C_SetVisibleCanvas");
static_assert(sizeof(EnemyNamePlate_C_SetVisibleCanvas) == 0x000005, "Wrong size on EnemyNamePlate_C_SetVisibleCanvas");
static_assert(offsetof(EnemyNamePlate_C_SetVisibleCanvas, Param_IsVisible) == 0x000000, "Member 'EnemyNamePlate_C_SetVisibleCanvas::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetVisibleCanvas, Temp_bool_Variable) == 0x000001, "Member 'EnemyNamePlate_C_SetVisibleCanvas::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetVisibleCanvas, Temp_byte_Variable) == 0x000002, "Member 'EnemyNamePlate_C_SetVisibleCanvas::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetVisibleCanvas, Temp_byte_Variable_1) == 0x000003, "Member 'EnemyNamePlate_C_SetVisibleCanvas::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_SetVisibleCanvas, K2Node_Select_Default) == 0x000004, "Member 'EnemyNamePlate_C_SetVisibleCanvas::K2Node_Select_Default' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.IsShowBuddyIcon
// 0x0020 (0x0020 - 0x0000)
struct EnemyNamePlate_C_IsShowBuddyIcon final
{
public:
	bool                                          ShowBuddyIcon;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ABB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ABC[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EnemyNamePlate_C_IsShowBuddyIcon) == 0x000008, "Wrong alignment on EnemyNamePlate_C_IsShowBuddyIcon");
static_assert(sizeof(EnemyNamePlate_C_IsShowBuddyIcon) == 0x000020, "Wrong size on EnemyNamePlate_C_IsShowBuddyIcon");
static_assert(offsetof(EnemyNamePlate_C_IsShowBuddyIcon, ShowBuddyIcon) == 0x000000, "Member 'EnemyNamePlate_C_IsShowBuddyIcon::ShowBuddyIcon' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_IsShowBuddyIcon, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'EnemyNamePlate_C_IsShowBuddyIcon::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_IsShowBuddyIcon, CallFunc_GetDebugFunction_IsValid) == 0x00000C, "Member 'EnemyNamePlate_C_IsShowBuddyIcon::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_IsShowBuddyIcon, CallFunc_GetDebugFunction_ReturnValue) == 0x000010, "Member 'EnemyNamePlate_C_IsShowBuddyIcon::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnemyNamePlate_C_IsShowBuddyIcon, CallFunc_GetBool_ReturnValue) == 0x000018, "Member 'EnemyNamePlate_C_IsShowBuddyIcon::CallFunc_GetBool_ReturnValue' has a wrong offset!");

// Function EnemyNamePlate.EnemyNamePlate_C.SetCharacter_Internal
// 0x0008 (0x0008 - 0x0000)
struct EnemyNamePlate_C_SetCharacter_Internal final
{
public:
	class ASBCharacter*                           InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EnemyNamePlate_C_SetCharacter_Internal) == 0x000008, "Wrong alignment on EnemyNamePlate_C_SetCharacter_Internal");
static_assert(sizeof(EnemyNamePlate_C_SetCharacter_Internal) == 0x000008, "Wrong size on EnemyNamePlate_C_SetCharacter_Internal");
static_assert(offsetof(EnemyNamePlate_C_SetCharacter_Internal, InCharacter) == 0x000000, "Member 'EnemyNamePlate_C_SetCharacter_Internal::InCharacter' has a wrong offset!");

}

