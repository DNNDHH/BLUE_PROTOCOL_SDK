#pragma once

 

// Package: BP_RsDialog_PaymentSelect

#include "Basic.hpp"

#include "RsDialogPaymentType_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecuteUbergraph_BP_RsDialog_PaymentSelect
// 0x0048 (0x0048 - 0x0000)
struct BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_CustomEvent_PaymentType;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_550A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchasePrice;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_550B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          Temp_byte_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_550C[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect) == 0x000008, "Wrong alignment on BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect");
static_assert(sizeof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect) == 0x000048, "Wrong size on BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, EntryPoint) == 0x000000, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, Temp_int_Variable) == 0x000004, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, Temp_int_Variable_1) == 0x000008, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, K2Node_CustomEvent_PaymentType) == 0x00000C, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::K2Node_CustomEvent_PaymentType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, K2Node_CustomEvent_PurchasePrice) == 0x000010, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::K2Node_CustomEvent_PurchasePrice' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000030, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, Temp_int_Variable_2) == 0x000034, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, Temp_int_Variable_3) == 0x000038, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, Temp_byte_Variable) == 0x00003C, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect, K2Node_Select_Default) == 0x000040, "Member 'BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect::K2Node_Select_Default' has a wrong offset!");

// Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.SetPaymentInfo
// 0x0008 (0x0008 - 0x0000)
struct BP_RsDialog_PaymentSelect_C_SetPaymentInfo final
{
public:
	ERsDialogPaymentType                          PaymentType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_550D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_PaymentSelect_C_SetPaymentInfo) == 0x000004, "Wrong alignment on BP_RsDialog_PaymentSelect_C_SetPaymentInfo");
static_assert(sizeof(BP_RsDialog_PaymentSelect_C_SetPaymentInfo) == 0x000008, "Wrong size on BP_RsDialog_PaymentSelect_C_SetPaymentInfo");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_SetPaymentInfo, PaymentType) == 0x000000, "Member 'BP_RsDialog_PaymentSelect_C_SetPaymentInfo::PaymentType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_SetPaymentInfo, PurchasePrice) == 0x000004, "Member 'BP_RsDialog_PaymentSelect_C_SetPaymentInfo::PurchasePrice' has a wrong offset!");

// Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecutionConfirmText
// 0x0180 (0x0180 - 0x0000)
struct BP_RsDialog_PaymentSelect_C_ExecutionConfirmText final
{
public:
	ERsDialogPaymentType                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_550E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ArrayIndex;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_ExecutionConfirmText;                        // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FText>                           ExecutionConfirmTextList;                          // 0x0018(0x0010)(Edit, BlueprintVisible)
	class FName                                   Temp_name_Variable;                                // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogPaymentType                          Temp_byte_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_550F[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	class FName                                   Temp_name_Variable_1;                              // 0x0048(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	class FName                                   Temp_name_Variable_2;                              // 0x0098(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5510[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x00D0(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5511[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5512[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5513[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_3;                              // 0x011C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0124(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5514[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0150(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0168(0x0018)()
};
static_assert(alignof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText) == 0x000008, "Wrong alignment on BP_RsDialog_PaymentSelect_C_ExecutionConfirmText");
static_assert(sizeof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText) == 0x000180, "Wrong size on BP_RsDialog_PaymentSelect_C_ExecutionConfirmText");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Param_Index) == 0x000000, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, ArrayIndex) == 0x000004, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::ArrayIndex' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Param_ExecutionConfirmText) == 0x000008, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Param_ExecutionConfirmText' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, ExecutionConfirmTextList) == 0x000018, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::ExecutionConfirmTextList' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_name_Variable) == 0x000028, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_byte_Variable) == 0x000031, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_int_Variable) == 0x000034, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, K2Node_MakeArray_Array) == 0x000038, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_name_Variable_1) == 0x000048, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_int_Array_Index_Variable) == 0x000058, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_int_Variable_1) == 0x00005C, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_int_Variable_2) == 0x000060, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Add_IntInt_ReturnValue_2) == 0x000068, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Add_IntInt_ReturnValue_3) == 0x00006C, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000070, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_name_Variable_2) == 0x000098, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A0, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_IsEmpty_ReturnValue) == 0x0000C8, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Array_Length_ReturnValue) == 0x0000E8, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Less_IntInt_ReturnValue) == 0x000100, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000108, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_TextIsEmpty_ReturnValue) == 0x000118, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, Temp_name_Variable_3) == 0x00011C, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, K2Node_Select_Default) == 0x000124, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000130, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000140, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000150, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_PaymentSelect_C_ExecutionConfirmText, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000168, "Member 'BP_RsDialog_PaymentSelect_C_ExecutionConfirmText::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

}

