#pragma once

 

// Package: LibraryMenu_MonsterAreaListItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.OnSelect__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature");
static_assert(sizeof(LibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature, Value) == 0x000000, "Member 'LibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature::Value' has a wrong offset!");

// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.ExecuteUbergraph_LibraryMenu_MonsterAreaListItem
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem) == 0x000004, "Wrong alignment on LibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem");
static_assert(sizeof(LibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem) == 0x000004, "Wrong size on LibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem, EntryPoint) == 0x000000, "Member 'LibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem::EntryPoint' has a wrong offset!");

// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetText
// 0x0028 (0x0028 - 0x0000)
struct LibraryMenu_MonsterAreaListItem_C_SetText final
{
public:
	class FString                                 AreaNameText;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(LibraryMenu_MonsterAreaListItem_C_SetText) == 0x000008, "Wrong alignment on LibraryMenu_MonsterAreaListItem_C_SetText");
static_assert(sizeof(LibraryMenu_MonsterAreaListItem_C_SetText) == 0x000028, "Wrong size on LibraryMenu_MonsterAreaListItem_C_SetText");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_SetText, AreaNameText) == 0x000000, "Member 'LibraryMenu_MonsterAreaListItem_C_SetText::AreaNameText' has a wrong offset!");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'LibraryMenu_MonsterAreaListItem_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetNewIcon
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_MonsterAreaListItem_C_SetNewIcon final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_MonsterAreaListItem_C_SetNewIcon) == 0x000001, "Wrong alignment on LibraryMenu_MonsterAreaListItem_C_SetNewIcon");
static_assert(sizeof(LibraryMenu_MonsterAreaListItem_C_SetNewIcon) == 0x000001, "Wrong size on LibraryMenu_MonsterAreaListItem_C_SetNewIcon");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_SetNewIcon, Visible) == 0x000000, "Member 'LibraryMenu_MonsterAreaListItem_C_SetNewIcon::Visible' has a wrong offset!");

// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetTimeIcon
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_MonsterAreaListItem_C_SetTimeIcon final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CE5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_MonsterAreaListItem_C_SetTimeIcon) == 0x000004, "Wrong alignment on LibraryMenu_MonsterAreaListItem_C_SetTimeIcon");
static_assert(sizeof(LibraryMenu_MonsterAreaListItem_C_SetTimeIcon) == 0x00000C, "Wrong size on LibraryMenu_MonsterAreaListItem_C_SetTimeIcon");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_SetTimeIcon, Type) == 0x000000, "Member 'LibraryMenu_MonsterAreaListItem_C_SetTimeIcon::Type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_SetTimeIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'LibraryMenu_MonsterAreaListItem_C_SetTimeIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_SetTimeIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'LibraryMenu_MonsterAreaListItem_C_SetTimeIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetSelectColor
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_MonsterAreaListItem_C_SetSelectColor final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_MonsterAreaListItem_C_SetSelectColor) == 0x000001, "Wrong alignment on LibraryMenu_MonsterAreaListItem_C_SetSelectColor");
static_assert(sizeof(LibraryMenu_MonsterAreaListItem_C_SetSelectColor) == 0x000001, "Wrong size on LibraryMenu_MonsterAreaListItem_C_SetSelectColor");
static_assert(offsetof(LibraryMenu_MonsterAreaListItem_C_SetSelectColor, Selected) == 0x000000, "Member 'LibraryMenu_MonsterAreaListItem_C_SetSelectColor::Selected' has a wrong offset!");

}

