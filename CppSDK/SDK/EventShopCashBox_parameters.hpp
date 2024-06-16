#pragma once

 

// Package: EventShopCashBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EventShopCashBox.EventShopCashBox_C.ExecuteUbergraph_EventShopCashBox
// 0x0004 (0x0004 - 0x0000)
struct EventShopCashBox_C_ExecuteUbergraph_EventShopCashBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCashBox_C_ExecuteUbergraph_EventShopCashBox) == 0x000004, "Wrong alignment on EventShopCashBox_C_ExecuteUbergraph_EventShopCashBox");
static_assert(sizeof(EventShopCashBox_C_ExecuteUbergraph_EventShopCashBox) == 0x000004, "Wrong size on EventShopCashBox_C_ExecuteUbergraph_EventShopCashBox");
static_assert(offsetof(EventShopCashBox_C_ExecuteUbergraph_EventShopCashBox, EntryPoint) == 0x000000, "Member 'EventShopCashBox_C_ExecuteUbergraph_EventShopCashBox::EntryPoint' has a wrong offset!");

// Function EventShopCashBox.EventShopCashBox_C.Init
// 0x0010 (0x0010 - 0x0000)
struct EventShopCashBox_C_Init final
{
public:
	TArray<class UEventShopCashBox_Item_C*>       K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(EventShopCashBox_C_Init) == 0x000008, "Wrong alignment on EventShopCashBox_C_Init");
static_assert(sizeof(EventShopCashBox_C_Init) == 0x000010, "Wrong size on EventShopCashBox_C_Init");
static_assert(offsetof(EventShopCashBox_C_Init, K2Node_MakeArray_Array) == 0x000000, "Member 'EventShopCashBox_C_Init::K2Node_MakeArray_Array' has a wrong offset!");

// Function EventShopCashBox.EventShopCashBox_C.SetTokenList
// 0x0038 (0x0038 - 0x0000)
struct EventShopCashBox_C_SetTokenList final
{
public:
	TArray<int32>                                 TokenList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         L_LoopId;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ListNum;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6574[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6575[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCashBox_Item_C*               CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCashBox_C_SetTokenList) == 0x000008, "Wrong alignment on EventShopCashBox_C_SetTokenList");
static_assert(sizeof(EventShopCashBox_C_SetTokenList) == 0x000038, "Wrong size on EventShopCashBox_C_SetTokenList");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, TokenList) == 0x000000, "Member 'EventShopCashBox_C_SetTokenList::TokenList' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, L_LoopId) == 0x000010, "Member 'EventShopCashBox_C_SetTokenList::L_LoopId' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, L_ListNum) == 0x000014, "Member 'EventShopCashBox_C_SetTokenList::L_ListNum' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, Temp_int_Variable) == 0x000018, "Member 'EventShopCashBox_C_SetTokenList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'EventShopCashBox_C_SetTokenList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'EventShopCashBox_C_SetTokenList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'EventShopCashBox_C_SetTokenList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, CallFunc_Array_Get_Item) == 0x000028, "Member 'EventShopCashBox_C_SetTokenList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'EventShopCashBox_C_SetTokenList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenList, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'EventShopCashBox_C_SetTokenList::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function EventShopCashBox.EventShopCashBox_C.SetTokenAmount
// 0x0030 (0x0030 - 0x0000)
struct EventShopCashBox_C_SetTokenAmount final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6576[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAmount_Amount;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6577[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6578[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCashBox_Item_C*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCashBox_C_SetTokenAmount) == 0x000008, "Wrong alignment on EventShopCashBox_C_SetTokenAmount");
static_assert(sizeof(EventShopCashBox_C_SetTokenAmount) == 0x000030, "Wrong size on EventShopCashBox_C_SetTokenAmount");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, TokenID) == 0x000000, "Member 'EventShopCashBox_C_SetTokenAmount::TokenID' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, Price) == 0x000004, "Member 'EventShopCashBox_C_SetTokenAmount::Price' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'EventShopCashBox_C_SetTokenAmount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, CallFunc_GetAmount_Amount) == 0x00000C, "Member 'EventShopCashBox_C_SetTokenAmount::CallFunc_GetAmount_Amount' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000010, "Member 'EventShopCashBox_C_SetTokenAmount::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, CallFunc_Array_Find_ReturnValue) == 0x000014, "Member 'EventShopCashBox_C_SetTokenAmount::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000018, "Member 'EventShopCashBox_C_SetTokenAmount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, CallFunc_Array_Get_Item) == 0x000020, "Member 'EventShopCashBox_C_SetTokenAmount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetTokenAmount, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'EventShopCashBox_C_SetTokenAmount::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function EventShopCashBox.EventShopCashBox_C.ResetAmount
// 0x0018 (0x0018 - 0x0000)
struct EventShopCashBox_C_ResetAmount final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6579[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopCashBox_Item_C*               CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_657A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCashBox_C_ResetAmount) == 0x000008, "Wrong alignment on EventShopCashBox_C_ResetAmount");
static_assert(sizeof(EventShopCashBox_C_ResetAmount) == 0x000018, "Wrong size on EventShopCashBox_C_ResetAmount");
static_assert(offsetof(EventShopCashBox_C_ResetAmount, Temp_int_Variable) == 0x000000, "Member 'EventShopCashBox_C_ResetAmount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_ResetAmount, CallFunc_Array_Get_Item) == 0x000008, "Member 'EventShopCashBox_C_ResetAmount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_ResetAmount, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'EventShopCashBox_C_ResetAmount::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_ResetAmount, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'EventShopCashBox_C_ResetAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopCashBox.EventShopCashBox_C.GetAmount
// 0x0014 (0x0014 - 0x0000)
struct EventShopCashBox_C_GetAmount final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCashBox_C_GetAmount) == 0x000004, "Wrong alignment on EventShopCashBox_C_GetAmount");
static_assert(sizeof(EventShopCashBox_C_GetAmount) == 0x000014, "Wrong size on EventShopCashBox_C_GetAmount");
static_assert(offsetof(EventShopCashBox_C_GetAmount, TokenID) == 0x000000, "Member 'EventShopCashBox_C_GetAmount::TokenID' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_GetAmount, Amount) == 0x000004, "Member 'EventShopCashBox_C_GetAmount::Amount' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_GetAmount, CallFunc_GetMoney_ReturnValue) == 0x000008, "Member 'EventShopCashBox_C_GetAmount::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_GetAmount, CallFunc_GetTokenAmount_ReturnValue) == 0x00000C, "Member 'EventShopCashBox_C_GetAmount::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_GetAmount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'EventShopCashBox_C_GetAmount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopCashBox.EventShopCashBox_C.SetShopType
// 0x0008 (0x0008 - 0x0000)
struct EventShopCashBox_C_SetShopType final
{
public:
	EShopType                                     ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_657B[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCashBox_C_SetShopType) == 0x000004, "Wrong alignment on EventShopCashBox_C_SetShopType");
static_assert(sizeof(EventShopCashBox_C_SetShopType) == 0x000008, "Wrong size on EventShopCashBox_C_SetShopType");
static_assert(offsetof(EventShopCashBox_C_SetShopType, ShopType) == 0x000000, "Member 'EventShopCashBox_C_SetShopType::ShopType' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetShopType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'EventShopCashBox_C_SetShopType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_SetShopType, CallFunc_SelectInt_ReturnValue) == 0x000004, "Member 'EventShopCashBox_C_SetShopType::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function EventShopCashBox.EventShopCashBox_C.UpdatePurchaseButton
// 0x0050 (0x0050 - 0x0000)
struct EventShopCashBox_C_UpdatePurchaseButton final
{
public:
	TArray<int32>                                 PriceList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         L_TotalCost;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_657C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 L_PriceList;                                       // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_657D[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAmount_Amount;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_657E[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCashBox_C_UpdatePurchaseButton) == 0x000008, "Wrong alignment on EventShopCashBox_C_UpdatePurchaseButton");
static_assert(sizeof(EventShopCashBox_C_UpdatePurchaseButton) == 0x000050, "Wrong size on EventShopCashBox_C_UpdatePurchaseButton");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, PriceList) == 0x000000, "Member 'EventShopCashBox_C_UpdatePurchaseButton::PriceList' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, L_TotalCost) == 0x000010, "Member 'EventShopCashBox_C_UpdatePurchaseButton::L_TotalCost' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, L_PriceList) == 0x000018, "Member 'EventShopCashBox_C_UpdatePurchaseButton::L_PriceList' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, Temp_int_Array_Index_Variable) == 0x000028, "Member 'EventShopCashBox_C_UpdatePurchaseButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, Temp_bool_True_if_break_was_hit_Variable) == 0x00002C, "Member 'EventShopCashBox_C_UpdatePurchaseButton::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_Greater_IntInt_ReturnValue) == 0x00002D, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_Not_PreBool_ReturnValue) == 0x00002E, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'EventShopCashBox_C_UpdatePurchaseButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_Array_Get_Item) == 0x000038, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_GetAmount_Amount) == 0x000040, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_GetAmount_Amount' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_Less_IntInt_ReturnValue_1) == 0x00004C, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_C_UpdatePurchaseButton, CallFunc_BooleanAND_ReturnValue) == 0x00004D, "Member 'EventShopCashBox_C_UpdatePurchaseButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function EventShopCashBox.EventShopCashBox_C.SetClickInputState
// 0x0001 (0x0001 - 0x0000)
struct EventShopCashBox_C_SetClickInputState final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCashBox_C_SetClickInputState) == 0x000001, "Wrong alignment on EventShopCashBox_C_SetClickInputState");
static_assert(sizeof(EventShopCashBox_C_SetClickInputState) == 0x000001, "Wrong size on EventShopCashBox_C_SetClickInputState");
static_assert(offsetof(EventShopCashBox_C_SetClickInputState, Enable) == 0x000000, "Member 'EventShopCashBox_C_SetClickInputState::Enable' has a wrong offset!");

}

