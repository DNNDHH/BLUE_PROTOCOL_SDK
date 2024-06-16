#pragma once

 

// Package: MiniMapIconEnemyGate

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.ExecuteUbergraph_MiniMapIconEnemyGate
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70BC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70BD[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70BE[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBDestructible*                        K2Node_DynamicCast_AsSBDestructible;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate) == 0x000008, "Wrong alignment on MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate");
static_assert(sizeof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate) == 0x000040, "Wrong size on MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, EntryPoint) == 0x000000, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::EntryPoint' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, Temp_bool_Variable) == 0x000004, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, Temp_byte_Variable) == 0x000018, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, Temp_byte_Variable_1) == 0x000028, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, K2Node_DynamicCast_AsSBDestructible) == 0x000030, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::K2Node_DynamicCast_AsSBDestructible' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000039, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate, K2Node_Select_Default) == 0x00003A, "Member 'MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate::K2Node_Select_Default' has a wrong offset!");

}

