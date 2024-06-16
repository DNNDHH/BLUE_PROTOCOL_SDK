#pragma once

 

// Package: PaymentSelect

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PaymentSelect.PaymentSelect_C.OnDecide__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PaymentSelect_C_OnDecide__DelegateSignature final
{
public:
	class FString                                 Payment;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PaymentSelect_C_OnDecide__DelegateSignature) == 0x000008, "Wrong alignment on PaymentSelect_C_OnDecide__DelegateSignature");
static_assert(sizeof(PaymentSelect_C_OnDecide__DelegateSignature) == 0x000010, "Wrong size on PaymentSelect_C_OnDecide__DelegateSignature");
static_assert(offsetof(PaymentSelect_C_OnDecide__DelegateSignature, Payment) == 0x000000, "Member 'PaymentSelect_C_OnDecide__DelegateSignature::Payment' has a wrong offset!");

// Function PaymentSelect.PaymentSelect_C.ExecuteUbergraph_PaymentSelect
// 0x0160 (0x0160 - 0x0000)
struct PaymentSelect_C_ExecuteUbergraph_PaymentSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_610B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_610C[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPaymentData                         CallFunc_Array_Get_Item;                           // 0x0060(0x0048)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
	int32                                         K2Node_CustomEvent_IconIndex;                      // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_610D[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_610E[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_610F[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect) == 0x000008, "Wrong alignment on PaymentSelect_C_ExecuteUbergraph_PaymentSelect");
static_assert(sizeof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect) == 0x000160, "Wrong size on PaymentSelect_C_ExecuteUbergraph_PaymentSelect");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, EntryPoint) == 0x000000, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_MakeLiteralString_ReturnValue) == 0x000008, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000040, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, K2Node_ComponentBoundEvent_SelectedItem) == 0x000048, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, K2Node_ComponentBoundEvent_SelectionType) == 0x000058, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_GetSelectedIndex_ReturnValue) == 0x00005C, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_Array_Get_Item) == 0x000060, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_PlayAnimation_ReturnValue) == 0x0000A8, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_Conv_NameToString_ReturnValue) == 0x0000B0, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C0, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C8, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, K2Node_CustomEvent_IconIndex) == 0x0000F0, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::K2Node_CustomEvent_IconIndex' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, K2Node_CreateDelegate_OutputDelegate) == 0x0000F4, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_GetGameConfigValueString_OutValue) == 0x000108, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000118, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000120, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000130, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_Concat_StrStr_ReturnValue) == 0x000138, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000148, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_ExecuteUbergraph_PaymentSelect, CallFunc_Not_PreBool_ReturnValue) == 0x000158, "Member 'PaymentSelect_C_ExecuteUbergraph_PaymentSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PaymentSelect.PaymentSelect_C.OnIconClicked
// 0x0004 (0x0004 - 0x0000)
struct PaymentSelect_C_OnIconClicked final
{
public:
	int32                                         IconIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PaymentSelect_C_OnIconClicked) == 0x000004, "Wrong alignment on PaymentSelect_C_OnIconClicked");
static_assert(sizeof(PaymentSelect_C_OnIconClicked) == 0x000004, "Wrong size on PaymentSelect_C_OnIconClicked");
static_assert(offsetof(PaymentSelect_C_OnIconClicked, IconIndex) == 0x000000, "Member 'PaymentSelect_C_OnIconClicked::IconIndex' has a wrong offset!");

// Function PaymentSelect.PaymentSelect_C.BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function PaymentSelect.PaymentSelect_C.CreatePaymentList
// 0x00E0 (0x00E0 - 0x0000)
struct PaymentSelect_C_CreatePaymentList final
{
public:
	int32                                         L_ListId;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6110[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 PaymentCheckList;                                  // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         L_ListNum;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidAmazonPay1Click_ReturnValue;         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6111[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6112[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaymentIcon_C*                         CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0058(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6113[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPaymentData                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0078(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6114[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckVersion_Ok;                          // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PaymentSelect_C_CreatePaymentList) == 0x000008, "Wrong alignment on PaymentSelect_C_CreatePaymentList");
static_assert(sizeof(PaymentSelect_C_CreatePaymentList) == 0x0000E0, "Wrong size on PaymentSelect_C_CreatePaymentList");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, L_ListId) == 0x000000, "Member 'PaymentSelect_C_CreatePaymentList::L_ListId' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, PaymentCheckList) == 0x000008, "Member 'PaymentSelect_C_CreatePaymentList::PaymentCheckList' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, L_ListNum) == 0x000018, "Member 'PaymentSelect_C_CreatePaymentList::L_ListNum' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_ValidAmazonPay1Click_ReturnValue) == 0x00001C, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_ValidAmazonPay1Click_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, Temp_int_Array_Index_Variable) == 0x000020, "Member 'PaymentSelect_C_CreatePaymentList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Divide_IntInt_ReturnValue) == 0x000024, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Percent_IntInt_ReturnValue) == 0x000028, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'PaymentSelect_C_CreatePaymentList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Create_ReturnValue) == 0x000040, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_AddChildToGrid_ReturnValue) == 0x000048, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'PaymentSelect_C_CreatePaymentList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000058, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Array_Get_Item) == 0x00006C, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_GetDataTableRowFromName_OutRow) == 0x000078, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Array_Add_ReturnValue) == 0x0000C4, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C8, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_Array_AddUnique_ReturnValue) == 0x0000D8, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000DC, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CreatePaymentList, CallFunc_CheckVersion_Ok) == 0x0000DD, "Member 'PaymentSelect_C_CreatePaymentList::CallFunc_CheckVersion_Ok' has a wrong offset!");

// Function PaymentSelect.PaymentSelect_C.On_List_Payment_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct PaymentSelect_C_On_List_Payment_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(PaymentSelect_C_On_List_Payment_GenerateWidget_0) == 0x000008, "Wrong alignment on PaymentSelect_C_On_List_Payment_GenerateWidget_0");
static_assert(sizeof(PaymentSelect_C_On_List_Payment_GenerateWidget_0) == 0x000038, "Wrong size on PaymentSelect_C_On_List_Payment_GenerateWidget_0");
static_assert(offsetof(PaymentSelect_C_On_List_Payment_GenerateWidget_0, Item) == 0x000000, "Member 'PaymentSelect_C_On_List_Payment_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_On_List_Payment_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'PaymentSelect_C_On_List_Payment_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_On_List_Payment_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'PaymentSelect_C_On_List_Payment_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_On_List_Payment_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'PaymentSelect_C_On_List_Payment_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function PaymentSelect.PaymentSelect_C.CheckVersion
// 0x000C (0x000C - 0x0000)
struct PaymentSelect_C_CheckVersion final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ok;                                                // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidAmazonPayPayment_ReturnValue;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PaymentSelect_C_CheckVersion) == 0x000004, "Wrong alignment on PaymentSelect_C_CheckVersion");
static_assert(sizeof(PaymentSelect_C_CheckVersion) == 0x00000C, "Wrong size on PaymentSelect_C_CheckVersion");
static_assert(offsetof(PaymentSelect_C_CheckVersion, RowName) == 0x000000, "Member 'PaymentSelect_C_CheckVersion::RowName' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CheckVersion, Ok) == 0x000008, "Member 'PaymentSelect_C_CheckVersion::Ok' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CheckVersion, CallFunc_NotEqual_NameName_ReturnValue) == 0x000009, "Member 'PaymentSelect_C_CheckVersion::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PaymentSelect_C_CheckVersion, CallFunc_ValidAmazonPayPayment_ReturnValue) == 0x00000A, "Member 'PaymentSelect_C_CheckVersion::CallFunc_ValidAmazonPayPayment_ReturnValue' has a wrong offset!");

}

