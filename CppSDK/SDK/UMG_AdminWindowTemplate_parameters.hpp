#pragma once

 

// Package: UMG_AdminWindowTemplate

#include "Basic.hpp"


namespace SDK::Params
{

// Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.ExecuteUbergraph_UMG_AdminWindowTemplate
// 0x0010 (0x0010 - 0x0000)
struct UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5187[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_CustomEvent_OwnerWidget;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate) == 0x000008, "Wrong alignment on UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate");
static_assert(sizeof(UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate) == 0x000010, "Wrong size on UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate");
static_assert(offsetof(UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate, EntryPoint) == 0x000000, "Member 'UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate, K2Node_CustomEvent_OwnerWidget) == 0x000008, "Member 'UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate::K2Node_CustomEvent_OwnerWidget' has a wrong offset!");

// Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.Init
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminWindowTemplate_C_Init final
{
public:
	class UUserWidget*                            Param_OwnerWidget;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminWindowTemplate_C_Init) == 0x000008, "Wrong alignment on UMG_AdminWindowTemplate_C_Init");
static_assert(sizeof(UMG_AdminWindowTemplate_C_Init) == 0x000008, "Wrong size on UMG_AdminWindowTemplate_C_Init");
static_assert(offsetof(UMG_AdminWindowTemplate_C_Init, Param_OwnerWidget) == 0x000000, "Member 'UMG_AdminWindowTemplate_C_Init::Param_OwnerWidget' has a wrong offset!");

// Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_AdminWindowTemplate_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_AdminWindowTemplate_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_AdminWindowTemplate_C_PreConstruct");
static_assert(sizeof(UMG_AdminWindowTemplate_C_PreConstruct) == 0x000001, "Wrong size on UMG_AdminWindowTemplate_C_PreConstruct");
static_assert(offsetof(UMG_AdminWindowTemplate_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_AdminWindowTemplate_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

