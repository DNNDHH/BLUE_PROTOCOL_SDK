#pragma once

 

// Package: BP_RsDialog_Payment

#include "Basic.hpp"

#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogPaymentType_structs.hpp"
#include "RsDialogButtonType_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.ExecuteUbergraph_BP_RsDialog_Payment
// 0x0060 (0x0060 - 0x0000)
struct BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogProductTitleType                     K2Node_CustomEvent_ProductTilteType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5550[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5551[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x0010(0x0018)()
	int32                                         K2Node_CustomEvent_RankFrom;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RankTo;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowPurchaseNum;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5552[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchaseNum;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_CustomEvent_PaymentType01;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5553[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchasePrice01;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_CustomEvent_PaymentType02;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5554[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchasePrice02;                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0048(0x0018)()
};
static_assert(alignof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment) == 0x000008, "Wrong alignment on BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment");
static_assert(sizeof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment) == 0x000060, "Wrong size on BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, EntryPoint) == 0x000000, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_ProductTilteType) == 0x000004, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_ItemSetId) == 0x000008, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_ProductName) == 0x000010, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_RankFrom) == 0x000028, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_RankTo) == 0x00002C, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_ShowPurchaseNum) == 0x000030, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_PurchaseNum) == 0x000034, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_PurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_PaymentType01) == 0x000038, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_PaymentType01' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_PurchasePrice01) == 0x00003C, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_PurchasePrice01' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_PaymentType02) == 0x000040, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_PaymentType02' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, K2Node_CustomEvent_PurchasePrice02) == 0x000044, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::K2Node_CustomEvent_PurchasePrice02' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment, CallFunc_Conv_IntToText_ReturnValue) == 0x000048, "Member 'BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.SetDialogInfo
// 0x0040 (0x0040 - 0x0000)
struct BP_RsDialog_Payment_C_SetDialogInfo final
{
public:
	ERsDialogProductTitleType                     ProductTilteType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5555[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         RankFrom;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankTo;                                            // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowPurchaseNum;                                   // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5556[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchaseNum;                                       // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          PaymentType01;                                     // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5557[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice01;                                   // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          PaymentType02;                                     // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5558[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice02;                                   // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Payment_C_SetDialogInfo) == 0x000008, "Wrong alignment on BP_RsDialog_Payment_C_SetDialogInfo");
static_assert(sizeof(BP_RsDialog_Payment_C_SetDialogInfo) == 0x000040, "Wrong size on BP_RsDialog_Payment_C_SetDialogInfo");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, ProductTilteType) == 0x000000, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, ItemSetId) == 0x000004, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, ProductName) == 0x000008, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, RankFrom) == 0x000020, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, RankTo) == 0x000024, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, ShowPurchaseNum) == 0x000028, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, PurchaseNum) == 0x00002C, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::PurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, PaymentType01) == 0x000030, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::PaymentType01' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, PurchasePrice01) == 0x000034, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::PurchasePrice01' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, PaymentType02) == 0x000038, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::PaymentType02' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Payment_C_SetDialogInfo, PurchasePrice02) == 0x00003C, "Member 'BP_RsDialog_Payment_C_SetDialogInfo::PurchasePrice02' has a wrong offset!");

}

