#pragma once

 

// Package: FlatShop_Credit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function FlatShop_Credit.FlatShop_Credit_C.ExecuteUbergraph_FlatShop_Credit
// 0x0060 (0x0060 - 0x0000)
struct FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit) == 0x000008, "Wrong alignment on FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit");
static_assert(sizeof(FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit) == 0x000060, "Wrong size on FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit");
static_assert(offsetof(FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit, EntryPoint) == 0x000000, "Member 'FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit::EntryPoint' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit, CallFunc_Not_PreBool_ReturnValue) == 0x000058, "Member 'FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit, CallFunc_Not_PreBool_ReturnValue_1) == 0x000059, "Member 'FlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetShopType
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_Credit_C_SetShopType final
{
public:
	ESBRmShopMenuType                             Param_ShopType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDialog;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_SetShopType) == 0x000001, "Wrong alignment on FlatShop_Credit_C_SetShopType");
static_assert(sizeof(FlatShop_Credit_C_SetShopType) == 0x000004, "Wrong size on FlatShop_Credit_C_SetShopType");
static_assert(offsetof(FlatShop_Credit_C_SetShopType, Param_ShopType) == 0x000000, "Member 'FlatShop_Credit_C_SetShopType::Param_ShopType' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetShopType, IsDialog) == 0x000001, "Member 'FlatShop_Credit_C_SetShopType::IsDialog' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetShopType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'FlatShop_Credit_C_SetShopType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetShopType, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'FlatShop_Credit_C_SetShopType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetCreditNum
// 0x001C (0x001C - 0x0000)
struct FlatShop_Credit_C_SetCreditNum final
{
public:
	int32                                         Free;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Paid;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Total;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Paid;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_free;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_SetCreditNum) == 0x000004, "Wrong alignment on FlatShop_Credit_C_SetCreditNum");
static_assert(sizeof(FlatShop_Credit_C_SetCreditNum) == 0x00001C, "Wrong size on FlatShop_Credit_C_SetCreditNum");
static_assert(offsetof(FlatShop_Credit_C_SetCreditNum, Free) == 0x000000, "Member 'FlatShop_Credit_C_SetCreditNum::Free' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetCreditNum, Paid) == 0x000004, "Member 'FlatShop_Credit_C_SetCreditNum::Paid' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetCreditNum, L_Total) == 0x000008, "Member 'FlatShop_Credit_C_SetCreditNum::L_Total' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetCreditNum, L_Paid) == 0x00000C, "Member 'FlatShop_Credit_C_SetCreditNum::L_Paid' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetCreditNum, L_free) == 0x000010, "Member 'FlatShop_Credit_C_SetCreditNum::L_free' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetCreditNum, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'FlatShop_Credit_C_SetCreditNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetCreditNum, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'FlatShop_Credit_C_SetCreditNum::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.Set Gasha Credit Num
// 0x0040 (0x0040 - 0x0000)
struct FlatShop_Credit_C_Set_Gasha_Credit_Num final
{
public:
	int32                                         Free;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Paid;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkyCoin;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10CC[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              FreeExpired;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              PaidExpired;                                       // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              BPPointExpired;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFreeExpired;                                     // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPaidExpired;                                     // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10CD[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_Paid;                                            // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_free;                                            // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExpiredDay_IsExpired;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExpiredDay_IsExpired_1;                 // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExpiredDay_IsExpired_2;                 // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_Set_Gasha_Credit_Num) == 0x000008, "Wrong alignment on FlatShop_Credit_C_Set_Gasha_Credit_Num");
static_assert(sizeof(FlatShop_Credit_C_Set_Gasha_Credit_Num) == 0x000040, "Wrong size on FlatShop_Credit_C_Set_Gasha_Credit_Num");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, Free) == 0x000000, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::Free' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, Paid) == 0x000004, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::Paid' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, SkyCoin) == 0x000008, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::SkyCoin' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, FreeExpired) == 0x000010, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::FreeExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, PaidExpired) == 0x000018, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::PaidExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, BPPointExpired) == 0x000020, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::BPPointExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, IsFreeExpired) == 0x000028, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::IsFreeExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, IsPaidExpired) == 0x000029, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::IsPaidExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, L_Paid) == 0x00002C, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::L_Paid' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, L_free) == 0x000030, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::L_free' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, CallFunc_IsExpiredDay_IsExpired) == 0x000034, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::CallFunc_IsExpiredDay_IsExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, CallFunc_IsExpiredDay_IsExpired_1) == 0x000035, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::CallFunc_IsExpiredDay_IsExpired_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, CallFunc_IsExpiredDay_IsExpired_2) == 0x000036, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::CallFunc_IsExpiredDay_IsExpired_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, CallFunc_BooleanOR_ReturnValue) == 0x000037, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Set_Gasha_Credit_Num, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003C, "Member 'FlatShop_Credit_C_Set_Gasha_Credit_Num::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetGashaCreditType
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_Credit_C_SetGashaCreditType final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Credit_C_SetGashaCreditType) == 0x000004, "Wrong alignment on FlatShop_Credit_C_SetGashaCreditType");
static_assert(sizeof(FlatShop_Credit_C_SetGashaCreditType) == 0x000004, "Wrong size on FlatShop_Credit_C_SetGashaCreditType");
static_assert(offsetof(FlatShop_Credit_C_SetGashaCreditType, Param_Index) == 0x000000, "Member 'FlatShop_Credit_C_SetGashaCreditType::Param_Index' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.ChangeToTicketType
// 0x0140 (0x0140 - 0x0000)
struct FlatShop_Credit_C_ChangeToTicketType final
{
public:
	TArray<int32>                                 TicketIdList;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 TicketPriceList;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsDiff;                                            // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10CE[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TicketAmount;                                      // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price;                                             // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTicketUpdate;                                    // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10CF[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TmpPriceList;                                      // 0x0030(0x0010)(Edit, BlueprintVisible)
	TArray<class UWidget*>                        CreditItemList;                                    // 0x0040(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D0[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D1[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0087(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D2[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D3[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D4[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D5[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D6[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Variable_2;                               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D7[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        K2Node_MakeArray_Array_1;                          // 0x00D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D8[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D9[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_3;                         // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10DA[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlatShop_CreditItem_C*                 K2Node_DynamicCast_AsFlat_Shop_Credit_Item;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10DB[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        K2Node_MakeArray_Array_2;                          // 0x0110(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                        K2Node_Select_Default_2;                           // 0x0120(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                        K2Node_Select_Default_3;                           // 0x0130(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(FlatShop_Credit_C_ChangeToTicketType) == 0x000008, "Wrong alignment on FlatShop_Credit_C_ChangeToTicketType");
static_assert(sizeof(FlatShop_Credit_C_ChangeToTicketType) == 0x000140, "Wrong size on FlatShop_Credit_C_ChangeToTicketType");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, TicketIdList) == 0x000000, "Member 'FlatShop_Credit_C_ChangeToTicketType::TicketIdList' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, TicketPriceList) == 0x000010, "Member 'FlatShop_Credit_C_ChangeToTicketType::TicketPriceList' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, IsDiff) == 0x000020, "Member 'FlatShop_Credit_C_ChangeToTicketType::IsDiff' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, TicketAmount) == 0x000024, "Member 'FlatShop_Credit_C_ChangeToTicketType::TicketAmount' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Price) == 0x000028, "Member 'FlatShop_Credit_C_ChangeToTicketType::Price' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, IsTicketUpdate) == 0x00002C, "Member 'FlatShop_Credit_C_ChangeToTicketType::IsTicketUpdate' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, TmpPriceList) == 0x000030, "Member 'FlatShop_Credit_C_ChangeToTicketType::TmpPriceList' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CreditItemList) == 0x000040, "Member 'FlatShop_Credit_C_ChangeToTicketType::CreditItemList' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_int_Array_Index_Variable) == 0x000054, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_int_Array_Index_Variable_1) == 0x000064, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Array_Get_Item) == 0x000068, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_GetTokenAmount_ReturnValue) == 0x000078, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Array_Length_ReturnValue_1) == 0x00007C, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Subtract_IntInt_ReturnValue) == 0x000080, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000084, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Greater_IntInt_ReturnValue) == 0x000085, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_bool_Variable) == 0x000086, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_BooleanOR_ReturnValue) == 0x000087, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_bool_Variable_1) == 0x000088, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_int_Variable) == 0x00008C, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000090, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000091, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000094, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Array_Get_Item_2) == 0x000098, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Less_IntInt_ReturnValue_1) == 0x00009C, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_BooleanOR_ReturnValue_1) == 0x00009D, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_int_Variable_1) == 0x0000A0, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_bool_Variable_2) == 0x0000A4, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_Select_Default) == 0x0000A8, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_MakeArray_Array) == 0x0000B0, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_int_Variable_2) == 0x0000C0, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Array_Length_ReturnValue_2) == 0x0000C4, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_bool_Variable_3) == 0x0000C8, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000C9, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_Select_Default_1) == 0x0000CC, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, Temp_int_Loop_Counter_Variable_1) == 0x0000E0, "Member 'FlatShop_Credit_C_ChangeToTicketType::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Less_IntInt_ReturnValue_3) == 0x0000E4, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000E8, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Array_Get_Item_3) == 0x0000F0, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Array_Length_ReturnValue_3) == 0x0000F8, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_DynamicCast_AsFlat_Shop_Credit_Item) == 0x000100, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_DynamicCast_AsFlat_Shop_Credit_Item' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_Less_IntInt_ReturnValue_4) == 0x000109, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00010A, "Member 'FlatShop_Credit_C_ChangeToTicketType::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_MakeArray_Array_2) == 0x000110, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_Select_Default_2) == 0x000120, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_ChangeToTicketType, K2Node_Select_Default_3) == 0x000130, "Member 'FlatShop_Credit_C_ChangeToTicketType::K2Node_Select_Default_3' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetSwitchType
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_Credit_C_SetSwitchType final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Credit_C_SetSwitchType) == 0x000004, "Wrong alignment on FlatShop_Credit_C_SetSwitchType");
static_assert(sizeof(FlatShop_Credit_C_SetSwitchType) == 0x000004, "Wrong size on FlatShop_Credit_C_SetSwitchType");
static_assert(offsetof(FlatShop_Credit_C_SetSwitchType, Param_Index) == 0x000000, "Member 'FlatShop_Credit_C_SetSwitchType::Param_Index' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetSeasonPoint
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_Credit_C_SetSeasonPoint final
{
public:
	int32                                         Param_SeasonPoint;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Credit_C_SetSeasonPoint) == 0x000004, "Wrong alignment on FlatShop_Credit_C_SetSeasonPoint");
static_assert(sizeof(FlatShop_Credit_C_SetSeasonPoint) == 0x000004, "Wrong size on FlatShop_Credit_C_SetSeasonPoint");
static_assert(offsetof(FlatShop_Credit_C_SetSeasonPoint, Param_SeasonPoint) == 0x000000, "Member 'FlatShop_Credit_C_SetSeasonPoint::Param_SeasonPoint' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetRoseOrb
// 0x0030 (0x0030 - 0x0000)
struct FlatShop_Credit_C_SetRoseOrb final
{
public:
	int32                                         Free;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Paid;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              FreeExpired;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              PaidExpired;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Total;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Paid;                                            // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_free;                                            // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExpiredDay_IsExpired;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExpiredDay_IsExpired_1;                 // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10DC[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Credit_C_SetRoseOrb) == 0x000008, "Wrong alignment on FlatShop_Credit_C_SetRoseOrb");
static_assert(sizeof(FlatShop_Credit_C_SetRoseOrb) == 0x000030, "Wrong size on FlatShop_Credit_C_SetRoseOrb");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, Free) == 0x000000, "Member 'FlatShop_Credit_C_SetRoseOrb::Free' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, Paid) == 0x000004, "Member 'FlatShop_Credit_C_SetRoseOrb::Paid' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, FreeExpired) == 0x000008, "Member 'FlatShop_Credit_C_SetRoseOrb::FreeExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, PaidExpired) == 0x000010, "Member 'FlatShop_Credit_C_SetRoseOrb::PaidExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, L_Total) == 0x000018, "Member 'FlatShop_Credit_C_SetRoseOrb::L_Total' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, L_Paid) == 0x00001C, "Member 'FlatShop_Credit_C_SetRoseOrb::L_Paid' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, L_free) == 0x000020, "Member 'FlatShop_Credit_C_SetRoseOrb::L_free' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, CallFunc_IsExpiredDay_IsExpired) == 0x000024, "Member 'FlatShop_Credit_C_SetRoseOrb::CallFunc_IsExpiredDay_IsExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, CallFunc_IsExpiredDay_IsExpired_1) == 0x000025, "Member 'FlatShop_Credit_C_SetRoseOrb::CallFunc_IsExpiredDay_IsExpired_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetRoseOrb, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'FlatShop_Credit_C_SetRoseOrb::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetBPPoint
// 0x0018 (0x0018 - 0x0000)
struct FlatShop_Credit_C_SetBPPoint final
{
public:
	int32                                         BPPoint;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10DD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetExpiredTimeBPPoint_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExpiredDay_IsExpired;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_SetBPPoint) == 0x000008, "Wrong alignment on FlatShop_Credit_C_SetBPPoint");
static_assert(sizeof(FlatShop_Credit_C_SetBPPoint) == 0x000018, "Wrong size on FlatShop_Credit_C_SetBPPoint");
static_assert(offsetof(FlatShop_Credit_C_SetBPPoint, BPPoint) == 0x000000, "Member 'FlatShop_Credit_C_SetBPPoint::BPPoint' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetBPPoint, CallFunc_GetExpiredTimeBPPoint_ReturnValue) == 0x000008, "Member 'FlatShop_Credit_C_SetBPPoint::CallFunc_GetExpiredTimeBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetBPPoint, CallFunc_IsExpiredDay_IsExpired) == 0x000010, "Member 'FlatShop_Credit_C_SetBPPoint::CallFunc_IsExpiredDay_IsExpired' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.Init
// 0x0060 (0x0060 - 0x0000)
struct FlatShop_Credit_C_Init final
{
public:
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10DE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCountryConfigMasterData             CallFunc_BP_GetCountryConfigMasterById_ReturnValue; // 0x0010(0x0048)()
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_Init) == 0x000008, "Wrong alignment on FlatShop_Credit_C_Init");
static_assert(sizeof(FlatShop_Credit_C_Init) == 0x000060, "Wrong size on FlatShop_Credit_C_Init");
static_assert(offsetof(FlatShop_Credit_C_Init, CallFunc_SelectInt_ReturnValue) == 0x000000, "Member 'FlatShop_Credit_C_Init::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Init, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'FlatShop_Credit_C_Init::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Init, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'FlatShop_Credit_C_Init::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Init, CallFunc_BP_GetCountryConfigMasterById_ReturnValue) == 0x000010, "Member 'FlatShop_Credit_C_Init::CallFunc_BP_GetCountryConfigMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_Init, CallFunc_Conv_IntToBool_ReturnValue) == 0x000058, "Member 'FlatShop_Credit_C_Init::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetProductCost
// 0x005C (0x005C - 0x0000)
struct FlatShop_Credit_C_SetProductCost final
{
public:
	int32                                         Param_Cost;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PaidOnly;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsLack;                                           // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          L_PaidOnly;                                        // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10DF[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_TotalCost;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpDiff;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbPaid_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E0[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue_1;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbPaid_ReturnValue_1;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPPoint_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E1[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E2[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E3[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_SetProductCost) == 0x000004, "Wrong alignment on FlatShop_Credit_C_SetProductCost");
static_assert(sizeof(FlatShop_Credit_C_SetProductCost) == 0x00005C, "Wrong size on FlatShop_Credit_C_SetProductCost");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, Param_Cost) == 0x000000, "Member 'FlatShop_Credit_C_SetProductCost::Param_Cost' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, PaidOnly) == 0x000004, "Member 'FlatShop_Credit_C_SetProductCost::PaidOnly' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, bIsLack) == 0x000005, "Member 'FlatShop_Credit_C_SetProductCost::bIsLack' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, L_PaidOnly) == 0x000006, "Member 'FlatShop_Credit_C_SetProductCost::L_PaidOnly' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, L_TotalCost) == 0x000008, "Member 'FlatShop_Credit_C_SetProductCost::L_TotalCost' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, TmpDiff) == 0x00000C, "Member 'FlatShop_Credit_C_SetProductCost::TmpDiff' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_GetRoseOrbPaid_ReturnValue) == 0x000010, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_GetRoseOrbPaid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000018, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001D, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Abs_Int_ReturnValue) == 0x000020, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Abs_Int_ReturnValue_1) == 0x000024, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Abs_Int_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_GetRoseOrbPaid_ReturnValue_1) == 0x000028, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_GetRoseOrbPaid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_GetBPPoint_ReturnValue) == 0x00002C, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_GetBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000030, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000034, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Less_IntInt_ReturnValue_1) == 0x000038, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Less_IntInt_ReturnValue_2) == 0x000039, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_GetRoseOrbFree_ReturnValue) == 0x00003C, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_GetRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Subtract_IntInt_ReturnValue_4) == 0x000040, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Subtract_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_Multiply_IntInt_ReturnValue) == 0x000044, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_SelectInt_ReturnValue) == 0x00004C, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000050, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, CallFunc_SelectInt_ReturnValue_1) == 0x000054, "Member 'FlatShop_Credit_C_SetProductCost::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_SetProductCost, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'FlatShop_Credit_C_SetProductCost::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.UpdateProductCostByCoupon
// 0x0028 (0x0028 - 0x0000)
struct FlatShop_Credit_C_UpdateProductCostByCoupon final
{
public:
	int32                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PaidOnly;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsLack;                                            // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E4[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_FTrunc64_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetProductCost_bIsLack;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_UpdateProductCostByCoupon) == 0x000008, "Wrong alignment on FlatShop_Credit_C_UpdateProductCostByCoupon");
static_assert(sizeof(FlatShop_Credit_C_UpdateProductCostByCoupon) == 0x000028, "Wrong size on FlatShop_Credit_C_UpdateProductCostByCoupon");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, Rate) == 0x000000, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::Rate' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, PaidOnly) == 0x000004, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::PaidOnly' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, IsLack) == 0x000005, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::IsLack' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000010, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000014, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, CallFunc_FTrunc64_ReturnValue) == 0x000018, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::CallFunc_FTrunc64_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000020, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostByCoupon, CallFunc_SetProductCost_bIsLack) == 0x000024, "Member 'FlatShop_Credit_C_UpdateProductCostByCoupon::CallFunc_SetProductCost_bIsLack' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.IsExpiredDay
// 0x0038 (0x0038 - 0x0000)
struct FlatShop_Credit_C_IsExpiredDay final
{
public:
	struct FDateTime                              InDateTime;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExpired;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E5[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours;                      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_IsExpiredDay) == 0x000008, "Wrong alignment on FlatShop_Credit_C_IsExpiredDay");
static_assert(sizeof(FlatShop_Credit_C_IsExpiredDay) == 0x000038, "Wrong size on FlatShop_Credit_C_IsExpiredDay");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, InDateTime) == 0x000000, "Member 'FlatShop_Credit_C_IsExpiredDay::InDateTime' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, IsExpired) == 0x000008, "Member 'FlatShop_Credit_C_IsExpiredDay::IsExpired' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_SBUtcNow_ReturnValue) == 0x000010, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000018, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_BreakTimespan_Days) == 0x000020, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_BreakTimespan_Days' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_BreakTimespan_Hours) == 0x000024, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_BreakTimespan_Hours' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_BreakTimespan_Minutes) == 0x000028, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_BreakTimespan_Minutes' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_BreakTimespan_Seconds) == 0x00002C, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_BreakTimespan_Seconds' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_BreakTimespan_Milliseconds) == 0x000030, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_BreakTimespan_Milliseconds' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_IsExpiredDay, CallFunc_Less_IntInt_ReturnValue_1) == 0x000035, "Member 'FlatShop_Credit_C_IsExpiredDay::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.SetSelectNum
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_Credit_C_SetSelectNum final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Credit_C_SetSelectNum) == 0x000004, "Wrong alignment on FlatShop_Credit_C_SetSelectNum");
static_assert(sizeof(FlatShop_Credit_C_SetSelectNum) == 0x000004, "Wrong size on FlatShop_Credit_C_SetSelectNum");
static_assert(offsetof(FlatShop_Credit_C_SetSelectNum, Param_Amount) == 0x000000, "Member 'FlatShop_Credit_C_SetSelectNum::Param_Amount' has a wrong offset!");

// Function FlatShop_Credit.FlatShop_Credit_C.UpdateProductCostBySeasonPass
// 0x0014 (0x0014 - 0x0000)
struct FlatShop_Credit_C_UpdateProductCostBySeasonPass final
{
public:
	int32                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PaidOnly;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsLack;                                            // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E6[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetProductCost_bIsLack;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Credit_C_UpdateProductCostBySeasonPass) == 0x000004, "Wrong alignment on FlatShop_Credit_C_UpdateProductCostBySeasonPass");
static_assert(sizeof(FlatShop_Credit_C_UpdateProductCostBySeasonPass) == 0x000014, "Wrong size on FlatShop_Credit_C_UpdateProductCostBySeasonPass");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostBySeasonPass, Rate) == 0x000000, "Member 'FlatShop_Credit_C_UpdateProductCostBySeasonPass::Rate' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostBySeasonPass, PaidOnly) == 0x000004, "Member 'FlatShop_Credit_C_UpdateProductCostBySeasonPass::PaidOnly' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostBySeasonPass, IsLack) == 0x000005, "Member 'FlatShop_Credit_C_UpdateProductCostBySeasonPass::IsLack' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostBySeasonPass, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'FlatShop_Credit_C_UpdateProductCostBySeasonPass::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostBySeasonPass, CallFunc_Clamp_ReturnValue) == 0x00000C, "Member 'FlatShop_Credit_C_UpdateProductCostBySeasonPass::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Credit_C_UpdateProductCostBySeasonPass, CallFunc_SetProductCost_bIsLack) == 0x000010, "Member 'FlatShop_Credit_C_UpdateProductCostBySeasonPass::CallFunc_SetProductCost_bIsLack' has a wrong offset!");

}

