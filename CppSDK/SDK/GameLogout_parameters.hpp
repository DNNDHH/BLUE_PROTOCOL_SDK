#pragma once

 

// Package: GameLogout

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GameLogout.GameLogout_C.ExecuteUbergraph_GameLogout
// 0x0048 (0x0048 - 0x0000)
struct GameLogout_C_ExecuteUbergraph_GameLogout final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EClientExitStatus                             Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EClientExitStatus                             Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CF[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCountdownUI_C*                         CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECountdownResult                              K2Node_CustomEvent_Result;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40D0[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ECountdownResult Result)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	EClientExitStatus                             K2Node_Select_Default;                             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GameLogout_C_ExecuteUbergraph_GameLogout) == 0x000008, "Wrong alignment on GameLogout_C_ExecuteUbergraph_GameLogout");
static_assert(sizeof(GameLogout_C_ExecuteUbergraph_GameLogout) == 0x000048, "Wrong size on GameLogout_C_ExecuteUbergraph_GameLogout");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, EntryPoint) == 0x000000, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::EntryPoint' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, Temp_byte_Variable) == 0x000010, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, Temp_byte_Variable_1) == 0x000021, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, CallFunc_Create_ReturnValue) == 0x000028, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, K2Node_CustomEvent_Result) == 0x000030, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, Temp_bool_Variable) == 0x000032, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GameLogout_C_ExecuteUbergraph_GameLogout, K2Node_Select_Default) == 0x000044, "Member 'GameLogout_C_ExecuteUbergraph_GameLogout::K2Node_Select_Default' has a wrong offset!");

// Function GameLogout.GameLogout_C.OnEndCountdown
// 0x0001 (0x0001 - 0x0000)
struct GameLogout_C_OnEndCountdown final
{
public:
	ECountdownResult                              Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GameLogout_C_OnEndCountdown) == 0x000001, "Wrong alignment on GameLogout_C_OnEndCountdown");
static_assert(sizeof(GameLogout_C_OnEndCountdown) == 0x000001, "Wrong size on GameLogout_C_OnEndCountdown");
static_assert(offsetof(GameLogout_C_OnEndCountdown, Result) == 0x000000, "Member 'GameLogout_C_OnEndCountdown::Result' has a wrong offset!");

}

