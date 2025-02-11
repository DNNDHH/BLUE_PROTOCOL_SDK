#pragma once

 

// Package: QuestDetail_DetailItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.ExecuteUbergraph_QuestDetail_DetailItem
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem) == 0x000004, "Wrong alignment on QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem");
static_assert(sizeof(QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem) == 0x000008, "Wrong size on QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem");
static_assert(offsetof(QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem, EntryPoint) == 0x000000, "Member 'QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem, K2Node_Event_IsDesignTime) == 0x000004, "Member 'QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000005, "Member 'QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct QuestDetail_DetailItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_DetailItem_C_PreConstruct) == 0x000001, "Wrong alignment on QuestDetail_DetailItem_C_PreConstruct");
static_assert(sizeof(QuestDetail_DetailItem_C_PreConstruct) == 0x000001, "Wrong size on QuestDetail_DetailItem_C_PreConstruct");
static_assert(offsetof(QuestDetail_DetailItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'QuestDetail_DetailItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.SetTitle
// 0x0004 (0x0004 - 0x0000)
struct QuestDetail_DetailItem_C_SetTitle final
{
public:
	int32                                         InTitleText;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_DetailItem_C_SetTitle) == 0x000004, "Wrong alignment on QuestDetail_DetailItem_C_SetTitle");
static_assert(sizeof(QuestDetail_DetailItem_C_SetTitle) == 0x000004, "Wrong size on QuestDetail_DetailItem_C_SetTitle");
static_assert(offsetof(QuestDetail_DetailItem_C_SetTitle, InTitleText) == 0x000000, "Member 'QuestDetail_DetailItem_C_SetTitle::InTitleText' has a wrong offset!");

// Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.SetTextContent
// 0x0018 (0x0018 - 0x0000)
struct QuestDetail_DetailItem_C_SetTextContent final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(QuestDetail_DetailItem_C_SetTextContent) == 0x000008, "Wrong alignment on QuestDetail_DetailItem_C_SetTextContent");
static_assert(sizeof(QuestDetail_DetailItem_C_SetTextContent) == 0x000018, "Wrong size on QuestDetail_DetailItem_C_SetTextContent");
static_assert(offsetof(QuestDetail_DetailItem_C_SetTextContent, InText) == 0x000000, "Member 'QuestDetail_DetailItem_C_SetTextContent::InText' has a wrong offset!");

}

