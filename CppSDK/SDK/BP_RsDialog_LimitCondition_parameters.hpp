#pragma once

 

// Package: BP_RsDialog_LimitCondition

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogButtonType_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.ExecuteUbergraph_BP_RsDialog_LimitCondition
// 0x0060 (0x0060 - 0x0000)
struct BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_RsDialog_LimitCondition_Item_C*     CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAchieve;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CC3[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Text;                           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogProductTitleType                     K2Node_CustomEvent_ProductTilteType;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC4[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x0038(0x0018)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition) == 0x000008, "Wrong alignment on BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition");
static_assert(sizeof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition) == 0x000060, "Wrong size on BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, EntryPoint) == 0x000000, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, K2Node_CustomEvent_IsAchieve) == 0x000010, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::K2Node_CustomEvent_IsAchieve' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, K2Node_CustomEvent_Text) == 0x000018, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000028, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, K2Node_CustomEvent_ProductTilteType) == 0x000030, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::K2Node_CustomEvent_ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, K2Node_CustomEvent_ItemSetId) == 0x000034, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, K2Node_CustomEvent_ProductName) == 0x000038, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition, K2Node_MakeStruct_Margin) == 0x000050, "Member 'BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.AddItem_LimitCondition
// 0x0018 (0x0018 - 0x0000)
struct BP_RsDialog_LimitCondition_C_AddItem_LimitCondition final
{
public:
	bool                                          IsAchieve;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CC5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_LimitCondition_C_AddItem_LimitCondition) == 0x000008, "Wrong alignment on BP_RsDialog_LimitCondition_C_AddItem_LimitCondition");
static_assert(sizeof(BP_RsDialog_LimitCondition_C_AddItem_LimitCondition) == 0x000018, "Wrong size on BP_RsDialog_LimitCondition_C_AddItem_LimitCondition");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_AddItem_LimitCondition, IsAchieve) == 0x000000, "Member 'BP_RsDialog_LimitCondition_C_AddItem_LimitCondition::IsAchieve' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_AddItem_LimitCondition, Text) == 0x000008, "Member 'BP_RsDialog_LimitCondition_C_AddItem_LimitCondition::Text' has a wrong offset!");

// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.SetDialogInfo
// 0x0020 (0x0020 - 0x0000)
struct BP_RsDialog_LimitCondition_C_SetDialogInfo final
{
public:
	ERsDialogProductTitleType                     ProductTilteType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_RsDialog_LimitCondition_C_SetDialogInfo) == 0x000008, "Wrong alignment on BP_RsDialog_LimitCondition_C_SetDialogInfo");
static_assert(sizeof(BP_RsDialog_LimitCondition_C_SetDialogInfo) == 0x000020, "Wrong size on BP_RsDialog_LimitCondition_C_SetDialogInfo");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_SetDialogInfo, ProductTilteType) == 0x000000, "Member 'BP_RsDialog_LimitCondition_C_SetDialogInfo::ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_SetDialogInfo, ItemSetId) == 0x000004, "Member 'BP_RsDialog_LimitCondition_C_SetDialogInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_C_SetDialogInfo, ProductName) == 0x000008, "Member 'BP_RsDialog_LimitCondition_C_SetDialogInfo::ProductName' has a wrong offset!");

}

