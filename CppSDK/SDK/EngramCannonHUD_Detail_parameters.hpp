#pragma once

 

// Package: EngramCannonHUD_Detail

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.ExecuteUbergraph_EngramCannonHUD_Detail
// 0x0004 (0x0004 - 0x0000)
struct EngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail) == 0x000004, "Wrong alignment on EngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail");
static_assert(sizeof(EngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail) == 0x000004, "Wrong size on EngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail");
static_assert(offsetof(EngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail, EntryPoint) == 0x000000, "Member 'EngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail::EntryPoint' has a wrong offset!");

// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.PlayDamageEffect
// 0x00A0 (0x00A0 - 0x0000)
struct EngramCannonHUD_Detail_C_PlayDamageEffect final
{
public:
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ApplyDofSettings_bResult;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_459D[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_459E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPostProcessComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_459F[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45A0[0x8];                                     // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ScriptPostProcessActor_C*           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EngramCannonHUD_Detail_C_PlayDamageEffect) == 0x000010, "Wrong alignment on EngramCannonHUD_Detail_C_PlayDamageEffect");
static_assert(sizeof(EngramCannonHUD_Detail_C_PlayDamageEffect) == 0x0000A0, "Wrong size on EngramCannonHUD_Detail_C_PlayDamageEffect");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_K2_SetTimer_ReturnValue) == 0x000000, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_ApplyDofSettings_bResult) == 0x000008, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_ApplyDofSettings_bResult' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput) == 0x000028, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000040, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000088, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_FinishSpawningActor_ReturnValue) == 0x000090, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_PlayDamageEffect, CallFunc_IsValid_ReturnValue_2) == 0x000099, "Member 'EngramCannonHUD_Detail_C_PlayDamageEffect::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.Finalize Damage Effect
// 0x0014 (0x0014 - 0x0000)
struct EngramCannonHUD_Detail_C_Finalize_Damage_Effect final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EngramCannonHUD_Detail_C_Finalize_Damage_Effect) == 0x000004, "Wrong alignment on EngramCannonHUD_Detail_C_Finalize_Damage_Effect");
static_assert(sizeof(EngramCannonHUD_Detail_C_Finalize_Damage_Effect) == 0x000014, "Wrong size on EngramCannonHUD_Detail_C_Finalize_Damage_Effect");
static_assert(offsetof(EngramCannonHUD_Detail_C_Finalize_Damage_Effect, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'EngramCannonHUD_Detail_C_Finalize_Damage_Effect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_Finalize_Damage_Effect, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'EngramCannonHUD_Detail_C_Finalize_Damage_Effect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Detail_C_Finalize_Damage_Effect, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'EngramCannonHUD_Detail_C_Finalize_Damage_Effect::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

