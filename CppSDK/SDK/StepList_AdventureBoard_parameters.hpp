#pragma once

 

// Package: StepList_AdventureBoard

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function StepList_AdventureBoard.StepList_AdventureBoard_C.CreateAdventureBoardCondition
// 0x0080 (0x0080 - 0x0000)
struct StepList_AdventureBoard_C_CreateAdventureBoardCondition final
{
public:
	struct FSBAdventureBoardCondition             ReturnValue;                                       // 0x0000(0x0038)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBAdventureBoardCondition             K2Node_MakeStruct_SBAdventureBoardCondition;       // 0x0048(0x0038)()
};
static_assert(alignof(StepList_AdventureBoard_C_CreateAdventureBoardCondition) == 0x000008, "Wrong alignment on StepList_AdventureBoard_C_CreateAdventureBoardCondition");
static_assert(sizeof(StepList_AdventureBoard_C_CreateAdventureBoardCondition) == 0x000080, "Wrong size on StepList_AdventureBoard_C_CreateAdventureBoardCondition");
static_assert(offsetof(StepList_AdventureBoard_C_CreateAdventureBoardCondition, ReturnValue) == 0x000000, "Member 'StepList_AdventureBoard_C_CreateAdventureBoardCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_AdventureBoard_C_CreateAdventureBoardCondition, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'StepList_AdventureBoard_C_CreateAdventureBoardCondition::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_AdventureBoard_C_CreateAdventureBoardCondition, K2Node_MakeStruct_SBAdventureBoardCondition) == 0x000048, "Member 'StepList_AdventureBoard_C_CreateAdventureBoardCondition::K2Node_MakeStruct_SBAdventureBoardCondition' has a wrong offset!");

}

