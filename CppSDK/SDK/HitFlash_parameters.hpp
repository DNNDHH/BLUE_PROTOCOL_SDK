#pragma once

 

// Package: HitFlash

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function HitFlash.HitFlash_C.GetVisibility_0
// 0x0038 (0x0038 - 0x0000)
struct HitFlash_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7434[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7435[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetHitPointRate_self_CastInput;           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetHitPointRate_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HitFlash_C_GetVisibility_0) == 0x000008, "Wrong alignment on HitFlash_C_GetVisibility_0");
static_assert(sizeof(HitFlash_C_GetVisibility_0) == 0x000038, "Wrong size on HitFlash_C_GetVisibility_0");
static_assert(offsetof(HitFlash_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'HitFlash_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(HitFlash_C_GetVisibility_0, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'HitFlash_C_GetVisibility_0::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitFlash_C_GetVisibility_0, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'HitFlash_C_GetVisibility_0::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(HitFlash_C_GetVisibility_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'HitFlash_C_GetVisibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HitFlash_C_GetVisibility_0, CallFunc_GetHitPointRate_self_CastInput) == 0x000020, "Member 'HitFlash_C_GetVisibility_0::CallFunc_GetHitPointRate_self_CastInput' has a wrong offset!");
static_assert(offsetof(HitFlash_C_GetVisibility_0, CallFunc_GetHitPointRate_ReturnValue) == 0x000030, "Member 'HitFlash_C_GetVisibility_0::CallFunc_GetHitPointRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitFlash_C_GetVisibility_0, CallFunc_Less_FloatFloat_ReturnValue) == 0x000034, "Member 'HitFlash_C_GetVisibility_0::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}

