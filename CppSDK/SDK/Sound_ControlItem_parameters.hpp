#pragma once

 

// Package: Sound_ControlItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Sound_ControlItem.Sound_ControlItem_C.SetText
// 0x0028 (0x0028 - 0x0000)
struct Sound_ControlItem_C_SetText final
{
public:
	class FString                                 Text;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(Sound_ControlItem_C_SetText) == 0x000008, "Wrong alignment on Sound_ControlItem_C_SetText");
static_assert(sizeof(Sound_ControlItem_C_SetText) == 0x000028, "Wrong size on Sound_ControlItem_C_SetText");
static_assert(offsetof(Sound_ControlItem_C_SetText, Text) == 0x000000, "Member 'Sound_ControlItem_C_SetText::Text' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'Sound_ControlItem_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.SetLabelTextId
// 0x0004 (0x0004 - 0x0000)
struct Sound_ControlItem_C_SetLabelTextId final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_ControlItem_C_SetLabelTextId) == 0x000004, "Wrong alignment on Sound_ControlItem_C_SetLabelTextId");
static_assert(sizeof(Sound_ControlItem_C_SetLabelTextId) == 0x000004, "Wrong size on Sound_ControlItem_C_SetLabelTextId");
static_assert(offsetof(Sound_ControlItem_C_SetLabelTextId, TextId) == 0x000000, "Member 'Sound_ControlItem_C_SetLabelTextId::TextId' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.UpdateBtn
// 0x0030 (0x0030 - 0x0000)
struct Sound_ControlItem_C_UpdateBtn final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C1E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C1F[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C20[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_ControlItem_C_UpdateBtn) == 0x000008, "Wrong alignment on Sound_ControlItem_C_UpdateBtn");
static_assert(sizeof(Sound_ControlItem_C_UpdateBtn) == 0x000030, "Wrong size on Sound_ControlItem_C_UpdateBtn");
static_assert(offsetof(Sound_ControlItem_C_UpdateBtn, Temp_bool_Variable) == 0x000000, "Member 'Sound_ControlItem_C_UpdateBtn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_UpdateBtn, Temp_object_Variable) == 0x000008, "Member 'Sound_ControlItem_C_UpdateBtn::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_UpdateBtn, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'Sound_ControlItem_C_UpdateBtn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_UpdateBtn, CallFunc_Less_IntInt_ReturnValue_1) == 0x000011, "Member 'Sound_ControlItem_C_UpdateBtn::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_UpdateBtn, CallFunc_SelectInt_ReturnValue) == 0x000014, "Member 'Sound_ControlItem_C_UpdateBtn::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_UpdateBtn, CallFunc_SelectInt_ReturnValue_1) == 0x000018, "Member 'Sound_ControlItem_C_UpdateBtn::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_UpdateBtn, CallFunc_Array_Get_Item) == 0x000020, "Member 'Sound_ControlItem_C_UpdateBtn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_UpdateBtn, K2Node_Select_Default) == 0x000028, "Member 'Sound_ControlItem_C_UpdateBtn::K2Node_Select_Default' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.SetVolume
// 0x0048 (0x0048 - 0x0000)
struct Sound_ControlItem_C_SetVolume final
{
public:
	int32                                         Param_Volume;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMute;                                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C21[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C22[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C23[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_ControlItem_C_SetVolume) == 0x000008, "Wrong alignment on Sound_ControlItem_C_SetVolume");
static_assert(sizeof(Sound_ControlItem_C_SetVolume) == 0x000048, "Wrong size on Sound_ControlItem_C_SetVolume");
static_assert(offsetof(Sound_ControlItem_C_SetVolume, Param_Volume) == 0x000000, "Member 'Sound_ControlItem_C_SetVolume::Param_Volume' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_SetVolume, bMute) == 0x000004, "Member 'Sound_ControlItem_C_SetVolume::bMute' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_SetVolume, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'Sound_ControlItem_C_SetVolume::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_SetVolume, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'Sound_ControlItem_C_SetVolume::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_SetVolume, CallFunc_NormalizeToRange_ReturnValue) == 0x000020, "Member 'Sound_ControlItem_C_SetVolume::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_SetVolume, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'Sound_ControlItem_C_SetVolume::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_SetVolume, CallFunc_Clamp_ReturnValue) == 0x000040, "Member 'Sound_ControlItem_C_SetVolume::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Sound_ControlItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sound_ControlItem_C_PreConstruct) == 0x000001, "Wrong alignment on Sound_ControlItem_C_PreConstruct");
static_assert(sizeof(Sound_ControlItem_C_PreConstruct) == 0x000001, "Wrong size on Sound_ControlItem_C_PreConstruct");
static_assert(offsetof(Sound_ControlItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Sound_ControlItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Sound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on Sound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(Sound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on Sound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(Sound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'Sound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.ExecuteUbergraph_Sound_ControlItem
// 0x0C28 (0x0C28 - 0x0000)
struct Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C24[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C25[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0098(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C26[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C27[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F0(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C28[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C29[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0130(0x0018)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0148(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x01D0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0258(0x0088)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x02E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x02F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x0300(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_5;                    // 0x0388(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_6;                    // 0x0410(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_7;                    // 0x0498(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_8;                    // 0x0520(0x0088)()
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle;                     // 0x05A8(0x0340)()
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle_1;                   // 0x08E8(0x0340)()
};
static_assert(alignof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem) == 0x000008, "Wrong alignment on Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem");
static_assert(sizeof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem) == 0x000C28, "Wrong size on Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, EntryPoint) == 0x000000, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_Event_IsDesignTime) == 0x000090, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_ComponentBoundEvent_Text) == 0x000098, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_ComponentBoundEvent_CommitMethod) == 0x0000B0, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_ComponentBoundEvent_Value) == 0x0000B4, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Conv_TextToString_ReturnValue) == 0x0000B8, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000C8, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Conv_StringToInt_ReturnValue) == 0x0000CC, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_FTrunc_ReturnValue) == 0x0000D0, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Clamp_ReturnValue) == 0x0000D4, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Not_PreBool_ReturnValue) == 0x0000D8, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Conv_IntToString_ReturnValue) == 0x0000E0, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F0, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000108, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x000109, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_PlaySE_ReturnValue) == 0x00010C, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000110, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000114, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_PlaySE_ReturnValue_1) == 0x000118, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000120, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000130, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush_1) == 0x000148, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush_2) == 0x0001D0, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush_3) == 0x000258, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_Margin) == 0x0002E0, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_Margin_1) == 0x0002F0, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush_4) == 0x000300, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush_5) == 0x000388, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush_5' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush_6) == 0x000410, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush_6' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush_7) == 0x000498, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush_7' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SlateBrush_8) == 0x000520, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SlateBrush_8' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SliderStyle) == 0x0005A8, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SliderStyle' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem, K2Node_MakeStruct_SliderStyle_1) == 0x0008E8, "Member 'Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem::K2Node_MakeStruct_SliderStyle_1' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.RequestSoundEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Sound_ControlItem_C_RequestSoundEvent__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_ControlItem_C_RequestSoundEvent__DelegateSignature) == 0x000004, "Wrong alignment on Sound_ControlItem_C_RequestSoundEvent__DelegateSignature");
static_assert(sizeof(Sound_ControlItem_C_RequestSoundEvent__DelegateSignature) == 0x000004, "Wrong size on Sound_ControlItem_C_RequestSoundEvent__DelegateSignature");
static_assert(offsetof(Sound_ControlItem_C_RequestSoundEvent__DelegateSignature, Param_Index) == 0x000000, "Member 'Sound_ControlItem_C_RequestSoundEvent__DelegateSignature::Param_Index' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.ValueChanged__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct Sound_ControlItem_C_ValueChanged__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Volume;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMute;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sound_ControlItem_C_ValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on Sound_ControlItem_C_ValueChanged__DelegateSignature");
static_assert(sizeof(Sound_ControlItem_C_ValueChanged__DelegateSignature) == 0x00000C, "Wrong size on Sound_ControlItem_C_ValueChanged__DelegateSignature");
static_assert(offsetof(Sound_ControlItem_C_ValueChanged__DelegateSignature, Param_Index) == 0x000000, "Member 'Sound_ControlItem_C_ValueChanged__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ValueChanged__DelegateSignature, Param_Volume) == 0x000004, "Member 'Sound_ControlItem_C_ValueChanged__DelegateSignature::Param_Volume' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_ValueChanged__DelegateSignature, bMute) == 0x000008, "Member 'Sound_ControlItem_C_ValueChanged__DelegateSignature::bMute' has a wrong offset!");

// Function Sound_ControlItem.Sound_ControlItem_C.GetRate
// 0x000C (0x000C - 0x0000)
struct Sound_ControlItem_C_GetRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_ControlItem_C_GetRate) == 0x000004, "Wrong alignment on Sound_ControlItem_C_GetRate");
static_assert(sizeof(Sound_ControlItem_C_GetRate) == 0x00000C, "Wrong size on Sound_ControlItem_C_GetRate");
static_assert(offsetof(Sound_ControlItem_C_GetRate, Rate) == 0x000000, "Member 'Sound_ControlItem_C_GetRate::Rate' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_GetRate, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'Sound_ControlItem_C_GetRate::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_ControlItem_C_GetRate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'Sound_ControlItem_C_GetRate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

}

