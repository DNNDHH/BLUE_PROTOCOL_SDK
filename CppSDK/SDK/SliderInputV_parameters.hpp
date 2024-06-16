#pragma once

 

// Package: SliderInputV

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SliderInputV.SliderInputV_C.OnChange__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SliderInputV_C_OnChange__DelegateSignature final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_OnChange__DelegateSignature) == 0x000004, "Wrong alignment on SliderInputV_C_OnChange__DelegateSignature");
static_assert(sizeof(SliderInputV_C_OnChange__DelegateSignature) == 0x000008, "Wrong size on SliderInputV_C_OnChange__DelegateSignature");
static_assert(offsetof(SliderInputV_C_OnChange__DelegateSignature, NewValue) == 0x000000, "Member 'SliderInputV_C_OnChange__DelegateSignature::NewValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_OnChange__DelegateSignature, Ratio) == 0x000004, "Member 'SliderInputV_C_OnChange__DelegateSignature::Ratio' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.OnChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SliderInputV_C_OnChanged__DelegateSignature final
{
public:
	int32                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_OnChanged__DelegateSignature) == 0x000004, "Wrong alignment on SliderInputV_C_OnChanged__DelegateSignature");
static_assert(sizeof(SliderInputV_C_OnChanged__DelegateSignature) == 0x000008, "Wrong size on SliderInputV_C_OnChanged__DelegateSignature");
static_assert(offsetof(SliderInputV_C_OnChanged__DelegateSignature, Param_Value) == 0x000000, "Member 'SliderInputV_C_OnChanged__DelegateSignature::Param_Value' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_OnChanged__DelegateSignature, Ratio) == 0x000004, "Member 'SliderInputV_C_OnChanged__DelegateSignature::Ratio' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.ExecuteUbergraph_SliderInputV
// 0x0C48 (0x0C48 - 0x0000)
struct SliderInputV_C_ExecuteUbergraph_SliderInputV final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53AF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53B0[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53B1[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53B2[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0128(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53B3[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEqualBefore_Equal;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53B4[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0168(0x0088)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x01F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0200(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0288(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x0310(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_5;                    // 0x0398(0x0088)()
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle;                     // 0x0420(0x0340)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_6;                    // 0x0760(0x0088)()
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x07E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_7;                    // 0x07F8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_8;                    // 0x0880(0x0088)()
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle_1;                   // 0x0908(0x0340)()
};
static_assert(alignof(SliderInputV_C_ExecuteUbergraph_SliderInputV) == 0x000008, "Wrong alignment on SliderInputV_C_ExecuteUbergraph_SliderInputV");
static_assert(sizeof(SliderInputV_C_ExecuteUbergraph_SliderInputV) == 0x000C48, "Wrong size on SliderInputV_C_ExecuteUbergraph_SliderInputV");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, EntryPoint) == 0x000000, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::EntryPoint' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_MakeLiteralByte_ReturnValue) == 0x000090, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_IntToString_ReturnValue) == 0x000098, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_ComponentBoundEvent_Value) == 0x0000C0, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_FloatToString_ReturnValue) == 0x0000C8, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000D8, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0000DC, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Ease_ReturnValue) == 0x0000E0, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Round_ReturnValue) == 0x0000E4, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0000E8, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Clamp_ReturnValue) == 0x0000EC, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x0000F0, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_IntToFloat_ReturnValue_4) == 0x0000F4, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_IntToFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_NormalizeToRange_ReturnValue) == 0x0000F8, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000100, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_ComponentBoundEvent_Text) == 0x000128, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_ComponentBoundEvent_CommitMethod) == 0x000140, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_SwitchEnum_CmpSuccess) == 0x000141, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_TextToString_ReturnValue) == 0x000148, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Conv_StringToInt_ReturnValue) == 0x000158, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_Clamp_ReturnValue_1) == 0x00015C, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_IsEqualBefore_Equal) == 0x000160, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_IsEqualBefore_Equal' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, CallFunc_PlaySE_ReturnValue) == 0x000164, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush_1) == 0x000168, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_Margin) == 0x0001F0, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush_2) == 0x000200, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush_3) == 0x000288, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush_4) == 0x000310, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush_5) == 0x000398, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush_5' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SliderStyle) == 0x000420, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SliderStyle' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush_6) == 0x000760, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush_6' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_Margin_1) == 0x0007E8, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush_7) == 0x0007F8, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush_7' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SlateBrush_8) == 0x000880, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SlateBrush_8' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_ExecuteUbergraph_SliderInputV, K2Node_MakeStruct_SliderStyle_1) == 0x000908, "Member 'SliderInputV_C_ExecuteUbergraph_SliderInputV::K2Node_MakeStruct_SliderStyle_1' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'SliderInputV_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SliderInputV_C_BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on SliderInputV_C_BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(SliderInputV_C_BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on SliderInputV_C_BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(SliderInputV_C_BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature, Param_Value) == 0x000000, "Member 'SliderInputV_C_BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature::Param_Value' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.SetValue
// 0x0048 (0x0048 - 0x0000)
struct SliderInputV_C_SetValue final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53B5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53B6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_SetValue) == 0x000008, "Wrong alignment on SliderInputV_C_SetValue");
static_assert(sizeof(SliderInputV_C_SetValue) == 0x000048, "Wrong size on SliderInputV_C_SetValue");
static_assert(offsetof(SliderInputV_C_SetValue, NewValue) == 0x000000, "Member 'SliderInputV_C_SetValue::NewValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetValue, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'SliderInputV_C_SetValue::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetValue, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000018, "Member 'SliderInputV_C_SetValue::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetValue, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'SliderInputV_C_SetValue::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetValue, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000038, "Member 'SliderInputV_C_SetValue::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetValue, CallFunc_Clamp_ReturnValue) == 0x00003C, "Member 'SliderInputV_C_SetValue::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetValue, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000040, "Member 'SliderInputV_C_SetValue::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetValue, CallFunc_NormalizeToRange_ReturnValue) == 0x000044, "Member 'SliderInputV_C_SetValue::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.SetRatio
// 0x001C (0x001C - 0x0000)
struct SliderInputV_C_SetRatio final
{
public:
	float                                         Ratio;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53B7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_SetRatio) == 0x000004, "Wrong alignment on SliderInputV_C_SetRatio");
static_assert(sizeof(SliderInputV_C_SetRatio) == 0x00001C, "Wrong size on SliderInputV_C_SetRatio");
static_assert(offsetof(SliderInputV_C_SetRatio, Ratio) == 0x000000, "Member 'SliderInputV_C_SetRatio::Ratio' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetRatio, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'SliderInputV_C_SetRatio::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetRatio, CallFunc_FClamp_ReturnValue) == 0x000008, "Member 'SliderInputV_C_SetRatio::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetRatio, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'SliderInputV_C_SetRatio::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetRatio, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000010, "Member 'SliderInputV_C_SetRatio::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetRatio, CallFunc_Ease_ReturnValue) == 0x000014, "Member 'SliderInputV_C_SetRatio::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_SetRatio, CallFunc_Round_ReturnValue) == 0x000018, "Member 'SliderInputV_C_SetRatio::CallFunc_Round_ReturnValue' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.GetValue
// 0x0004 (0x0004 - 0x0000)
struct SliderInputV_C_GetValue final
{
public:
	int32                                         Param_Value;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_GetValue) == 0x000004, "Wrong alignment on SliderInputV_C_GetValue");
static_assert(sizeof(SliderInputV_C_GetValue) == 0x000004, "Wrong size on SliderInputV_C_GetValue");
static_assert(offsetof(SliderInputV_C_GetValue, Param_Value) == 0x000000, "Member 'SliderInputV_C_GetValue::Param_Value' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.GetRatio
// 0x0014 (0x0014 - 0x0000)
struct SliderInputV_C_GetRatio final
{
public:
	float                                         Ratio;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_GetRatio) == 0x000004, "Wrong alignment on SliderInputV_C_GetRatio");
static_assert(sizeof(SliderInputV_C_GetRatio) == 0x000014, "Wrong size on SliderInputV_C_GetRatio");
static_assert(offsetof(SliderInputV_C_GetRatio, Ratio) == 0x000000, "Member 'SliderInputV_C_GetRatio::Ratio' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_GetRatio, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'SliderInputV_C_GetRatio::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_GetRatio, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000008, "Member 'SliderInputV_C_GetRatio::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_GetRatio, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x00000C, "Member 'SliderInputV_C_GetRatio::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_GetRatio, CallFunc_NormalizeToRange_ReturnValue) == 0x000010, "Member 'SliderInputV_C_GetRatio::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");

// Function SliderInputV.SliderInputV_C.IsEqualBefore
// 0x0070 (0x0070 - 0x0000)
struct SliderInputV_C_IsEqualBefore final
{
public:
	bool                                          Equal;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53B8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53B9[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderInputV_C_IsEqualBefore) == 0x000008, "Wrong alignment on SliderInputV_C_IsEqualBefore");
static_assert(sizeof(SliderInputV_C_IsEqualBefore) == 0x000070, "Wrong size on SliderInputV_C_IsEqualBefore");
static_assert(offsetof(SliderInputV_C_IsEqualBefore, Equal) == 0x000000, "Member 'SliderInputV_C_IsEqualBefore::Equal' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_IsEqualBefore, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'SliderInputV_C_IsEqualBefore::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_IsEqualBefore, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000018, "Member 'SliderInputV_C_IsEqualBefore::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_IsEqualBefore, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'SliderInputV_C_IsEqualBefore::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_IsEqualBefore, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'SliderInputV_C_IsEqualBefore::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_IsEqualBefore, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'SliderInputV_C_IsEqualBefore::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_IsEqualBefore, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000050, "Member 'SliderInputV_C_IsEqualBefore::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SliderInputV_C_IsEqualBefore, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000060, "Member 'SliderInputV_C_IsEqualBefore::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

}

