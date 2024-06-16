#pragma once

 

// Package: MapWidget_MapPinnedPin

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnTextCommitted__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature");
static_assert(sizeof(MapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature) == 0x000008, "Wrong size on MapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature, InPinnedPin) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature::InPinnedPin' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPinBtnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature final
{
public:
	class UMapWidget_MapPinnedPin_C*              InPinnedPin;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature");
static_assert(sizeof(MapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature) == 0x000008, "Wrong size on MapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature, InPinnedPin) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature::InPinnedPin' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ExecuteUbergraph_MapWidget_MapPinnedPin
// 0x0148 (0x0148 - 0x0000)
struct MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FC8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FC9[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText_1;                       // 0x0028(0x0018)()
	struct FMapPinInfo                            K2Node_MakeStruct_MapPinInfo;                      // 0x0040(0x0040)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	bool                                          CallFunc_HasNgWord_IsValid;                        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWord_ReturnValue;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FCA[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00B8(0x0018)()
	class FText                                   K2Node_CustomEvent_InText;                         // 0x00D0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FCB[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FormatStringBySpecifiedLineCntAndWordNum_OutFormatedString; // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0110(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0120(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FCC[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip3_C*              CallFunc_Create_ReturnValue;                       // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin");
static_assert(sizeof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin) == 0x000148, "Wrong size on MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, EntryPoint) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, K2Node_ComponentBoundEvent_CommitMethod) == 0x000020, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, K2Node_CustomEvent_InText_1) == 0x000028, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::K2Node_CustomEvent_InText_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, K2Node_MakeStruct_MapPinInfo) == 0x000040, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::K2Node_MakeStruct_MapPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_HasNgWord_IsValid) == 0x000098, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_HasNgWord_IsValid' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_HasNgWord_ReturnValue) == 0x000099, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_HasNgWord_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A0, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000B8, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, K2Node_CustomEvent_InText) == 0x0000D0, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_Conv_TextToString_ReturnValue) == 0x0000E8, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_NotEqual_TextText_ReturnValue) == 0x0000F8, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_FormatStringBySpecifiedLineCntAndWordNum_OutFormatedString) == 0x000100, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_FormatStringBySpecifiedLineCntAndWordNum_OutFormatedString' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_GetSBRetMessage_ReturnValue) == 0x000110, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000120, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_PlaySE_ReturnValue) == 0x000138, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin, CallFunc_Create_ReturnValue) == 0x000140, "Member 'MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.DoFormatText
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_MapPinnedPin_C_DoFormatText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_DoFormatText) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_DoFormatText");
static_assert(sizeof(MapWidget_MapPinnedPin_C_DoFormatText) == 0x000018, "Wrong size on MapWidget_MapPinnedPin_C_DoFormatText");
static_assert(offsetof(MapWidget_MapPinnedPin_C_DoFormatText, InText) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_DoFormatText::InText' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ForceTextCommit
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_MapPinnedPin_C_ForceTextCommit final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_ForceTextCommit) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_ForceTextCommit");
static_assert(sizeof(MapWidget_MapPinnedPin_C_ForceTextCommit) == 0x000018, "Wrong size on MapWidget_MapPinnedPin_C_ForceTextCommit");
static_assert(offsetof(MapWidget_MapPinnedPin_C_ForceTextCommit, InText) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_ForceTextCommit::InText' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextBoxVisibility
// 0x0005 (0x0005 - 0x0000)
struct MapWidget_MapPinnedPin_C_SetTextBoxVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_SetTextBoxVisibility) == 0x000001, "Wrong alignment on MapWidget_MapPinnedPin_C_SetTextBoxVisibility");
static_assert(sizeof(MapWidget_MapPinnedPin_C_SetTextBoxVisibility) == 0x000005, "Wrong size on MapWidget_MapPinnedPin_C_SetTextBoxVisibility");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTextBoxVisibility, Param_IsVisible) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_SetTextBoxVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTextBoxVisibility, Temp_bool_Variable) == 0x000001, "Member 'MapWidget_MapPinnedPin_C_SetTextBoxVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTextBoxVisibility, Temp_byte_Variable) == 0x000002, "Member 'MapWidget_MapPinnedPin_C_SetTextBoxVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTextBoxVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'MapWidget_MapPinnedPin_C_SetTextBoxVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTextBoxVisibility, K2Node_Select_Default) == 0x000004, "Member 'MapWidget_MapPinnedPin_C_SetTextBoxVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetPinInfo
// 0x0098 (0x0098 - 0x0000)
struct MapWidget_MapPinnedPin_C_SetPinInfo final
{
public:
	struct FMapPinInfo                            InPinInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	EMapPinType                                   Temp_byte_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FCD[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_SetPinInfo) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_SetPinInfo");
static_assert(sizeof(MapWidget_MapPinnedPin_C_SetPinInfo) == 0x000098, "Wrong size on MapWidget_MapPinnedPin_C_SetPinInfo");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, InPinInfo) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::InPinInfo' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, Temp_byte_Variable) == 0x000040, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, Temp_object_Variable) == 0x000048, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, Temp_object_Variable_1) == 0x000050, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, Temp_object_Variable_2) == 0x000058, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, Temp_object_Variable_3) == 0x000060, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, Temp_object_Variable_4) == 0x000068, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, Temp_object_Variable_5) == 0x000070, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetPinInfo, K2Node_Select_Default) == 0x000090, "Member 'MapWidget_MapPinnedPin_C_SetPinInfo::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetToolTipWidget_0
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_MapPinnedPin_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_GetToolTipWidget_0");
static_assert(sizeof(MapWidget_MapPinnedPin_C_GetToolTipWidget_0) == 0x000008, "Wrong size on MapWidget_MapPinnedPin_C_GetToolTipWidget_0");
static_assert(offsetof(MapWidget_MapPinnedPin_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTooltipEnable
// 0x0005 (0x0005 - 0x0000)
struct MapWidget_MapPinnedPin_C_SetTooltipEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_SetTooltipEnable) == 0x000001, "Wrong alignment on MapWidget_MapPinnedPin_C_SetTooltipEnable");
static_assert(sizeof(MapWidget_MapPinnedPin_C_SetTooltipEnable) == 0x000005, "Wrong size on MapWidget_MapPinnedPin_C_SetTooltipEnable");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTooltipEnable, IsEnable) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_SetTooltipEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTooltipEnable, Temp_bool_Variable) == 0x000001, "Member 'MapWidget_MapPinnedPin_C_SetTooltipEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTooltipEnable, Temp_byte_Variable) == 0x000002, "Member 'MapWidget_MapPinnedPin_C_SetTooltipEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTooltipEnable, Temp_byte_Variable_1) == 0x000003, "Member 'MapWidget_MapPinnedPin_C_SetTooltipEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTooltipEnable, K2Node_Select_Default) == 0x000004, "Member 'MapWidget_MapPinnedPin_C_SetTooltipEnable::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextToTextBox
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_MapPinnedPin_C_SetTextToTextBox final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_SetTextToTextBox) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_SetTextToTextBox");
static_assert(sizeof(MapWidget_MapPinnedPin_C_SetTextToTextBox) == 0x000018, "Wrong size on MapWidget_MapPinnedPin_C_SetTextToTextBox");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetTextToTextBox, InText) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_SetTextToTextBox::InText' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetInputToTextBox
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_MapPinnedPin_C_SetInputToTextBox final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_SetInputToTextBox) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_SetInputToTextBox");
static_assert(sizeof(MapWidget_MapPinnedPin_C_SetInputToTextBox) == 0x000008, "Wrong size on MapWidget_MapPinnedPin_C_SetInputToTextBox");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SetInputToTextBox, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_SetInputToTextBox::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.FormatStringBySpecifiedLineCntAndWordNum
// 0x00E8 (0x00E8 - 0x0000)
struct MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InLineNumMax;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InWordNumMaxPerLine;                               // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutFormatedString;                                 // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpCurrString;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         TmpRawStringArray;                                 // 0x0038(0x0010)(Edit, BlueprintVisible)
	class FString                                 TmpRawString;                                      // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpWordNumMaxPerLine;                              // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpLineNumMax;                                     // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         TmpSplitedStringsPerLine;                          // 0x0060(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FCE[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_SplitStringsByWordNumber_OutSplitedStrings; // 0x0088(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FCF[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FD0[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_ParseIntoArray_ReturnValue;               // 0x00C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FD1[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum");
static_assert(sizeof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum) == 0x0000E8, "Wrong size on MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, InString) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::InString' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, InLineNumMax) == 0x000010, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::InLineNumMax' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, InWordNumMaxPerLine) == 0x000014, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::InWordNumMaxPerLine' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, OutFormatedString) == 0x000018, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::OutFormatedString' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, TmpCurrString) == 0x000028, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::TmpCurrString' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, TmpRawStringArray) == 0x000038, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::TmpRawStringArray' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, TmpRawString) == 0x000048, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::TmpRawString' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, TmpWordNumMaxPerLine) == 0x000058, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::TmpWordNumMaxPerLine' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, TmpLineNumMax) == 0x00005C, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::TmpLineNumMax' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, TmpSplitedStringsPerLine) == 0x000060, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::TmpSplitedStringsPerLine' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, Temp_int_Array_Index_Variable) == 0x000070, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Array_Length_ReturnValue) == 0x00007C, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000080, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_SplitStringsByWordNumber_OutSplitedStrings) == 0x000088, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_SplitStringsByWordNumber_OutSplitedStrings' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Greater_IntInt_ReturnValue) == 0x00009C, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_JoinStringArray_ReturnValue) == 0x0000A0, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Array_Length_ReturnValue_2) == 0x0000C0, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_ParseIntoArray_ReturnValue) == 0x0000C8, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_ParseIntoArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000D8, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000D9, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Len_ReturnValue) == 0x0000DC, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_Greater_IntInt_ReturnValue_3) == 0x0000E0, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_BooleanAND_ReturnValue) == 0x0000E1, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum, CallFunc_BooleanAND_ReturnValue_1) == 0x0000E2, "Member 'MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SplitStringsByWordNumber
// 0x0090 (0x0090 - 0x0000)
struct MapWidget_MapPinnedPin_C_SplitStringsByWordNumber final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InWordNumber;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FD2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         OutSplitedStrings;                                 // 0x0018(0x0010)(Parm, OutParm)
	bool                                          TmpDoLoop;                                         // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FD3[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         TmpSplitedStrings;                                 // 0x0030(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpWordNumber;                                     // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FD4[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpString;                                         // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FD5[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_RightChop_ReturnValue;                    // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_SplitStringsByWordNumber");
static_assert(sizeof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber) == 0x000090, "Wrong size on MapWidget_MapPinnedPin_C_SplitStringsByWordNumber");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, InString) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::InString' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, InWordNumber) == 0x000010, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::InWordNumber' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, OutSplitedStrings) == 0x000018, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::OutSplitedStrings' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, TmpDoLoop) == 0x000028, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::TmpDoLoop' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, TmpSplitedStrings) == 0x000030, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::TmpSplitedStrings' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, TmpWordNumber) == 0x000040, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::TmpWordNumber' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, TmpString) == 0x000048, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::TmpString' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000059, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_BooleanAND_ReturnValue) == 0x00005A, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_RightChop_ReturnValue) == 0x000060, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_RightChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_Left_ReturnValue) == 0x000070, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_Array_Add_ReturnValue_1) == 0x000084, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_Len_ReturnValue) == 0x000088, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_SplitStringsByWordNumber, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00008C, "Member 'MapWidget_MapPinnedPin_C_SplitStringsByWordNumber::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPreviewKeyDown
// 0x0220 (0x0220 - 0x0000)
struct MapWidget_MapPinnedPin_C_OnPreviewKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0140(0x0018)()
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FD6[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_OnPreviewKeyDown");
static_assert(sizeof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown) == 0x000220, "Wrong size on MapWidget_MapPinnedPin_C_OnPreviewKeyDown");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown, MyGeometry) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_OnPreviewKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown, InKeyEvent) == 0x000038, "Member 'MapWidget_MapPinnedPin_C_OnPreviewKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown, ReturnValue) == 0x000070, "Member 'MapWidget_MapPinnedPin_C_OnPreviewKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown, CallFunc_GetKey_ReturnValue) == 0x000128, "Member 'MapWidget_MapPinnedPin_C_OnPreviewKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown, CallFunc_GetText_ReturnValue) == 0x000140, "Member 'MapWidget_MapPinnedPin_C_OnPreviewKeyDown::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000158, "Member 'MapWidget_MapPinnedPin_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'MapWidget_MapPinnedPin_C_OnPreviewKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnPreviewKeyDown, CallFunc_Not_PreBool_ReturnValue) == 0x000218, "Member 'MapWidget_MapPinnedPin_C_OnPreviewKeyDown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyDown
// 0x0208 (0x0208 - 0x0000)
struct MapWidget_MapPinnedPin_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FD7[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0148(0x00B8)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_OnKeyDown) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_OnKeyDown");
static_assert(sizeof(MapWidget_MapPinnedPin_C_OnKeyDown) == 0x000208, "Wrong size on MapWidget_MapPinnedPin_C_OnKeyDown");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'MapWidget_MapPinnedPin_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'MapWidget_MapPinnedPin_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x000128, "Member 'MapWidget_MapPinnedPin_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000140, "Member 'MapWidget_MapPinnedPin_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000141, "Member 'MapWidget_MapPinnedPin_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000148, "Member 'MapWidget_MapPinnedPin_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue) == 0x000200, "Member 'MapWidget_MapPinnedPin_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyUp
// 0x0200 (0x0200 - 0x0000)
struct MapWidget_MapPinnedPin_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0140(0x00B8)()
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_OnKeyUp) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_OnKeyUp");
static_assert(sizeof(MapWidget_MapPinnedPin_C_OnKeyUp) == 0x000200, "Wrong size on MapWidget_MapPinnedPin_C_OnKeyUp");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'MapWidget_MapPinnedPin_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'MapWidget_MapPinnedPin_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x000128, "Member 'MapWidget_MapPinnedPin_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000140, "Member 'MapWidget_MapPinnedPin_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001F8, "Member 'MapWidget_MapPinnedPin_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x0001F9, "Member 'MapWidget_MapPinnedPin_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapPinnedPin_C_OnKeyUp, CallFunc_BooleanOR_ReturnValue) == 0x0001FA, "Member 'MapWidget_MapPinnedPin_C_OnKeyUp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinInfo
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_MapPinnedPin_C_GetPinInfo final
{
public:
	struct FMapPinInfo                            OutPinInfo;                                        // 0x0000(0x0040)(Parm, OutParm)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_GetPinInfo) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_GetPinInfo");
static_assert(sizeof(MapWidget_MapPinnedPin_C_GetPinInfo) == 0x000040, "Wrong size on MapWidget_MapPinnedPin_C_GetPinInfo");
static_assert(offsetof(MapWidget_MapPinnedPin_C_GetPinInfo, OutPinInfo) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_GetPinInfo::OutPinInfo' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinIconSize
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_MapPinnedPin_C_GetPinIconSize final
{
public:
	struct FVector2D                              OutSize;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_GetPinIconSize) == 0x000004, "Wrong alignment on MapWidget_MapPinnedPin_C_GetPinIconSize");
static_assert(sizeof(MapWidget_MapPinnedPin_C_GetPinIconSize) == 0x000008, "Wrong size on MapWidget_MapPinnedPin_C_GetPinIconSize");
static_assert(offsetof(MapWidget_MapPinnedPin_C_GetPinIconSize, OutSize) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_GetPinIconSize::OutSize' has a wrong offset!");

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetComment
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_MapPinnedPin_C_GetComment final
{
public:
	class FString                                 Param_Comment;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapPinnedPin_C_GetComment) == 0x000008, "Wrong alignment on MapWidget_MapPinnedPin_C_GetComment");
static_assert(sizeof(MapWidget_MapPinnedPin_C_GetComment) == 0x000010, "Wrong size on MapWidget_MapPinnedPin_C_GetComment");
static_assert(offsetof(MapWidget_MapPinnedPin_C_GetComment, Param_Comment) == 0x000000, "Member 'MapWidget_MapPinnedPin_C_GetComment::Param_Comment' has a wrong offset!");

}

