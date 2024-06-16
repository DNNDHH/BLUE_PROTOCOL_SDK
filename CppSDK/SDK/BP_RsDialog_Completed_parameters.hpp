#pragma once

 

// Package: BP_RsDialog_Completed

#include "Basic.hpp"

#include "RsDialogProductTitleType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_Completed_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Completed_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_Completed_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_Completed_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_Completed_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_Completed_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_Completed_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.ExecuteUbergraph_BP_RsDialog_Completed
// 0x0060 (0x0060 - 0x0000)
struct BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogProductTitleType                     K2Node_CustomEvent_ProductTitleType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_556E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_556F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x0010(0x0018)()
	int32                                         K2Node_CustomEvent_RankFrom;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RankTo;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowPurchaseNum;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5570[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchaseNum;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowMsgStoreLetter;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5571[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_ShopType;                       // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed) == 0x000008, "Wrong alignment on BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed");
static_assert(sizeof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed) == 0x000060, "Wrong size on BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, EntryPoint) == 0x000000, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_ProductTitleType) == 0x000004, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_ProductTitleType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_ItemSetId) == 0x000008, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_ProductName) == 0x000010, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_RankFrom) == 0x000028, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_RankTo) == 0x00002C, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_ShowPurchaseNum) == 0x000030, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_PurchaseNum) == 0x000034, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_PurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_ShowMsgStoreLetter) == 0x000038, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_ShowMsgStoreLetter' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, Temp_byte_Variable) == 0x000058, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, Temp_byte_Variable_1) == 0x000059, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_CustomEvent_ShopType) == 0x00005A, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_CustomEvent_ShopType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, Temp_bool_Variable) == 0x00005B, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_Select_Default) == 0x00005C, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed, K2Node_SwitchEnum_CmpSuccess) == 0x00005D, "Member 'BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.SetCurrentShopType
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_Completed_C_SetCurrentShopType final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Completed_C_SetCurrentShopType) == 0x000001, "Wrong alignment on BP_RsDialog_Completed_C_SetCurrentShopType");
static_assert(sizeof(BP_RsDialog_Completed_C_SetCurrentShopType) == 0x000001, "Wrong size on BP_RsDialog_Completed_C_SetCurrentShopType");
static_assert(offsetof(BP_RsDialog_Completed_C_SetCurrentShopType, ShopType) == 0x000000, "Member 'BP_RsDialog_Completed_C_SetCurrentShopType::ShopType' has a wrong offset!");

// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.SetDialogInfo
// 0x0038 (0x0038 - 0x0000)
struct BP_RsDialog_Completed_C_SetDialogInfo final
{
public:
	ERsDialogProductTitleType                     ProductTitleType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5572[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         RankFrom;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankTo;                                            // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowPurchaseNum;                                   // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5573[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchaseNum;                                       // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowMsgStoreLetter;                                // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_Completed_C_SetDialogInfo) == 0x000008, "Wrong alignment on BP_RsDialog_Completed_C_SetDialogInfo");
static_assert(sizeof(BP_RsDialog_Completed_C_SetDialogInfo) == 0x000038, "Wrong size on BP_RsDialog_Completed_C_SetDialogInfo");
static_assert(offsetof(BP_RsDialog_Completed_C_SetDialogInfo, ProductTitleType) == 0x000000, "Member 'BP_RsDialog_Completed_C_SetDialogInfo::ProductTitleType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_SetDialogInfo, ItemSetId) == 0x000004, "Member 'BP_RsDialog_Completed_C_SetDialogInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_SetDialogInfo, ProductName) == 0x000008, "Member 'BP_RsDialog_Completed_C_SetDialogInfo::ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_SetDialogInfo, RankFrom) == 0x000020, "Member 'BP_RsDialog_Completed_C_SetDialogInfo::RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_SetDialogInfo, RankTo) == 0x000024, "Member 'BP_RsDialog_Completed_C_SetDialogInfo::RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_SetDialogInfo, ShowPurchaseNum) == 0x000028, "Member 'BP_RsDialog_Completed_C_SetDialogInfo::ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_SetDialogInfo, PurchaseNum) == 0x00002C, "Member 'BP_RsDialog_Completed_C_SetDialogInfo::PurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Completed_C_SetDialogInfo, ShowMsgStoreLetter) == 0x000030, "Member 'BP_RsDialog_Completed_C_SetDialogInfo::ShowMsgStoreLetter' has a wrong offset!");

}

