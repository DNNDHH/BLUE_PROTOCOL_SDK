#pragma once

 

// Package: NameSettingDialog

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NameSettingDialog.NameSettingDialog_C.OnEnter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct NameSettingDialog_C_OnEnter__DelegateSignature final
{
public:
	class FString                                 Param_PlayerName;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_OnEnter__DelegateSignature) == 0x000008, "Wrong alignment on NameSettingDialog_C_OnEnter__DelegateSignature");
static_assert(sizeof(NameSettingDialog_C_OnEnter__DelegateSignature) == 0x000010, "Wrong size on NameSettingDialog_C_OnEnter__DelegateSignature");
static_assert(offsetof(NameSettingDialog_C_OnEnter__DelegateSignature, Param_PlayerName) == 0x000000, "Member 'NameSettingDialog_C_OnEnter__DelegateSignature::Param_PlayerName' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.ExecuteUbergraph_NameSettingDialog
// 0x0310 (0x0310 - 0x0000)
struct NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A1D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A1E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0038(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0060(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A1F[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0080(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00A8(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x00E0(0x0018)(ConstParm)
	bool                                          CallFunc_IsNameEnable_enable;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A20[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0100(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x011E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A21[0x1];                                     // 0x011F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAlphanumericZenToHan_ReturnValue;  // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A22[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAlphanumericZenToHan_ReturnValue_1; // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0148(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0160(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0178(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01B8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A23[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A24[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NameChangeTicketCount;          // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01E8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A25[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0208(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0220(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0238(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A26[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0258(0x0028)()
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0280(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x02A8(0x0028)()
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A27[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x02E0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A28[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0300(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog) == 0x000008, "Wrong alignment on NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog");
static_assert(sizeof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog) == 0x000310, "Wrong size on NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, EntryPoint) == 0x000000, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000018, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_CustomEvent_InText) == 0x000038, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_Conv_TextToString_ReturnValue) == 0x000050, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_Event_Animation) == 0x000060, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetSubstring_ReturnValue) == 0x000068, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000078, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_MakeStruct_SlateColor) == 0x000080, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_MakeStruct_SlateColor_1) == 0x0000A8, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000D0, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_ComponentBoundEvent_Text) == 0x0000E0, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_IsNameEnable_enable) == 0x0000F8, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_IsNameEnable_enable' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_ComponentBoundEvent_Text_1) == 0x000100, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_ComponentBoundEvent_CommitMethod) == 0x000118, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000119, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_CustomEvent_Result) == 0x00011A, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, Temp_bool_Variable) == 0x00011B, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_SwitchEnum_CmpSuccess) == 0x00011C, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, Temp_bool_Variable_1) == 0x00011D, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, Temp_bool_Variable_2) == 0x00011E, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_ConvertAlphanumericZenToHan_ReturnValue) == 0x000120, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_ConvertAlphanumericZenToHan_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000130, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_ConvertAlphanumericZenToHan_ReturnValue_1) == 0x000138, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_ConvertAlphanumericZenToHan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000148, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetText_ReturnValue) == 0x000160, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_MakeStruct_FormatArgumentData) == 0x000178, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_MakeArray_Array) == 0x0001B8, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_IsEmpty_ReturnValue) == 0x0001C8, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_PlaySE_ReturnValue) == 0x0001CC, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_Select_Default) == 0x0001D0, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_CustomEvent_Visible) == 0x0001E0, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_CustomEvent_NameChangeTicketCount) == 0x0001E4, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_CustomEvent_NameChangeTicketCount' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001E8, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000200, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_Format_ReturnValue) == 0x000208, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_Conv_IntToText_ReturnValue) == 0x000220, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000238, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_MakeLiteralByte_ReturnValue) == 0x000250, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_MakeStruct_SlateColor_2) == 0x000258, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetImpossibleColor_ReturnValue) == 0x000280, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_Select_Default_1) == 0x0002A8, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetUIManager_IsValid) == 0x0002D0, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetUIManager_ReturnValue) == 0x0002D8, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_CreateDelegate_OutputDelegate) == 0x0002E0, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetUIManager_IsValid_1) == 0x0002F0, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_GetUIManager_ReturnValue_1) == 0x0002F8, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_Create_ReturnValue) == 0x000300, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000308, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog, K2Node_Select_Default_2) == 0x000309, "Member 'NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog::K2Node_Select_Default_2' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.VisibleTicketGrp
// 0x0008 (0x0008 - 0x0000)
struct NameSettingDialog_C_VisibleTicketGrp final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A29[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NameChangeTicketCount;                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_VisibleTicketGrp) == 0x000004, "Wrong alignment on NameSettingDialog_C_VisibleTicketGrp");
static_assert(sizeof(NameSettingDialog_C_VisibleTicketGrp) == 0x000008, "Wrong size on NameSettingDialog_C_VisibleTicketGrp");
static_assert(offsetof(NameSettingDialog_C_VisibleTicketGrp, Visible) == 0x000000, "Member 'NameSettingDialog_C_VisibleTicketGrp::Visible' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_VisibleTicketGrp, NameChangeTicketCount) == 0x000004, "Member 'NameSettingDialog_C_VisibleTicketGrp::NameChangeTicketCount' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.DecisonDialogResult
// 0x0001 (0x0001 - 0x0000)
struct NameSettingDialog_C_DecisonDialogResult final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_DecisonDialogResult) == 0x000001, "Wrong alignment on NameSettingDialog_C_DecisonDialogResult");
static_assert(sizeof(NameSettingDialog_C_DecisonDialogResult) == 0x000001, "Wrong size on NameSettingDialog_C_DecisonDialogResult");
static_assert(offsetof(NameSettingDialog_C_DecisonDialogResult, Result) == 0x000000, "Member 'NameSettingDialog_C_DecisonDialogResult::Result' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct NameSettingDialog_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_OnAnimationFinished) == 0x000008, "Wrong alignment on NameSettingDialog_C_OnAnimationFinished");
static_assert(sizeof(NameSettingDialog_C_OnAnimationFinished) == 0x000008, "Wrong size on NameSettingDialog_C_OnAnimationFinished");
static_assert(offsetof(NameSettingDialog_C_OnAnimationFinished, Animation) == 0x000000, "Member 'NameSettingDialog_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.UpdateNameText
// 0x0018 (0x0018 - 0x0000)
struct NameSettingDialog_C_UpdateNameText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NameSettingDialog_C_UpdateNameText) == 0x000008, "Wrong alignment on NameSettingDialog_C_UpdateNameText");
static_assert(sizeof(NameSettingDialog_C_UpdateNameText) == 0x000018, "Wrong size on NameSettingDialog_C_UpdateNameText");
static_assert(offsetof(NameSettingDialog_C_UpdateNameText, InText) == 0x000000, "Member 'NameSettingDialog_C_UpdateNameText::InText' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.Open
// 0x0010 (0x0010 - 0x0000)
struct NameSettingDialog_C_Open final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A2A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_Open) == 0x000008, "Wrong alignment on NameSettingDialog_C_Open");
static_assert(sizeof(NameSettingDialog_C_Open) == 0x000010, "Wrong size on NameSettingDialog_C_Open");
static_assert(offsetof(NameSettingDialog_C_Open, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'NameSettingDialog_C_Open::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Open, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'NameSettingDialog_C_Open::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.Close
// 0x0010 (0x0010 - 0x0000)
struct NameSettingDialog_C_Close final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A2B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_Close) == 0x000008, "Wrong alignment on NameSettingDialog_C_Close");
static_assert(sizeof(NameSettingDialog_C_Close) == 0x000010, "Wrong size on NameSettingDialog_C_Close");
static_assert(offsetof(NameSettingDialog_C_Close, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'NameSettingDialog_C_Close::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Close, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'NameSettingDialog_C_Close::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.IsNameEnable
// 0x0038 (0x0038 - 0x0000)
struct NameSettingDialog_C_IsNameEnable final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Enable;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A2C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NameSettingDialog_C_IsNameEnable) == 0x000008, "Wrong alignment on NameSettingDialog_C_IsNameEnable");
static_assert(sizeof(NameSettingDialog_C_IsNameEnable) == 0x000038, "Wrong size on NameSettingDialog_C_IsNameEnable");
static_assert(offsetof(NameSettingDialog_C_IsNameEnable, InText) == 0x000000, "Member 'NameSettingDialog_C_IsNameEnable::InText' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_IsNameEnable, Enable) == 0x000018, "Member 'NameSettingDialog_C_IsNameEnable::Enable' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_IsNameEnable, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'NameSettingDialog_C_IsNameEnable::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_IsNameEnable, CallFunc_Len_ReturnValue) == 0x000030, "Member 'NameSettingDialog_C_IsNameEnable::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_IsNameEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'NameSettingDialog_C_IsNameEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_IsNameEnable, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000035, "Member 'NameSettingDialog_C_IsNameEnable::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.Setting
// 0x0058 (0x0058 - 0x0000)
struct NameSettingDialog_C_Setting final
{
public:
	int32                                         InMainMessageTextID;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSubMessageTextID;                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextMaxCnt;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A2D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StartInputName;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A2E[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A2F[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_Setting) == 0x000008, "Wrong alignment on NameSettingDialog_C_Setting");
static_assert(sizeof(NameSettingDialog_C_Setting) == 0x000058, "Wrong size on NameSettingDialog_C_Setting");
static_assert(offsetof(NameSettingDialog_C_Setting, InMainMessageTextID) == 0x000000, "Member 'NameSettingDialog_C_Setting::InMainMessageTextID' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, InSubMessageTextID) == 0x000004, "Member 'NameSettingDialog_C_Setting::InSubMessageTextID' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, InTextMaxCnt) == 0x000008, "Member 'NameSettingDialog_C_Setting::InTextMaxCnt' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, StartInputName) == 0x000010, "Member 'NameSettingDialog_C_Setting::StartInputName' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'NameSettingDialog_C_Setting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, Temp_int_Variable) == 0x000024, "Member 'NameSettingDialog_C_Setting::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, CallFunc_Left_ReturnValue) == 0x000028, "Member 'NameSettingDialog_C_Setting::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'NameSettingDialog_C_Setting::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, Temp_bool_Variable) == 0x000050, "Member 'NameSettingDialog_C_Setting::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_Setting, K2Node_Select_Default) == 0x000054, "Member 'NameSettingDialog_C_Setting::K2Node_Select_Default' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.SetNameInputEnable
// 0x0005 (0x0005 - 0x0000)
struct NameSettingDialog_C_SetNameInputEnable final
{
public:
	bool                                          InIsEnable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_SetNameInputEnable) == 0x000001, "Wrong alignment on NameSettingDialog_C_SetNameInputEnable");
static_assert(sizeof(NameSettingDialog_C_SetNameInputEnable) == 0x000005, "Wrong size on NameSettingDialog_C_SetNameInputEnable");
static_assert(offsetof(NameSettingDialog_C_SetNameInputEnable, InIsEnable) == 0x000000, "Member 'NameSettingDialog_C_SetNameInputEnable::InIsEnable' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_SetNameInputEnable, Temp_bool_Variable) == 0x000001, "Member 'NameSettingDialog_C_SetNameInputEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_SetNameInputEnable, Temp_byte_Variable) == 0x000002, "Member 'NameSettingDialog_C_SetNameInputEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_SetNameInputEnable, Temp_byte_Variable_1) == 0x000003, "Member 'NameSettingDialog_C_SetNameInputEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_SetNameInputEnable, K2Node_Select_Default) == 0x000004, "Member 'NameSettingDialog_C_SetNameInputEnable::K2Node_Select_Default' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.SetOptionDecideText
// 0x0010 (0x0010 - 0x0000)
struct NameSettingDialog_C_SetOptionDecideText final
{
public:
	class FString                                 Param_OptionDecideText;                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_SetOptionDecideText) == 0x000008, "Wrong alignment on NameSettingDialog_C_SetOptionDecideText");
static_assert(sizeof(NameSettingDialog_C_SetOptionDecideText) == 0x000010, "Wrong size on NameSettingDialog_C_SetOptionDecideText");
static_assert(offsetof(NameSettingDialog_C_SetOptionDecideText, Param_OptionDecideText) == 0x000000, "Member 'NameSettingDialog_C_SetOptionDecideText::Param_OptionDecideText' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.SetMainMessageText
// 0x0018 (0x0018 - 0x0000)
struct NameSettingDialog_C_SetMainMessageText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NameSettingDialog_C_SetMainMessageText) == 0x000008, "Wrong alignment on NameSettingDialog_C_SetMainMessageText");
static_assert(sizeof(NameSettingDialog_C_SetMainMessageText) == 0x000018, "Wrong size on NameSettingDialog_C_SetMainMessageText");
static_assert(offsetof(NameSettingDialog_C_SetMainMessageText, InText) == 0x000000, "Member 'NameSettingDialog_C_SetMainMessageText::InText' has a wrong offset!");

// Function NameSettingDialog.NameSettingDialog_C.GetToolTipWidget_0
// 0x0078 (0x0078 - 0x0000)
struct NameSettingDialog_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0018(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x0030(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A30[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A31[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NameSettingDialog_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on NameSettingDialog_C_GetToolTipWidget_0");
static_assert(sizeof(NameSettingDialog_C_GetToolTipWidget_0) == 0x000078, "Wrong size on NameSettingDialog_C_GetToolTipWidget_0");
static_assert(offsetof(NameSettingDialog_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'NameSettingDialog_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_GetToolTipWidget_0, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'NameSettingDialog_C_GetToolTipWidget_0::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_GetToolTipWidget_0, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000018, "Member 'NameSettingDialog_C_GetToolTipWidget_0::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_GetToolTipWidget_0, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x000030, "Member 'NameSettingDialog_C_GetToolTipWidget_0::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_GetToolTipWidget_0, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x000048, "Member 'NameSettingDialog_C_GetToolTipWidget_0::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_GetToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'NameSettingDialog_C_GetToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'NameSettingDialog_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NameSettingDialog_C_GetToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000070, "Member 'NameSettingDialog_C_GetToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");

}

