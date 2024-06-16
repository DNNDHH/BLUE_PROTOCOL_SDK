#pragma once

 

// Package: BP_RsDialog_ProductAmount

#include "Basic.hpp"

#include "RsDialogPaymentType_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.ExecuteUbergraph_BP_RsDialog_ProductAmount
// 0x00C8 (0x00C8 - 0x0000)
struct BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogPaymentType                          Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94D7[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94D8[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount_1;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_CustomEvent_Type;                           // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94D9[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsLack;                         // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94DA[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94DB[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94DC[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_PaidOnly;                       // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94DD[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94DE[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount) == 0x000008, "Wrong alignment on BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount");
static_assert(sizeof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount) == 0x0000C8, "Wrong size on BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, EntryPoint) == 0x000000, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_bool_Variable) == 0x000004, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_byte_Variable) == 0x000005, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_int_Variable) == 0x000008, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_int_Variable_1) == 0x00000C, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_int_Variable_2) == 0x000010, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_int_Variable_3) == 0x000014, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_bool_Variable_1) == 0x000018, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_struct_Variable) == 0x00001C, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, Temp_struct_Variable_1) == 0x00002C, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, CallFunc_Multiply_IntInt_ReturnValue) == 0x00003C, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_CustomEvent_Amount_1) == 0x000040, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_CustomEvent_Amount_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, CallFunc_MakeLiteralByte_ReturnValue) == 0x000044, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000045, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_CustomEvent_Type) == 0x000046, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000048, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_Select_Default) == 0x00004C, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_Event_IsDesignTime) == 0x000050, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_CustomEvent_IsLack) == 0x000051, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_CustomEvent_IsLack' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_Select_Default_1) == 0x000054, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000090, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_CustomEvent_Amount) == 0x000094, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, CallFunc_SelectInt_ReturnValue) == 0x000098, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_CustomEvent_PaidOnly) == 0x00009C, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_CustomEvent_PaidOnly' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x0000A0, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A8, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount, K2Node_Select_Default_2) == 0x0000C0, "Member 'BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount::K2Node_Select_Default_2' has a wrong offset!");

// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetRibbon_PaidOnly
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly final
{
public:
	bool                                          PaidOnly;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly) == 0x000001, "Wrong alignment on BP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly");
static_assert(sizeof(BP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly) == 0x000001, "Wrong size on BP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly, PaidOnly) == 0x000000, "Member 'BP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly::PaidOnly' has a wrong offset!");

// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetSelectNum
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialog_ProductAmount_C_SetSelectNum final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ProductAmount_C_SetSelectNum) == 0x000004, "Wrong alignment on BP_RsDialog_ProductAmount_C_SetSelectNum");
static_assert(sizeof(BP_RsDialog_ProductAmount_C_SetSelectNum) == 0x000004, "Wrong size on BP_RsDialog_ProductAmount_C_SetSelectNum");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_SetSelectNum, Param_Amount) == 0x000000, "Member 'BP_RsDialog_ProductAmount_C_SetSelectNum::Param_Amount' has a wrong offset!");

// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmountColor
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_ProductAmount_C_SetAmountColor final
{
public:
	bool                                          IsLack;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_ProductAmount_C_SetAmountColor) == 0x000001, "Wrong alignment on BP_RsDialog_ProductAmount_C_SetAmountColor");
static_assert(sizeof(BP_RsDialog_ProductAmount_C_SetAmountColor) == 0x000001, "Wrong size on BP_RsDialog_ProductAmount_C_SetAmountColor");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_SetAmountColor, IsLack) == 0x000000, "Member 'BP_RsDialog_ProductAmount_C_SetAmountColor::IsLack' has a wrong offset!");

// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_ProductAmount_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_ProductAmount_C_PreConstruct) == 0x000001, "Wrong alignment on BP_RsDialog_ProductAmount_C_PreConstruct");
static_assert(sizeof(BP_RsDialog_ProductAmount_C_PreConstruct) == 0x000001, "Wrong size on BP_RsDialog_ProductAmount_C_PreConstruct");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_RsDialog_ProductAmount_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetPaymentType
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_ProductAmount_C_SetPaymentType final
{
public:
	ERsDialogPaymentType                          Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ProductAmount_C_SetPaymentType) == 0x000001, "Wrong alignment on BP_RsDialog_ProductAmount_C_SetPaymentType");
static_assert(sizeof(BP_RsDialog_ProductAmount_C_SetPaymentType) == 0x000001, "Wrong size on BP_RsDialog_ProductAmount_C_SetPaymentType");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_SetPaymentType, Type) == 0x000000, "Member 'BP_RsDialog_ProductAmount_C_SetPaymentType::Type' has a wrong offset!");

// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmount
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialog_ProductAmount_C_SetAmount final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ProductAmount_C_SetAmount) == 0x000004, "Wrong alignment on BP_RsDialog_ProductAmount_C_SetAmount");
static_assert(sizeof(BP_RsDialog_ProductAmount_C_SetAmount) == 0x000004, "Wrong size on BP_RsDialog_ProductAmount_C_SetAmount");
static_assert(offsetof(BP_RsDialog_ProductAmount_C_SetAmount, Param_Amount) == 0x000000, "Member 'BP_RsDialog_ProductAmount_C_SetAmount::Param_Amount' has a wrong offset!");

}

