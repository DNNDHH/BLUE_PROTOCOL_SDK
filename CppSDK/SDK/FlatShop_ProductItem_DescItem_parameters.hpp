#pragma once

 

// Package: FlatShop_ProductItem_DescItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "E_SBProductDetailType_structs.hpp"


namespace SDK::Params
{

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature final
{
public:
	bool                                          IsSetItem;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature) == 0x000001, "Wrong alignment on FlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature) == 0x000001, "Wrong size on FlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature, IsSetItem) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature::IsSetItem' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked2__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature) == 0x000008, "Wrong size on FlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature, Data) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature::Data' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ExecuteUbergraph_FlatShop_ProductItem_DescItem
// 0x0020 (0x0020 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_CustomEvent_Visibility;                     // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         K2Node_CustomEvent_DetailType;                     // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bTrying_1;                      // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DEA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_CustomEvent_Sender;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bTrying;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem) == 0x000020, "Wrong size on FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, EntryPoint) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, Temp_bool_Variable) == 0x000004, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, Temp_byte_Variable) == 0x000005, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, Temp_byte_Variable_1) == 0x000006, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, K2Node_CustomEvent_Visibility) == 0x000007, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::K2Node_CustomEvent_Visibility' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, K2Node_Event_IsDesignTime) == 0x000008, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, CallFunc_BooleanAND_ReturnValue) == 0x000009, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, K2Node_CustomEvent_DetailType) == 0x00000A, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::K2Node_CustomEvent_DetailType' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, K2Node_CustomEvent_bTrying_1) == 0x00000B, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::K2Node_CustomEvent_bTrying_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, K2Node_CustomEvent_Sender) == 0x000010, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, K2Node_CustomEvent_bTrying) == 0x000018, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::K2Node_CustomEvent_bTrying' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem, K2Node_Select_Default) == 0x000019, "Member 'FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem::K2Node_Select_Default' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeTrying
// 0x0010 (0x0010 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_OnChangeTrying final
{
public:
	class UBP_SBProductItemData_C*                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_OnChangeTrying) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_OnChangeTrying");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_OnChangeTrying) == 0x000010, "Wrong size on FlatShop_ProductItem_DescItem_C_OnChangeTrying");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_OnChangeTrying, Sender) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_OnChangeTrying::Sender' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_OnChangeTrying, bTrying) == 0x000008, "Member 'FlatShop_ProductItem_DescItem_C_OnChangeTrying::bTrying' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetTrying
// 0x0001 (0x0001 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_SetTrying final
{
public:
	bool                                          bTrying;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_SetTrying) == 0x000001, "Wrong alignment on FlatShop_ProductItem_DescItem_C_SetTrying");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_SetTrying) == 0x000001, "Wrong size on FlatShop_ProductItem_DescItem_C_SetTrying");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetTrying, bTrying) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_SetTrying::bTrying' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.LayoutCheck
// 0x0001 (0x0001 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_LayoutCheck final
{
public:
	E_SBProductDetailType                         Param_DetailType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_LayoutCheck) == 0x000001, "Wrong alignment on FlatShop_ProductItem_DescItem_C_LayoutCheck");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_LayoutCheck) == 0x000001, "Wrong size on FlatShop_ProductItem_DescItem_C_LayoutCheck");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_LayoutCheck, Param_DetailType) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_LayoutCheck::Param_DetailType' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_PreConstruct) == 0x000001, "Wrong alignment on FlatShop_ProductItem_DescItem_C_PreConstruct");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_PreConstruct) == 0x000001, "Wrong size on FlatShop_ProductItem_DescItem_C_PreConstruct");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeVisibility
// 0x0001 (0x0001 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_OnChangeVisibility final
{
public:
	ESlateVisibility                              Param_Visibility;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_OnChangeVisibility) == 0x000001, "Wrong alignment on FlatShop_ProductItem_DescItem_C_OnChangeVisibility");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_OnChangeVisibility) == 0x000001, "Wrong size on FlatShop_ProductItem_DescItem_C_OnChangeVisibility");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_OnChangeVisibility, Param_Visibility) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_OnChangeVisibility::Param_Visibility' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfo
// 0x0038 (0x0038 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_SetProductInfo final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DEB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_SetProductInfo) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_SetProductInfo");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_SetProductInfo) == 0x000038, "Wrong size on FlatShop_ProductItem_DescItem_C_SetProductInfo");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfo, ItemId) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfo::ItemId' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfo, ItemType) == 0x000004, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfo::ItemType' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfo, CallFunc_GetNameText_ReturnValue) == 0x000008, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfo::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfo, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfo, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfo, CallFunc_IsValid_ReturnValue_2) == 0x000032, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfoReward
// 0x0068 (0x0068 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_SetProductInfoReward final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DEC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DED[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutName;        // 0x0010(0x0018)()
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutType;        // 0x0028(0x0018)()
	bool                                          CallFunc_GetRewardItemNameAndType2_OutNoName;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DEE[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0048(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_SetProductInfoReward");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward) == 0x000068, "Wrong size on FlatShop_ProductItem_DescItem_C_SetProductInfoReward");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, RewardItemType) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::RewardItemType' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, ItemId) == 0x000004, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::ItemId' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, Amount) == 0x000008, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::Amount' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, Temp_bool_Variable) == 0x00000C, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, CallFunc_GetRewardItemNameAndType2_OutName) == 0x000010, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::CallFunc_GetRewardItemNameAndType2_OutName' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, CallFunc_GetRewardItemNameAndType2_OutType) == 0x000028, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::CallFunc_GetRewardItemNameAndType2_OutType' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, CallFunc_GetRewardItemNameAndType2_OutNoName) == 0x000040, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::CallFunc_GetRewardItemNameAndType2_OutNoName' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, K2Node_Select_Default) == 0x000048, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductInfoReward, CallFunc_IsValid_ReturnValue_2) == 0x000062, "Member 'FlatShop_ProductItem_DescItem_C_SetProductInfoReward::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductItemData
// 0x0058 (0x0058 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_SetProductItemData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DEF[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowRate_bValue;                        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DF0[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTrying_bTrying;                        // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DF1[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetDetailType_self_CastInput;             // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         CallFunc_GetDetailType_DetailType;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_Visibility;                 // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DF2[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UBP_SBProductItemData_C* Sender, bool bTrying)> K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetProductData_bValid;                    // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DF3[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESlateVisibility Visibility)>  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_SetProductItemData) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_SetProductItemData");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_SetProductItemData) == 0x000058, "Wrong size on FlatShop_ProductItem_DescItem_C_SetProductItemData");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, Data) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::Data' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, Temp_bool_Variable) == 0x000008, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, Temp_bool_Variable_1) == 0x000009, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, Temp_int_Variable) == 0x00000C, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, Temp_int_Variable_1) == 0x000010, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000014, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_IsShowRate_bValue) == 0x000015, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_IsShowRate_bValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, K2Node_Select_Default) == 0x000018, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_GetTrying_bTrying) == 0x00001C, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_GetTrying_bTrying' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_GetDetailType_self_CastInput) == 0x000020, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_GetDetailType_self_CastInput' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_GetDetailType_DetailType) == 0x000030, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_GetDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000031, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_GetVisibility_Visibility) == 0x000032, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_GetVisibility_Visibility' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000044, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, K2Node_Select_Default_1) == 0x000045, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, CallFunc_SetProductData_bValid) == 0x000046, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::CallFunc_SetProductData_bValid' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetProductItemData, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'FlatShop_ProductItem_DescItem_C_SetProductItemData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSwitchType
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_SetSwitchType final
{
public:
	int32                                         SwitchId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_SetSwitchType) == 0x000004, "Wrong alignment on FlatShop_ProductItem_DescItem_C_SetSwitchType");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_SetSwitchType) == 0x000004, "Wrong size on FlatShop_ProductItem_DescItem_C_SetSwitchType");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSwitchType, SwitchId) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_SetSwitchType::SwitchId' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetRate
// 0x00B8 (0x00B8 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_SetRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DF4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DF5[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_SetRate) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_SetRate");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_SetRate) == 0x0000B8, "Wrong size on FlatShop_ProductItem_DescItem_C_SetRate");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetRate, Rate) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_SetRate::Rate' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetRate, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'FlatShop_ProductItem_DescItem_C_SetRate::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetRate, CallFunc_Add_FloatFloat_ReturnValue) == 0x000018, "Member 'FlatShop_ProductItem_DescItem_C_SetRate::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetRate, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'FlatShop_ProductItem_DescItem_C_SetRate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetRate, CallFunc_Conv_FloatToText_ReturnValue) == 0x000038, "Member 'FlatShop_ProductItem_DescItem_C_SetRate::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetRate, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'FlatShop_ProductItem_DescItem_C_SetRate::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetRate, K2Node_MakeArray_Array) == 0x000090, "Member 'FlatShop_ProductItem_DescItem_C_SetRate::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetRate, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'FlatShop_ProductItem_DescItem_C_SetRate::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetDetailType
// 0x1870 (0x1870 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_SetDetailType final
{
public:
	E_SBProductDetailType                         InDetailType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DF6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0090(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0118(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x01A0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x0228(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_5;                    // 0x02B0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_6;                    // 0x0338(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x03C0(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0638(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_7;                    // 0x08B0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_8;                    // 0x0938(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_9;                    // 0x09C0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_10;                   // 0x0A48(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_11;                   // 0x0AD0(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_2;                   // 0x0B58(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_12;                   // 0x0DD0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_13;                   // 0x0E58(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_3;                   // 0x0EE0(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_14;                   // 0x1158(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_15;                   // 0x11E0(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_4;                   // 0x1268(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_16;                   // 0x14E0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_17;                   // 0x1568(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_5;                   // 0x15F0(0x0278)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x1868(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_SetDetailType) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_SetDetailType");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_SetDetailType) == 0x001870, "Wrong size on FlatShop_ProductItem_DescItem_C_SetDetailType");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, InDetailType) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::InDetailType' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_1) == 0x000090, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_2) == 0x000118, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_3) == 0x0001A0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_4) == 0x000228, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_5) == 0x0002B0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_5' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_6) == 0x000338, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_6' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_ButtonStyle) == 0x0003C0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_ButtonStyle_1) == 0x000638, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_7) == 0x0008B0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_7' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_8) == 0x000938, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_8' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_9) == 0x0009C0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_9' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_10) == 0x000A48, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_10' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_11) == 0x000AD0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_11' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_ButtonStyle_2) == 0x000B58, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_ButtonStyle_2' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_12) == 0x000DD0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_12' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_13) == 0x000E58, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_13' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_ButtonStyle_3) == 0x000EE0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_ButtonStyle_3' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_14) == 0x001158, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_14' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_15) == 0x0011E0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_15' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_ButtonStyle_4) == 0x001268, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_ButtonStyle_4' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_16) == 0x0014E0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_16' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_SlateBrush_17) == 0x001568, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_SlateBrush_17' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_MakeStruct_ButtonStyle_5) == 0x0015F0, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_MakeStruct_ButtonStyle_5' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetDetailType, K2Node_SwitchEnum_CmpSuccess) == 0x001868, "Member 'FlatShop_ProductItem_DescItem_C_SetDetailType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ClearProductItemData
// 0x0014 (0x0014 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_ClearProductItemData final
{
public:
	TDelegate<void(ESlateVisibility Visibility)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_ClearProductItemData) == 0x000004, "Wrong alignment on FlatShop_ProductItem_DescItem_C_ClearProductItemData");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_ClearProductItemData) == 0x000014, "Wrong size on FlatShop_ProductItem_DescItem_C_ClearProductItemData");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ClearProductItemData, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_ClearProductItemData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_ClearProductItemData, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'FlatShop_ProductItem_DescItem_C_ClearProductItemData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSeasonPassRewardExtraInfo
// 0x00E0 (0x00E0 - 0x0000)
struct FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo final
{
public:
	ESBSeasonPassRewardType                       Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DF7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DF8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FName                                   K2Node_Select_Default;                             // 0x0090(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C0(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo");
static_assert(sizeof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo) == 0x0000E0, "Wrong size on FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, Temp_byte_Variable) == 0x000000, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, Temp_name_Variable) == 0x000004, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, Temp_name_Variable_1) == 0x00000C, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, K2Node_MakeArray_Array) == 0x000080, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, K2Node_Select_Default) == 0x000090, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, CallFunc_Format_ReturnValue) == 0x000098, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000B0, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C0, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D8, "Member 'FlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

