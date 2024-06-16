#pragma once

 

// Package: StepTextItem_Gasha

#include "Basic.hpp"


namespace SDK::Params
{

// Function StepTextItem_Gasha.StepTextItem_Gasha_C.ExecuteUbergraph_StepTextItem_Gasha
// 0x0008 (0x0008 - 0x0000)
struct StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha) == 0x000004, "Wrong alignment on StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha");
static_assert(sizeof(StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha) == 0x000008, "Wrong size on StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha");
static_assert(offsetof(StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha, EntryPoint) == 0x000000, "Member 'StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha::EntryPoint' has a wrong offset!");
static_assert(offsetof(StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha, K2Node_Event_IsDesignTime) == 0x000004, "Member 'StepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function StepTextItem_Gasha.StepTextItem_Gasha_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct StepTextItem_Gasha_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StepTextItem_Gasha_C_PreConstruct) == 0x000001, "Wrong alignment on StepTextItem_Gasha_C_PreConstruct");
static_assert(sizeof(StepTextItem_Gasha_C_PreConstruct) == 0x000001, "Wrong size on StepTextItem_Gasha_C_PreConstruct");
static_assert(offsetof(StepTextItem_Gasha_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'StepTextItem_Gasha_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function StepTextItem_Gasha.StepTextItem_Gasha_C.SetStep
// 0x0058 (0x0058 - 0x0000)
struct StepTextItem_Gasha_C_SetStep final
{
public:
	int32                                         Now;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94D5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0040(0x0018)()
};
static_assert(alignof(StepTextItem_Gasha_C_SetStep) == 0x000008, "Wrong alignment on StepTextItem_Gasha_C_SetStep");
static_assert(sizeof(StepTextItem_Gasha_C_SetStep) == 0x000058, "Wrong size on StepTextItem_Gasha_C_SetStep");
static_assert(offsetof(StepTextItem_Gasha_C_SetStep, Now) == 0x000000, "Member 'StepTextItem_Gasha_C_SetStep::Now' has a wrong offset!");
static_assert(offsetof(StepTextItem_Gasha_C_SetStep, Max) == 0x000004, "Member 'StepTextItem_Gasha_C_SetStep::Max' has a wrong offset!");
static_assert(offsetof(StepTextItem_Gasha_C_SetStep, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'StepTextItem_Gasha_C_SetStep::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepTextItem_Gasha_C_SetStep, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'StepTextItem_Gasha_C_SetStep::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepTextItem_Gasha_C_SetStep, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'StepTextItem_Gasha_C_SetStep::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StepTextItem_Gasha_C_SetStep, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000040, "Member 'StepTextItem_Gasha_C_SetStep::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");

}

