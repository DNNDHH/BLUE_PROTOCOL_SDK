#pragma once

 

// Package: History_Item

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function History_Item.History_Item_C.SetData
// 0x0058 (0x0058 - 0x0000)
struct History_Item_C_SetData final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCashHistory                         Data;                                              // 0x0008(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(History_Item_C_SetData) == 0x000008, "Wrong alignment on History_Item_C_SetData");
static_assert(sizeof(History_Item_C_SetData) == 0x000058, "Wrong size on History_Item_C_SetData");
static_assert(offsetof(History_Item_C_SetData, Type) == 0x000000, "Member 'History_Item_C_SetData::Type' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetData, Data) == 0x000008, "Member 'History_Item_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetData, CallFunc_SetDateTime_ReturnValue) == 0x000050, "Member 'History_Item_C_SetData::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function History_Item.History_Item_C.SetAmountNum
// 0x0060 (0x0060 - 0x0000)
struct History_Item_C_SetAmountNum final
{
public:
	int32                                         Paid;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Free;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_free;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Paid;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetAmountCode_Text;                       // 0x0010(0x0018)()
	class FText                                   CallFunc_SetAmountCode_Text_1;                     // 0x0028(0x0018)()
	class FText                                   CallFunc_SetAmountCode_Text_2;                     // 0x0040(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(History_Item_C_SetAmountNum) == 0x000008, "Wrong alignment on History_Item_C_SetAmountNum");
static_assert(sizeof(History_Item_C_SetAmountNum) == 0x000060, "Wrong size on History_Item_C_SetAmountNum");
static_assert(offsetof(History_Item_C_SetAmountNum, Paid) == 0x000000, "Member 'History_Item_C_SetAmountNum::Paid' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountNum, Free) == 0x000004, "Member 'History_Item_C_SetAmountNum::Free' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountNum, L_free) == 0x000008, "Member 'History_Item_C_SetAmountNum::L_free' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountNum, L_Paid) == 0x00000C, "Member 'History_Item_C_SetAmountNum::L_Paid' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountNum, CallFunc_SetAmountCode_Text) == 0x000010, "Member 'History_Item_C_SetAmountNum::CallFunc_SetAmountCode_Text' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountNum, CallFunc_SetAmountCode_Text_1) == 0x000028, "Member 'History_Item_C_SetAmountNum::CallFunc_SetAmountCode_Text_1' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountNum, CallFunc_SetAmountCode_Text_2) == 0x000040, "Member 'History_Item_C_SetAmountNum::CallFunc_SetAmountCode_Text_2' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountNum, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'History_Item_C_SetAmountNum::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function History_Item.History_Item_C.SetAmountCode
// 0x0090 (0x0090 - 0x0000)
struct History_Item_C_SetAmountCode final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45BF[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0040(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
};
static_assert(alignof(History_Item_C_SetAmountCode) == 0x000008, "Wrong alignment on History_Item_C_SetAmountCode");
static_assert(sizeof(History_Item_C_SetAmountCode) == 0x000090, "Wrong size on History_Item_C_SetAmountCode");
static_assert(offsetof(History_Item_C_SetAmountCode, Num) == 0x000000, "Member 'History_Item_C_SetAmountCode::Num' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountCode, Text) == 0x000008, "Member 'History_Item_C_SetAmountCode::Text' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountCode, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'History_Item_C_SetAmountCode::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountCode, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'History_Item_C_SetAmountCode::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountCode, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000040, "Member 'History_Item_C_SetAmountCode::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountCode, CallFunc_Conv_TextToString_ReturnValue) == 0x000058, "Member 'History_Item_C_SetAmountCode::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountCode, CallFunc_Concat_StrStr_ReturnValue) == 0x000068, "Member 'History_Item_C_SetAmountCode::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetAmountCode, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'History_Item_C_SetAmountCode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function History_Item.History_Item_C.SetActionTypeByTextId
// 0x0030 (0x0030 - 0x0000)
struct History_Item_C_SetActionTypeByTextId final
{
public:
	struct FSBTextTableHash                       TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterHistoryActionTypeText_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(History_Item_C_SetActionTypeByTextId) == 0x000008, "Wrong alignment on History_Item_C_SetActionTypeByTextId");
static_assert(sizeof(History_Item_C_SetActionTypeByTextId) == 0x000030, "Wrong size on History_Item_C_SetActionTypeByTextId");
static_assert(offsetof(History_Item_C_SetActionTypeByTextId, TextId) == 0x000000, "Member 'History_Item_C_SetActionTypeByTextId::TextId' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetActionTypeByTextId, CallFunc_GetMasterHistoryActionTypeText_ReturnValue) == 0x000008, "Member 'History_Item_C_SetActionTypeByTextId::CallFunc_GetMasterHistoryActionTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetActionTypeByTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'History_Item_C_SetActionTypeByTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function History_Item.History_Item_C.SetReasonText
// 0x0028 (0x0028 - 0x0000)
struct History_Item_C_SetReasonText final
{
public:
	class FString                                 Reason;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(History_Item_C_SetReasonText) == 0x000008, "Wrong alignment on History_Item_C_SetReasonText");
static_assert(sizeof(History_Item_C_SetReasonText) == 0x000028, "Wrong size on History_Item_C_SetReasonText");
static_assert(offsetof(History_Item_C_SetReasonText, Reason) == 0x000000, "Member 'History_Item_C_SetReasonText::Reason' has a wrong offset!");
static_assert(offsetof(History_Item_C_SetReasonText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'History_Item_C_SetReasonText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

