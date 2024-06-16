#pragma once

 

// Package: Effect_OtherStock

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Effect_OtherStock.Effect_OtherStock_C.ExecuteUbergraph_Effect_OtherStock
// 0x0090 (0x0090 - 0x0000)
struct Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A99[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Buff;                           // 0x0008(0x0018)()
	class FText                                   K2Node_CustomEvent_Item;                           // 0x0020(0x0018)()
	class FText                                   K2Node_CustomEvent_Amount;                         // 0x0038(0x0018)()
	class FText                                   K2Node_CustomEvent_Value;                          // 0x0050(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
};
static_assert(alignof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock) == 0x000008, "Wrong alignment on Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock");
static_assert(sizeof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock) == 0x000090, "Wrong size on Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock");
static_assert(offsetof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock, EntryPoint) == 0x000000, "Member 'Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock::EntryPoint' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock, K2Node_CustomEvent_Buff) == 0x000008, "Member 'Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock::K2Node_CustomEvent_Buff' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock, K2Node_CustomEvent_Item) == 0x000020, "Member 'Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock, K2Node_CustomEvent_Amount) == 0x000038, "Member 'Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock, K2Node_CustomEvent_Value) == 0x000050, "Member 'Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'Effect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function Effect_OtherStock.Effect_OtherStock_C.NotActiveData
// 0x0060 (0x0060 - 0x0000)
struct Effect_OtherStock_C_NotActiveData final
{
public:
	class FText                                   Buff;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Item;                                              // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Amount;                                            // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Value;                                             // 0x0048(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Effect_OtherStock_C_NotActiveData) == 0x000008, "Wrong alignment on Effect_OtherStock_C_NotActiveData");
static_assert(sizeof(Effect_OtherStock_C_NotActiveData) == 0x000060, "Wrong size on Effect_OtherStock_C_NotActiveData");
static_assert(offsetof(Effect_OtherStock_C_NotActiveData, Buff) == 0x000000, "Member 'Effect_OtherStock_C_NotActiveData::Buff' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_NotActiveData, Item) == 0x000018, "Member 'Effect_OtherStock_C_NotActiveData::Item' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_NotActiveData, Amount) == 0x000030, "Member 'Effect_OtherStock_C_NotActiveData::Amount' has a wrong offset!");
static_assert(offsetof(Effect_OtherStock_C_NotActiveData, Value) == 0x000048, "Member 'Effect_OtherStock_C_NotActiveData::Value' has a wrong offset!");

// Function Effect_OtherStock.Effect_OtherStock_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Effect_OtherStock_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_OtherStock_C_PreConstruct) == 0x000001, "Wrong alignment on Effect_OtherStock_C_PreConstruct");
static_assert(sizeof(Effect_OtherStock_C_PreConstruct) == 0x000001, "Wrong size on Effect_OtherStock_C_PreConstruct");
static_assert(offsetof(Effect_OtherStock_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Effect_OtherStock_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

