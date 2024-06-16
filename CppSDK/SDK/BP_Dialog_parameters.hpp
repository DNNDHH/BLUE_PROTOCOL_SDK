#pragma once

 

// Package: BP_Dialog

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_Dialog.BP_Dialog_C.ExecuteUbergraph_BP_Dialog
// 0x0108 (0x0108 - 0x0000)
struct BP_Dialog_C_ExecuteUbergraph_BP_Dialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9762[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Message_2;                            // 0x0010(0x0018)(ConstParm)
	EDialogPositionType                           K2Node_Event_type_1;                               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnableBgBlur_1;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9763[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Message_1;                            // 0x0030(0x0018)(ConstParm)
	EDialogPositionType                           K2Node_Event_type;                                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnableBgBlur;                        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9764[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0060(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9765[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Message;                        // 0x0078(0x0018)()
	class UUserWidget*                            K2Node_ComponentBoundEvent_InButtonWidget_2;       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_InButtonWidget_1;       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_InButtonWidget;         // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x00A8(0x0004)(NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9766[0x1];                                     // 0x00B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9767[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Event_AkEvent;                              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_EventName;                            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsBlock;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible_1;                           // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9768[0x5];                                     // 0x00E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Message;                              // 0x00E8(0x0018)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bVisible;                             // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog) == 0x000008, "Wrong alignment on BP_Dialog_C_ExecuteUbergraph_BP_Dialog");
static_assert(sizeof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog) == 0x000108, "Wrong size on BP_Dialog_C_ExecuteUbergraph_BP_Dialog");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, EntryPoint) == 0x000000, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_byte_Variable) == 0x000004, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_byte_Variable_1) == 0x000005, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_bool_Variable) == 0x000006, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_byte_Variable_2) == 0x000007, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_byte_Variable_3) == 0x000008, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_bool_Variable_1) == 0x000009, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_byte_Variable_4) == 0x00000A, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_byte_Variable_5) == 0x00000B, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_bool_Variable_2) == 0x00000C, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_Message_2) == 0x000010, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_Message_2' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_type_1) == 0x000028, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_type_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_bEnableBgBlur_1) == 0x000029, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_bEnableBgBlur_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_Message_1) == 0x000030, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_Message_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_type) == 0x000048, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_type' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_bEnableBgBlur) == 0x000049, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_bEnableBgBlur' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Select_Default) == 0x00004A, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Select_Default_1) == 0x00004B, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_Animation) == 0x000060, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000068, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_PlayAnimation_ReturnValue_2) == 0x000070, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_CustomEvent_Message) == 0x000078, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_ComponentBoundEvent_InButtonWidget_2) == 0x000090, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_ComponentBoundEvent_InButtonWidget_2' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_ComponentBoundEvent_InButtonWidget_1) == 0x000098, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_ComponentBoundEvent_InButtonWidget_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_ComponentBoundEvent_InButtonWidget) == 0x0000A0, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_ComponentBoundEvent_InButtonWidget' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_ShowCursor_ReturnValue) == 0x0000A8, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_SwitchEnum_CmpSuccess) == 0x0000AC, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_byte_Variable_6) == 0x0000AD, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_byte_Variable_7) == 0x0000AE, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_bool_Variable_3) == 0x0000AF, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, Temp_bool_Variable_4) == 0x0000B0, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000B1, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000B2, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_PlaySE_ReturnValue) == 0x0000B4, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000B8, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_PlaySE_ReturnValue_1) == 0x0000BC, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_PlaySE_ReturnValue_2) == 0x0000C0, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, CallFunc_PlaySE_ReturnValue_3) == 0x0000C4, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_AkEvent) == 0x0000C8, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_AkEvent' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_EventName) == 0x0000D0, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_EventName' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_CustomEvent_bIsBlock) == 0x0000E0, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_CustomEvent_bIsBlock' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Select_Default_2) == 0x0000E1, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_bVisible_1) == 0x0000E2, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_bVisible_1' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_Message) == 0x0000E8, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Select_Default_3) == 0x000100, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_ComponentBoundEvent_bIsChecked) == 0x000101, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Event_bVisible) == 0x000102, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_ExecuteUbergraph_BP_Dialog, K2Node_Select_Default_4) == 0x000103, "Member 'BP_Dialog_C_ExecuteUbergraph_BP_Dialog::K2Node_Select_Default_4' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.ShowWarning
// 0x0001 (0x0001 - 0x0000)
struct BP_Dialog_C_ShowWarning final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Dialog_C_ShowWarning) == 0x000001, "Wrong alignment on BP_Dialog_C_ShowWarning");
static_assert(sizeof(BP_Dialog_C_ShowWarning) == 0x000001, "Wrong size on BP_Dialog_C_ShowWarning");
static_assert(offsetof(BP_Dialog_C_ShowWarning, bVisible) == 0x000000, "Member 'BP_Dialog_C_ShowWarning::bVisible' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on BP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(BP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on BP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(BP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'BP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.SetCheckBoxMessage
// 0x0020 (0x0020 - 0x0000)
struct BP_Dialog_C_SetCheckBoxMessage final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9769[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Param_Message;                                     // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_Dialog_C_SetCheckBoxMessage) == 0x000008, "Wrong alignment on BP_Dialog_C_SetCheckBoxMessage");
static_assert(sizeof(BP_Dialog_C_SetCheckBoxMessage) == 0x000020, "Wrong size on BP_Dialog_C_SetCheckBoxMessage");
static_assert(offsetof(BP_Dialog_C_SetCheckBoxMessage, bVisible) == 0x000000, "Member 'BP_Dialog_C_SetCheckBoxMessage::bVisible' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_SetCheckBoxMessage, Param_Message) == 0x000008, "Member 'BP_Dialog_C_SetCheckBoxMessage::Param_Message' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.SetInputBlockerMode
// 0x0001 (0x0001 - 0x0000)
struct BP_Dialog_C_SetInputBlockerMode final
{
public:
	bool                                          bIsBlock;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Dialog_C_SetInputBlockerMode) == 0x000001, "Wrong alignment on BP_Dialog_C_SetInputBlockerMode");
static_assert(sizeof(BP_Dialog_C_SetInputBlockerMode) == 0x000001, "Wrong size on BP_Dialog_C_SetInputBlockerMode");
static_assert(offsetof(BP_Dialog_C_SetInputBlockerMode, bIsBlock) == 0x000000, "Member 'BP_Dialog_C_SetInputBlockerMode::bIsBlock' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.SetYesButtonClickSe
// 0x0018 (0x0018 - 0x0000)
struct BP_Dialog_C_SetYesButtonClickSe final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventName;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Dialog_C_SetYesButtonClickSe) == 0x000008, "Wrong alignment on BP_Dialog_C_SetYesButtonClickSe");
static_assert(sizeof(BP_Dialog_C_SetYesButtonClickSe) == 0x000018, "Wrong size on BP_Dialog_C_SetYesButtonClickSe");
static_assert(offsetof(BP_Dialog_C_SetYesButtonClickSe, AkEvent) == 0x000000, "Member 'BP_Dialog_C_SetYesButtonClickSe::AkEvent' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_SetYesButtonClickSe, EventName) == 0x000008, "Member 'BP_Dialog_C_SetYesButtonClickSe::EventName' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature");
static_assert(sizeof(BP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature) == 0x000008, "Wrong size on BP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature");
static_assert(offsetof(BP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'BP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature");
static_assert(sizeof(BP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature) == 0x000008, "Wrong size on BP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature");
static_assert(offsetof(BP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'BP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature");
static_assert(sizeof(BP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature) == 0x000008, "Wrong size on BP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature");
static_assert(offsetof(BP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'BP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.ChangeMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_Dialog_C_ChangeMessage final
{
public:
	class FText                                   Param_Message;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_Dialog_C_ChangeMessage) == 0x000008, "Wrong alignment on BP_Dialog_C_ChangeMessage");
static_assert(sizeof(BP_Dialog_C_ChangeMessage) == 0x000018, "Wrong size on BP_Dialog_C_ChangeMessage");
static_assert(offsetof(BP_Dialog_C_ChangeMessage, Param_Message) == 0x000000, "Member 'BP_Dialog_C_ChangeMessage::Param_Message' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct BP_Dialog_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Dialog_C_OnAnimationFinished) == 0x000008, "Wrong alignment on BP_Dialog_C_OnAnimationFinished");
static_assert(sizeof(BP_Dialog_C_OnAnimationFinished) == 0x000008, "Wrong size on BP_Dialog_C_OnAnimationFinished");
static_assert(offsetof(BP_Dialog_C_OnAnimationFinished, Animation) == 0x000000, "Member 'BP_Dialog_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.StartYesNoDialog
// 0x0020 (0x0020 - 0x0000)
struct BP_Dialog_C_StartYesNoDialog final
{
public:
	class FText                                   Param_Message;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EDialogPositionType                           Type;                                              // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableBgBlur;                                     // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Dialog_C_StartYesNoDialog) == 0x000008, "Wrong alignment on BP_Dialog_C_StartYesNoDialog");
static_assert(sizeof(BP_Dialog_C_StartYesNoDialog) == 0x000020, "Wrong size on BP_Dialog_C_StartYesNoDialog");
static_assert(offsetof(BP_Dialog_C_StartYesNoDialog, Param_Message) == 0x000000, "Member 'BP_Dialog_C_StartYesNoDialog::Param_Message' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_StartYesNoDialog, Type) == 0x000018, "Member 'BP_Dialog_C_StartYesNoDialog::Type' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_StartYesNoDialog, bEnableBgBlur) == 0x000019, "Member 'BP_Dialog_C_StartYesNoDialog::bEnableBgBlur' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.StartMessageDialog
// 0x0020 (0x0020 - 0x0000)
struct BP_Dialog_C_StartMessageDialog final
{
public:
	class FText                                   Param_Message;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EDialogPositionType                           Type;                                              // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableBgBlur;                                     // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Dialog_C_StartMessageDialog) == 0x000008, "Wrong alignment on BP_Dialog_C_StartMessageDialog");
static_assert(sizeof(BP_Dialog_C_StartMessageDialog) == 0x000020, "Wrong size on BP_Dialog_C_StartMessageDialog");
static_assert(offsetof(BP_Dialog_C_StartMessageDialog, Param_Message) == 0x000000, "Member 'BP_Dialog_C_StartMessageDialog::Param_Message' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_StartMessageDialog, Type) == 0x000018, "Member 'BP_Dialog_C_StartMessageDialog::Type' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_StartMessageDialog, bEnableBgBlur) == 0x000019, "Member 'BP_Dialog_C_StartMessageDialog::bEnableBgBlur' has a wrong offset!");

// Function BP_Dialog.BP_Dialog_C.SetPosition
// 0x0010 (0x0010 - 0x0000)
struct BP_Dialog_C_SetPosition final
{
public:
	EDialogPositionType                           PositionType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_976A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Dialog_C_SetPosition) == 0x000008, "Wrong alignment on BP_Dialog_C_SetPosition");
static_assert(sizeof(BP_Dialog_C_SetPosition) == 0x000010, "Wrong size on BP_Dialog_C_SetPosition");
static_assert(offsetof(BP_Dialog_C_SetPosition, PositionType) == 0x000000, "Member 'BP_Dialog_C_SetPosition::PositionType' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_SetPosition, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'BP_Dialog_C_SetPosition::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Dialog_C_SetPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'BP_Dialog_C_SetPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

