#pragma once

 

// Package: PlayerEGauge

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PlayerEGauge.PlayerEGauge_C.ExecuteUbergraph_PlayerEGauge
// 0x0008 (0x0008 - 0x0000)
struct PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge) == 0x000004, "Wrong alignment on PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge");
static_assert(sizeof(PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge) == 0x000008, "Wrong size on PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge");
static_assert(offsetof(PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge, EntryPoint) == 0x000000, "Member 'PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function PlayerEGauge.PlayerEGauge_C.SetEditMode
// 0x0005 (0x0005 - 0x0000)
struct PlayerEGauge_C_SetEditMode final
{
public:
	bool                                          bIsEdit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerEGauge_C_SetEditMode) == 0x000001, "Wrong alignment on PlayerEGauge_C_SetEditMode");
static_assert(sizeof(PlayerEGauge_C_SetEditMode) == 0x000005, "Wrong size on PlayerEGauge_C_SetEditMode");
static_assert(offsetof(PlayerEGauge_C_SetEditMode, bIsEdit) == 0x000000, "Member 'PlayerEGauge_C_SetEditMode::bIsEdit' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_SetEditMode, Temp_bool_Variable) == 0x000001, "Member 'PlayerEGauge_C_SetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_SetEditMode, Temp_byte_Variable) == 0x000002, "Member 'PlayerEGauge_C_SetEditMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_SetEditMode, Temp_byte_Variable_1) == 0x000003, "Member 'PlayerEGauge_C_SetEditMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_SetEditMode, K2Node_Select_Default) == 0x000004, "Member 'PlayerEGauge_C_SetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function PlayerEGauge.PlayerEGauge_C.OnInAnimation
// 0x0005 (0x0005 - 0x0000)
struct PlayerEGauge_C_OnInAnimation final
{
public:
	bool                                          bForward;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerEGauge_C_OnInAnimation) == 0x000001, "Wrong alignment on PlayerEGauge_C_OnInAnimation");
static_assert(sizeof(PlayerEGauge_C_OnInAnimation) == 0x000005, "Wrong size on PlayerEGauge_C_OnInAnimation");
static_assert(offsetof(PlayerEGauge_C_OnInAnimation, bForward) == 0x000000, "Member 'PlayerEGauge_C_OnInAnimation::bForward' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_OnInAnimation, Temp_bool_Variable) == 0x000001, "Member 'PlayerEGauge_C_OnInAnimation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_OnInAnimation, Temp_byte_Variable) == 0x000002, "Member 'PlayerEGauge_C_OnInAnimation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_OnInAnimation, Temp_byte_Variable_1) == 0x000003, "Member 'PlayerEGauge_C_OnInAnimation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_OnInAnimation, K2Node_Select_Default) == 0x000004, "Member 'PlayerEGauge_C_OnInAnimation::K2Node_Select_Default' has a wrong offset!");

// Function PlayerEGauge.PlayerEGauge_C.PlayAnim
// 0x0010 (0x0010 - 0x0000)
struct PlayerEGauge_C_PlayAnim final
{
public:
	EUMGSequencePlayMode                          PlayMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A5[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlaybackSpeed;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerEGauge_C_PlayAnim) == 0x000008, "Wrong alignment on PlayerEGauge_C_PlayAnim");
static_assert(sizeof(PlayerEGauge_C_PlayAnim) == 0x000010, "Wrong size on PlayerEGauge_C_PlayAnim");
static_assert(offsetof(PlayerEGauge_C_PlayAnim, PlayMode) == 0x000000, "Member 'PlayerEGauge_C_PlayAnim::PlayMode' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_PlayAnim, PlaybackSpeed) == 0x000004, "Member 'PlayerEGauge_C_PlayAnim::PlaybackSpeed' has a wrong offset!");
static_assert(offsetof(PlayerEGauge_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'PlayerEGauge_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

