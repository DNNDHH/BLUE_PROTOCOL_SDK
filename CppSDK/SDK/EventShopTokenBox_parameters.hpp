#pragma once

 

// Package: EventShopTokenBox

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function EventShopTokenBox.EventShopTokenBox_C.ExecuteUbergraph_EventShopTokenBox
// 0x0004 (0x0004 - 0x0000)
struct EventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox) == 0x000004, "Wrong alignment on EventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox");
static_assert(sizeof(EventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox) == 0x000004, "Wrong size on EventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox");
static_assert(offsetof(EventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox, EntryPoint) == 0x000000, "Member 'EventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox::EntryPoint' has a wrong offset!");

// Function EventShopTokenBox.EventShopTokenBox_C.Init
// 0x0010 (0x0010 - 0x0000)
struct EventShopTokenBox_C_Init final
{
public:
	TArray<class UEventShopTokenBox_Item_C*>      K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(EventShopTokenBox_C_Init) == 0x000008, "Wrong alignment on EventShopTokenBox_C_Init");
static_assert(sizeof(EventShopTokenBox_C_Init) == 0x000010, "Wrong size on EventShopTokenBox_C_Init");
static_assert(offsetof(EventShopTokenBox_C_Init, K2Node_MakeArray_Array) == 0x000000, "Member 'EventShopTokenBox_C_Init::K2Node_MakeArray_Array' has a wrong offset!");

// Function EventShopTokenBox.EventShopTokenBox_C.Set Token Num
// 0x0028 (0x0028 - 0x0000)
struct EventShopTokenBox_C_Set_Token_Num final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43CC[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CD[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopTokenBox_Item_C*              CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_C_Set_Token_Num) == 0x000008, "Wrong alignment on EventShopTokenBox_C_Set_Token_Num");
static_assert(sizeof(EventShopTokenBox_C_Set_Token_Num) == 0x000028, "Wrong size on EventShopTokenBox_C_Set_Token_Num");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, Num) == 0x000000, "Member 'EventShopTokenBox_C_Set_Token_Num::Num' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, Temp_byte_Variable) == 0x000004, "Member 'EventShopTokenBox_C_Set_Token_Num::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, Temp_int_Variable) == 0x000008, "Member 'EventShopTokenBox_C_Set_Token_Num::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'EventShopTokenBox_C_Set_Token_Num::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000D, "Member 'EventShopTokenBox_C_Set_Token_Num::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'EventShopTokenBox_C_Set_Token_Num::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, Temp_byte_Variable_1) == 0x000014, "Member 'EventShopTokenBox_C_Set_Token_Num::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, CallFunc_Array_Get_Item) == 0x000018, "Member 'EventShopTokenBox_C_Set_Token_Num::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, Temp_bool_Variable) == 0x000020, "Member 'EventShopTokenBox_C_Set_Token_Num::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_Set_Token_Num, K2Node_Select_Default) == 0x000021, "Member 'EventShopTokenBox_C_Set_Token_Num::K2Node_Select_Default' has a wrong offset!");

// Function EventShopTokenBox.EventShopTokenBox_C.SetTokenList
// 0x0040 (0x0040 - 0x0000)
struct EventShopTokenBox_C_SetTokenList final
{
public:
	TArray<int32>                                 TokenList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         L_LoopId;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ListNum;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43CE[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAmount_Amount;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopTokenBox_Item_C*              CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopTokenBox_C_SetTokenList) == 0x000008, "Wrong alignment on EventShopTokenBox_C_SetTokenList");
static_assert(sizeof(EventShopTokenBox_C_SetTokenList) == 0x000040, "Wrong size on EventShopTokenBox_C_SetTokenList");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, TokenList) == 0x000000, "Member 'EventShopTokenBox_C_SetTokenList::TokenList' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, L_LoopId) == 0x000010, "Member 'EventShopTokenBox_C_SetTokenList::L_LoopId' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, L_ListNum) == 0x000014, "Member 'EventShopTokenBox_C_SetTokenList::L_ListNum' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, Temp_int_Variable) == 0x000018, "Member 'EventShopTokenBox_C_SetTokenList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'EventShopTokenBox_C_SetTokenList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'EventShopTokenBox_C_SetTokenList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'EventShopTokenBox_C_SetTokenList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, CallFunc_Array_Get_Item) == 0x000028, "Member 'EventShopTokenBox_C_SetTokenList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, CallFunc_GetAmount_Amount) == 0x00002C, "Member 'EventShopTokenBox_C_SetTokenList::CallFunc_GetAmount_Amount' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'EventShopTokenBox_C_SetTokenList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenList, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'EventShopTokenBox_C_SetTokenList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopTokenBox.EventShopTokenBox_C.ResetAmount
// 0x0018 (0x0018 - 0x0000)
struct EventShopTokenBox_C_ResetAmount final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopTokenBox_Item_C*              CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43D0[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_C_ResetAmount) == 0x000008, "Wrong alignment on EventShopTokenBox_C_ResetAmount");
static_assert(sizeof(EventShopTokenBox_C_ResetAmount) == 0x000018, "Wrong size on EventShopTokenBox_C_ResetAmount");
static_assert(offsetof(EventShopTokenBox_C_ResetAmount, Temp_int_Variable) == 0x000000, "Member 'EventShopTokenBox_C_ResetAmount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_ResetAmount, CallFunc_Array_Get_Item) == 0x000008, "Member 'EventShopTokenBox_C_ResetAmount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_ResetAmount, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'EventShopTokenBox_C_ResetAmount::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_ResetAmount, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'EventShopTokenBox_C_ResetAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopTokenBox.EventShopTokenBox_C.SetTokenAmount
// 0x0018 (0x0018 - 0x0000)
struct EventShopTokenBox_C_SetTokenAmount final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43D1[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopTokenBox_Item_C*              CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_C_SetTokenAmount) == 0x000008, "Wrong alignment on EventShopTokenBox_C_SetTokenAmount");
static_assert(sizeof(EventShopTokenBox_C_SetTokenAmount) == 0x000018, "Wrong size on EventShopTokenBox_C_SetTokenAmount");
static_assert(offsetof(EventShopTokenBox_C_SetTokenAmount, TokenID) == 0x000000, "Member 'EventShopTokenBox_C_SetTokenAmount::TokenID' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenAmount, Amount) == 0x000004, "Member 'EventShopTokenBox_C_SetTokenAmount::Amount' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenAmount, CallFunc_Array_Find_ReturnValue) == 0x000008, "Member 'EventShopTokenBox_C_SetTokenAmount::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_SetTokenAmount, CallFunc_Array_Get_Item) == 0x000010, "Member 'EventShopTokenBox_C_SetTokenAmount::CallFunc_Array_Get_Item' has a wrong offset!");

// Function EventShopTokenBox.EventShopTokenBox_C.GetAmount
// 0x0014 (0x0014 - 0x0000)
struct EventShopTokenBox_C_GetAmount final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopTokenBox_C_GetAmount) == 0x000004, "Wrong alignment on EventShopTokenBox_C_GetAmount");
static_assert(sizeof(EventShopTokenBox_C_GetAmount) == 0x000014, "Wrong size on EventShopTokenBox_C_GetAmount");
static_assert(offsetof(EventShopTokenBox_C_GetAmount, TokenID) == 0x000000, "Member 'EventShopTokenBox_C_GetAmount::TokenID' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_GetAmount, Amount) == 0x000004, "Member 'EventShopTokenBox_C_GetAmount::Amount' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_GetAmount, CallFunc_GetMoney_ReturnValue) == 0x000008, "Member 'EventShopTokenBox_C_GetAmount::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_GetAmount, CallFunc_GetTokenAmount_ReturnValue) == 0x00000C, "Member 'EventShopTokenBox_C_GetAmount::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_GetAmount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'EventShopTokenBox_C_GetAmount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function EventShopTokenBox.EventShopTokenBox_C.CheckCostOver
// 0x0010 (0x0010 - 0x0000)
struct EventShopTokenBox_C_CheckCostOver final
{
public:
	int32                                         ListId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopTokenBox_Item_C*              CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_C_CheckCostOver) == 0x000008, "Wrong alignment on EventShopTokenBox_C_CheckCostOver");
static_assert(sizeof(EventShopTokenBox_C_CheckCostOver) == 0x000010, "Wrong size on EventShopTokenBox_C_CheckCostOver");
static_assert(offsetof(EventShopTokenBox_C_CheckCostOver, ListId) == 0x000000, "Member 'EventShopTokenBox_C_CheckCostOver::ListId' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_CheckCostOver, Amount) == 0x000004, "Member 'EventShopTokenBox_C_CheckCostOver::Amount' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_C_CheckCostOver, CallFunc_Array_Get_Item) == 0x000008, "Member 'EventShopTokenBox_C_CheckCostOver::CallFunc_Array_Get_Item' has a wrong offset!");

}

