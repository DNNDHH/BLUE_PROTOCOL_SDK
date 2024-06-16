#pragma once

 

// Package: P011HUDStackM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function P011HUDStackM.P011HUDStackM_C.ExecuteUbergraph_P011HUDStackM
// 0x0040 (0x0040 - 0x0000)
struct P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7308[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7309[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_730A[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM) == 0x000008, "Wrong alignment on P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM");
static_assert(sizeof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM) == 0x000040, "Wrong size on P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, EntryPoint) == 0x000000, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::EntryPoint' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, Temp_bool_Variable) == 0x000018, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000019, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000020, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, K2Node_CustomEvent_InUIType) == 0x000028, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, K2Node_CustomEvent_bInVisibility) == 0x000029, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, K2Node_CustomEvent_bInInstantly) == 0x00002A, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, CallFunc_IsValid_ReturnValue) == 0x00002B, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, K2Node_Select_Default) == 0x00002C, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000030, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function P011HUDStackM.P011HUDStackM_C.OnUIVisibleSettingChange
// 0x0003 (0x0003 - 0x0000)
struct P011HUDStackM_C_OnUIVisibleSettingChange final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P011HUDStackM_C_OnUIVisibleSettingChange) == 0x000001, "Wrong alignment on P011HUDStackM_C_OnUIVisibleSettingChange");
static_assert(sizeof(P011HUDStackM_C_OnUIVisibleSettingChange) == 0x000003, "Wrong size on P011HUDStackM_C_OnUIVisibleSettingChange");
static_assert(offsetof(P011HUDStackM_C_OnUIVisibleSettingChange, InUIType) == 0x000000, "Member 'P011HUDStackM_C_OnUIVisibleSettingChange::InUIType' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_OnUIVisibleSettingChange, bInVisibility) == 0x000001, "Member 'P011HUDStackM_C_OnUIVisibleSettingChange::bInVisibility' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_OnUIVisibleSettingChange, bInInstantly) == 0x000002, "Member 'P011HUDStackM_C_OnUIVisibleSettingChange::bInInstantly' has a wrong offset!");

// Function P011HUDStackM.P011HUDStackM_C.OnSetEditMode
// 0x0010 (0x0010 - 0x0000)
struct P011HUDStackM_C_OnSetEditMode final
{
public:
	bool                                          InIsEdit;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_730B[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P011HUDStackM_C_OnSetEditMode) == 0x000004, "Wrong alignment on P011HUDStackM_C_OnSetEditMode");
static_assert(sizeof(P011HUDStackM_C_OnSetEditMode) == 0x000010, "Wrong size on P011HUDStackM_C_OnSetEditMode");
static_assert(offsetof(P011HUDStackM_C_OnSetEditMode, InIsEdit) == 0x000000, "Member 'P011HUDStackM_C_OnSetEditMode::InIsEdit' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_OnSetEditMode, Temp_bool_Variable) == 0x000001, "Member 'P011HUDStackM_C_OnSetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_OnSetEditMode, Temp_int_Variable) == 0x000004, "Member 'P011HUDStackM_C_OnSetEditMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_OnSetEditMode, Temp_int_Variable_1) == 0x000008, "Member 'P011HUDStackM_C_OnSetEditMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_OnSetEditMode, K2Node_Select_Default) == 0x00000C, "Member 'P011HUDStackM_C_OnSetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function P011HUDStackM.P011HUDStackM_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P011HUDStackM_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P011HUDStackM_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P011HUDStackM_C_PlayAnimForwardInOut");
static_assert(sizeof(P011HUDStackM_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P011HUDStackM_C_PlayAnimForwardInOut");
static_assert(offsetof(P011HUDStackM_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P011HUDStackM_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P011HUDStackM.P011HUDStackM_C.PlayAnimReverseInOut
// 0x0008 (0x0008 - 0x0000)
struct P011HUDStackM_C_PlayAnimReverseInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P011HUDStackM_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P011HUDStackM_C_PlayAnimReverseInOut");
static_assert(sizeof(P011HUDStackM_C_PlayAnimReverseInOut) == 0x000008, "Wrong size on P011HUDStackM_C_PlayAnimReverseInOut");
static_assert(offsetof(P011HUDStackM_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'P011HUDStackM_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function P011HUDStackM.P011HUDStackM_C.On Set StackM Value
// 0x00B0 (0x00B0 - 0x0000)
struct P011HUDStackM_C_On_Set_StackM_Value final
{
public:
	int32                                         InStack;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InAccRate;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_730C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_5;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_6;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_7;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_8;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_4;               // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_5;               // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_6;               // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_7;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_8;               // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P011HUDStackM_C_On_Set_StackM_Value) == 0x000008, "Wrong alignment on P011HUDStackM_C_On_Set_StackM_Value");
static_assert(sizeof(P011HUDStackM_C_On_Set_StackM_Value) == 0x0000B0, "Wrong size on P011HUDStackM_C_On_Set_StackM_Value");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, InStack) == 0x000000, "Member 'P011HUDStackM_C_On_Set_StackM_Value::InStack' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, InAccRate) == 0x000004, "Member 'P011HUDStackM_C_On_Set_StackM_Value::InAccRate' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, K2Node_SwitchInteger_CmpSuccess) == 0x000008, "Member 'P011HUDStackM_C_On_Set_StackM_Value::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000018, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000020, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000028, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000030, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue_5) == 0x000038, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue_6) == 0x000040, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue_7) == 0x000048, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_SlotAsCanvasSlot_ReturnValue_8) == 0x000050, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_SlotAsCanvasSlot_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000058, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue) == 0x00005C, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue_1) == 0x000064, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue_2) == 0x00006C, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue_3) == 0x000074, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue_4) == 0x00007C, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue_5) == 0x000084, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue_6) == 0x00008C, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000094, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue_7) == 0x000098, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_Multiply_IntFloat_ReturnValue_2) == 0x0000A0, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_Multiply_IntFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_MakeVector2D_ReturnValue_8) == 0x0000A4, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_MakeVector2D_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(P011HUDStackM_C_On_Set_StackM_Value, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0000AC, "Member 'P011HUDStackM_C_On_Set_StackM_Value::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

