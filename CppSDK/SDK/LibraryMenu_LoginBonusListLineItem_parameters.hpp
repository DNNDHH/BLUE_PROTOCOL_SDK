#pragma once

 

// Package: LibraryMenu_LoginBonusListLineItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.ItemClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature, ID) == 0x000000, "Member 'LibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature::ID' has a wrong offset!");

// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem");
static_assert(sizeof(LibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem) == 0x000004, "Wrong size on LibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem, EntryPoint) == 0x000000, "Member 'LibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem::EntryPoint' has a wrong offset!");

// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.SetData
// 0x0050 (0x0050 - 0x0000)
struct LibraryMenu_LoginBonusListLineItem_C_SetData final
{
public:
	struct FSBLoginBonusWindowDayData             Data;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          StumpOn;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DED[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusListLineItem_C_SetData) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusListLineItem_C_SetData");
static_assert(sizeof(LibraryMenu_LoginBonusListLineItem_C_SetData) == 0x000050, "Wrong size on LibraryMenu_LoginBonusListLineItem_C_SetData");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetData, Data) == 0x000000, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetData, StumpOn) == 0x000018, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetData::StumpOn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetData, CallFunc_Conv_IntToByte_ReturnValue) == 0x000048, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetData, CallFunc_GetValidValue_ReturnValue) == 0x000049, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetData, K2Node_SwitchEnum_CmpSuccess) == 0x00004A, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.SetMouseClickValue
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue");
static_assert(sizeof(LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue) == 0x000008, "Wrong size on LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue, Value) == 0x000000, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue::Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000004, "Member 'LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

