#pragma once

 

// Package: MiniMapIconDxBattleGateBarrier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.ExecuteUbergraph_MiniMapIconDxBattleGateBarrier
// 0x0038 (0x0038 - 0x0000)
struct MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_544F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5450[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBDestructible*                        K2Node_DynamicCast_AsSBDestructible;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier) == 0x000008, "Wrong alignment on MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier");
static_assert(sizeof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier) == 0x000038, "Wrong size on MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, EntryPoint) == 0x000000, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::EntryPoint' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, Temp_bool_Variable) == 0x000014, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, Temp_byte_Variable) == 0x000020, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, Temp_byte_Variable_1) == 0x000021, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, CallFunc_IsValid_ReturnValue) == 0x000022, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, K2Node_DynamicCast_AsSBDestructible) == 0x000028, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::K2Node_DynamicCast_AsSBDestructible' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000031, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier, K2Node_Select_Default) == 0x000032, "Member 'MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier::K2Node_Select_Default' has a wrong offset!");

}

