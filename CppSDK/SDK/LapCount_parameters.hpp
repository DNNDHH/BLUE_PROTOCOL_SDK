#pragma once

 

// Package: LapCount

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LapCount.LapCount_C.ExecuteUbergraph_LapCount
// 0x0008 (0x0008 - 0x0000)
struct LapCount_C_ExecuteUbergraph_LapCount final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LapCount_C_ExecuteUbergraph_LapCount) == 0x000004, "Wrong alignment on LapCount_C_ExecuteUbergraph_LapCount");
static_assert(sizeof(LapCount_C_ExecuteUbergraph_LapCount) == 0x000008, "Wrong size on LapCount_C_ExecuteUbergraph_LapCount");
static_assert(offsetof(LapCount_C_ExecuteUbergraph_LapCount, EntryPoint) == 0x000000, "Member 'LapCount_C_ExecuteUbergraph_LapCount::EntryPoint' has a wrong offset!");
static_assert(offsetof(LapCount_C_ExecuteUbergraph_LapCount, K2Node_Event_IsDesignTime) == 0x000004, "Member 'LapCount_C_ExecuteUbergraph_LapCount::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function LapCount.LapCount_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LapCount_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LapCount_C_PreConstruct) == 0x000001, "Wrong alignment on LapCount_C_PreConstruct");
static_assert(sizeof(LapCount_C_PreConstruct) == 0x000001, "Wrong size on LapCount_C_PreConstruct");
static_assert(offsetof(LapCount_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LapCount_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LapCount.LapCount_C.SetLapCount
// 0x0030 (0x0030 - 0x0000)
struct LapCount_C_SetLapCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9571[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9572[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoopStepUpGasha_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LapCount_C_SetLapCount) == 0x000008, "Wrong alignment on LapCount_C_SetLapCount");
static_assert(sizeof(LapCount_C_SetLapCount) == 0x000030, "Wrong size on LapCount_C_SetLapCount");
static_assert(offsetof(LapCount_C_SetLapCount, Count) == 0x000000, "Member 'LapCount_C_SetLapCount::Count' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'LapCount_C_SetLapCount::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, Temp_bool_Variable) == 0x000005, "Member 'LapCount_C_SetLapCount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'LapCount_C_SetLapCount::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LapCount_C_SetLapCount::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LapCount_C_SetLapCount::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LapCount_C_SetLapCount::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, CallFunc_GetGashaComponent_ReturnValue) == 0x000020, "Member 'LapCount_C_SetLapCount::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, CallFunc_IsLoopStepUpGasha_ReturnValue) == 0x000028, "Member 'LapCount_C_SetLapCount::CallFunc_IsLoopStepUpGasha_ReturnValue' has a wrong offset!");
static_assert(offsetof(LapCount_C_SetLapCount, K2Node_Select_Default) == 0x000029, "Member 'LapCount_C_SetLapCount::K2Node_Select_Default' has a wrong offset!");

}

