#pragma once

 

// Package: UMG_LoginBonusListLineItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ItemClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6914[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          SelectedItem;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature");
static_assert(sizeof(UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature) == 0x000010, "Wrong size on UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature, ID) == 0x000000, "Member 'UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature::ID' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature, SelectedItem) == 0x000008, "Member 'UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature::SelectedItem' has a wrong offset!");

// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ExecuteUbergraph_UMG_LoginBonusListLineItem
// 0x0020 (0x0020 - 0x0000)
struct UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6915[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem) == 0x000008, "Wrong alignment on UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem");
static_assert(sizeof(UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem) == 0x000020, "Wrong size on UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem, EntryPoint) == 0x000000, "Member 'UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem, K2Node_Event_Animation) == 0x000008, "Member 'UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_LoginBonusListLineItem_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusListLineItem_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_LoginBonusListLineItem_C_OnAnimationFinished");
static_assert(sizeof(UMG_LoginBonusListLineItem_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_LoginBonusListLineItem_C_OnAnimationFinished");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_LoginBonusListLineItem_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetData
// 0x0140 (0x0140 - 0x0000)
struct UMG_LoginBonusListLineItem_C_SetData final
{
public:
	struct FSBLoginBonusWindowDayData             Data;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          StumpOn;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Click;                                             // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6916[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AmountValue;                                       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AmountSet;                                         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6917[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          ActiveIcon;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             IconItemType;                                      // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6918[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0050(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6919[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_691A[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00D0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_691B[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_691C[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          K2Node_Select_Default_1;                           // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLineItem_C_SetData) == 0x000008, "Wrong alignment on UMG_LoginBonusListLineItem_C_SetData");
static_assert(sizeof(UMG_LoginBonusListLineItem_C_SetData) == 0x000140, "Wrong size on UMG_LoginBonusListLineItem_C_SetData");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, Data) == 0x000000, "Member 'UMG_LoginBonusListLineItem_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, StumpOn) == 0x000018, "Member 'UMG_LoginBonusListLineItem_C_SetData::StumpOn' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, Click) == 0x000019, "Member 'UMG_LoginBonusListLineItem_C_SetData::Click' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, AmountValue) == 0x00001C, "Member 'UMG_LoginBonusListLineItem_C_SetData::AmountValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, AmountSet) == 0x000020, "Member 'UMG_LoginBonusListLineItem_C_SetData::AmountSet' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, ActiveIcon) == 0x000028, "Member 'UMG_LoginBonusListLineItem_C_SetData::ActiveIcon' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, IconItemType) == 0x000030, "Member 'UMG_LoginBonusListLineItem_C_SetData::IconItemType' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, Temp_byte_Variable) == 0x000031, "Member 'UMG_LoginBonusListLineItem_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, Temp_byte_Variable_1) == 0x000032, "Member 'UMG_LoginBonusListLineItem_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000033, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000050, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'UMG_LoginBonusListLineItem_C_SetData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000080, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000090, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Replace_ReturnValue) == 0x0000A0, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_SelectInt_ReturnValue) == 0x0000C8, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, Temp_bool_Variable) == 0x0000CC, "Member 'UMG_LoginBonusListLineItem_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000D0, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, K2Node_Select_Default) == 0x0000E8, "Member 'UMG_LoginBonusListLineItem_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000F0, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Replace_ReturnValue_1) == 0x000100, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, Temp_bool_Variable_1) == 0x000128, "Member 'UMG_LoginBonusListLineItem_C_SetData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, K2Node_Select_Default_1) == 0x000130, "Member 'UMG_LoginBonusListLineItem_C_SetData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_Conv_IntToByte_ReturnValue) == 0x000138, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, CallFunc_GetValidValue_ReturnValue) == 0x000139, "Member 'UMG_LoginBonusListLineItem_C_SetData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetData, K2Node_SwitchEnum_CmpSuccess_1) == 0x00013A, "Member 'UMG_LoginBonusListLineItem_C_SetData::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetMouseClickValue
// 0x0004 (0x0004 - 0x0000)
struct UMG_LoginBonusListLineItem_C_SetMouseClickValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusListLineItem_C_SetMouseClickValue) == 0x000004, "Wrong alignment on UMG_LoginBonusListLineItem_C_SetMouseClickValue");
static_assert(sizeof(UMG_LoginBonusListLineItem_C_SetMouseClickValue) == 0x000004, "Wrong size on UMG_LoginBonusListLineItem_C_SetMouseClickValue");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetMouseClickValue, Value) == 0x000000, "Member 'UMG_LoginBonusListLineItem_C_SetMouseClickValue::Value' has a wrong offset!");

// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetBtnSelected
// 0x0001 (0x0001 - 0x0000)
struct UMG_LoginBonusListLineItem_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLineItem_C_SetBtnSelected) == 0x000001, "Wrong alignment on UMG_LoginBonusListLineItem_C_SetBtnSelected");
static_assert(sizeof(UMG_LoginBonusListLineItem_C_SetBtnSelected) == 0x000001, "Wrong size on UMG_LoginBonusListLineItem_C_SetBtnSelected");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetBtnSelected, bSelected) == 0x000000, "Member 'UMG_LoginBonusListLineItem_C_SetBtnSelected::bSelected' has a wrong offset!");

// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetIconExtraData
// 0x0050 (0x0050 - 0x0000)
struct UMG_LoginBonusListLineItem_C_SetIconExtraData final
{
public:
	class UCommonIcon_C*                          IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLoginBonusWindowItemData            ItemData;                                          // 0x0008(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	ELoginBonusCategory                           Category;                                          // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_691D[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateColorManager*             CallFunc_GetColorManager_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharaCreateColor>            CallFunc_GetColorTable_ReturnValue;                // 0x0038(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLineItem_C_SetIconExtraData) == 0x000008, "Wrong alignment on UMG_LoginBonusListLineItem_C_SetIconExtraData");
static_assert(sizeof(UMG_LoginBonusListLineItem_C_SetIconExtraData) == 0x000050, "Wrong size on UMG_LoginBonusListLineItem_C_SetIconExtraData");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, IconWidget) == 0x000000, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::IconWidget' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, ItemData) == 0x000008, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::ItemData' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, Category) == 0x000028, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::Category' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, CallFunc_Conv_IntToByte_ReturnValue) == 0x000029, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, CallFunc_GetValidValue_ReturnValue) == 0x00002A, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, CallFunc_GetColorManager_ReturnValue) == 0x000030, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::CallFunc_GetColorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, CallFunc_GetColorTable_ReturnValue) == 0x000038, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::CallFunc_GetColorTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000049, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLineItem_C_SetIconExtraData, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x00004A, "Member 'UMG_LoginBonusListLineItem_C_SetIconExtraData::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");

}

