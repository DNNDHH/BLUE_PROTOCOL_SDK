#pragma once

 

// Package: KeyGuide_Item

#include "Basic.hpp"


namespace SDK::Params
{

// Function KeyGuide_Item.KeyGuide_Item_C.ExecuteUbergraph_KeyGuide_Item
// 0x0008 (0x0008 - 0x0000)
struct KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item) == 0x000004, "Wrong alignment on KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item");
static_assert(sizeof(KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item) == 0x000008, "Wrong size on KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item");
static_assert(offsetof(KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item, EntryPoint) == 0x000000, "Member 'KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item, K2Node_Event_IsDesignTime) == 0x000004, "Member 'KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function KeyGuide_Item.KeyGuide_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeyGuide_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_Item_C_PreConstruct) == 0x000001, "Wrong alignment on KeyGuide_Item_C_PreConstruct");
static_assert(sizeof(KeyGuide_Item_C_PreConstruct) == 0x000001, "Wrong size on KeyGuide_Item_C_PreConstruct");
static_assert(offsetof(KeyGuide_Item_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'KeyGuide_Item_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

