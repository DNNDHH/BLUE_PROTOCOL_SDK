#pragma once

 

// Package: BP_RsDialog_Purchase

#include "Basic.hpp"

#include "RsDialogPaymentType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogProductTitleType_structs.hpp"
#include "Engine_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.ExecuteUbergraph_BP_RsDialog_Purchase
// 0x0130 (0x0130 - 0x0000)
struct BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogProductTitleType                     K2Node_CustomEvent_ProductTilteType;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5536[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5537[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x0010(0x0018)()
	int32                                         K2Node_CustomEvent_RankFrom;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RankTo;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowPurchaseNum;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5538[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchaseNum;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_CustomEvent_PaymentType;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5539[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchasePrice;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsLack;                        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_PaidOnly;                       // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_553A[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_553B[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Rate_1;                         // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_553C[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_553D[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_553E[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_FCeil64_ReturnValue;                      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Rate;                           // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_553F[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5540[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5541[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsLack;                         // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase) == 0x000008, "Wrong alignment on BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase");
static_assert(sizeof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase) == 0x000130, "Wrong size on BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, EntryPoint) == 0x000000, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_ProductTilteType) == 0x000005, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_ItemSetId) == 0x000008, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_ProductName) == 0x000010, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_RankFrom) == 0x000028, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_RankTo) == 0x00002C, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_ShowPurchaseNum) == 0x000030, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_PurchaseNum) == 0x000034, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_PurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_PaymentType) == 0x000038, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_PaymentType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_PurchasePrice) == 0x00003C, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_PurchasePrice' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_bIsLack) == 0x000040, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_bIsLack' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_PaidOnly) == 0x000041, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_PaidOnly' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Not_PreBool_ReturnValue_1) == 0x000042, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_MakeArray_Array) == 0x000088, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_MakeLiteralByte_ReturnValue) == 0x000098, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_Rate_1) == 0x00009C, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_Rate_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000A1, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000A4, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A8, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000B0, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_FCeil64_ReturnValue) == 0x0000B8, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_FCeil64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_Rate) == 0x0000C0, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_Rate' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x0000C4, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000D0, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000F8, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Format_ReturnValue) == 0x000100, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, Temp_bool_Variable) == 0x000118, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000119, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00011A, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, Temp_bool_Variable_1) == 0x00011B, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_Select_Default) == 0x00011C, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Clamp_ReturnValue) == 0x000120, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000124, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000128, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_CustomEvent_IsLack) == 0x000129, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_CustomEvent_IsLack' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase, K2Node_Select_Default_1) == 0x00012A, "Member 'BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetState_Lack
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_Purchase_C_SetState_Lack final
{
public:
	bool                                          IsLack;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_Purchase_C_SetState_Lack) == 0x000001, "Wrong alignment on BP_RsDialog_Purchase_C_SetState_Lack");
static_assert(sizeof(BP_RsDialog_Purchase_C_SetState_Lack) == 0x000001, "Wrong size on BP_RsDialog_Purchase_C_SetState_Lack");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetState_Lack, IsLack) == 0x000000, "Member 'BP_RsDialog_Purchase_C_SetState_Lack::IsLack' has a wrong offset!");

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDiscountRate_SeasonPass
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass final
{
public:
	int32                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass) == 0x000004, "Wrong alignment on BP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass");
static_assert(sizeof(BP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass) == 0x000004, "Wrong size on BP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass, Rate) == 0x000000, "Member 'BP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass::Rate' has a wrong offset!");

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDiscountRate
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialog_Purchase_C_SetDiscountRate final
{
public:
	int32                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Purchase_C_SetDiscountRate) == 0x000004, "Wrong alignment on BP_RsDialog_Purchase_C_SetDiscountRate");
static_assert(sizeof(BP_RsDialog_Purchase_C_SetDiscountRate) == 0x000004, "Wrong size on BP_RsDialog_Purchase_C_SetDiscountRate");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDiscountRate, Rate) == 0x000000, "Member 'BP_RsDialog_Purchase_C_SetDiscountRate::Rate' has a wrong offset!");

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDialogInfo
// 0x0040 (0x0040 - 0x0000)
struct BP_RsDialog_Purchase_C_SetDialogInfo final
{
public:
	ERsDialogProductTitleType                     ProductTilteType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5542[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         RankFrom;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankTo;                                            // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowPurchaseNum;                                   // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5543[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchaseNum;                                       // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          PaymentType;                                       // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5544[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice;                                     // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLack;                                           // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PaidOnly;                                          // 0x0039(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_Purchase_C_SetDialogInfo) == 0x000008, "Wrong alignment on BP_RsDialog_Purchase_C_SetDialogInfo");
static_assert(sizeof(BP_RsDialog_Purchase_C_SetDialogInfo) == 0x000040, "Wrong size on BP_RsDialog_Purchase_C_SetDialogInfo");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, ProductTilteType) == 0x000000, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, ItemSetId) == 0x000004, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, ProductName) == 0x000008, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, RankFrom) == 0x000020, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, RankTo) == 0x000024, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, ShowPurchaseNum) == 0x000028, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, PurchaseNum) == 0x00002C, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::PurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, PaymentType) == 0x000030, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::PaymentType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, PurchasePrice) == 0x000034, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::PurchasePrice' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, bIsLack) == 0x000038, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::bIsLack' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetDialogInfo, PaidOnly) == 0x000039, "Member 'BP_RsDialog_Purchase_C_SetDialogInfo::PaidOnly' has a wrong offset!");

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetShopType
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_Purchase_C_SetShopType final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Purchase_C_SetShopType) == 0x000001, "Wrong alignment on BP_RsDialog_Purchase_C_SetShopType");
static_assert(sizeof(BP_RsDialog_Purchase_C_SetShopType) == 0x000001, "Wrong size on BP_RsDialog_Purchase_C_SetShopType");
static_assert(offsetof(BP_RsDialog_Purchase_C_SetShopType, ShopType) == 0x000000, "Member 'BP_RsDialog_Purchase_C_SetShopType::ShopType' has a wrong offset!");

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.Set Caution Text
// 0x0250 (0x0250 - 0x0000)
struct BP_RsDialog_Purchase_C_Set_Caution_Text final
{
public:
	int32                                         ArrayIndex;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_4;                            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5545[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_5;                            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             Temp_byte_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5546[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_6;                            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             Temp_byte_Variable_1;                              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5547[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5548[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5549[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_7;                            // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_554A[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_8;                            // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0130(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_554B[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0160(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x017D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_554C[0x2];                                     // 0x017E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_9;                            // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_6;     // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01E8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_7;     // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_8;     // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0238(0x0018)()
};
static_assert(alignof(BP_RsDialog_Purchase_C_Set_Caution_Text) == 0x000008, "Wrong alignment on BP_RsDialog_Purchase_C_Set_Caution_Text");
static_assert(sizeof(BP_RsDialog_Purchase_C_Set_Caution_Text) == 0x000250, "Wrong size on BP_RsDialog_Purchase_C_Set_Caution_Text");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, ArrayIndex) == 0x000000, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::ArrayIndex' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_int_Variable) == 0x000004, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable) == 0x000008, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_1) == 0x000018, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_2) == 0x000028, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_3) == 0x000038, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_4) == 0x000048, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_int_Array_Index_Variable) == 0x000060, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_5) == 0x000068, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_byte_Variable) == 0x000078, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_6) == 0x000080, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_byte_Variable_1) == 0x000090, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000098, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000A8, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0000B8, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x0000C8, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x0000D8, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_int_Variable_1) == 0x0000E8, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x0000F0, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Add_IntInt_ReturnValue_1) == 0x000100, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_7) == 0x000108, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_int_Variable_2) == 0x000118, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_8) == 0x000120, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x000130, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Concat_StrStr_ReturnValue) == 0x000148, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_IsEmpty_ReturnValue) == 0x000158, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Array_Get_Item) == 0x000160, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Array_Length_ReturnValue) == 0x000178, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x00017C, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Less_IntInt_ReturnValue) == 0x00017D, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Conv_TextToString_ReturnValue) == 0x000180, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, Temp_string_Variable_9) == 0x000190, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::Temp_string_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001A0, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, K2Node_Select_Default) == 0x0001B0, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C0, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue_6) == 0x0001D8, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001E8, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue_7) == 0x000200, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Add_IntInt_ReturnValue_2) == 0x000210, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Add_IntInt_ReturnValue_3) == 0x000214, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_GetTextFromAssetByName_ReturnValue_8) == 0x000218, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_GetTextFromAssetByName_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, K2Node_Select_Default_1) == 0x000228, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Purchase_C_Set_Caution_Text, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000238, "Member 'BP_RsDialog_Purchase_C_Set_Caution_Text::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

}

