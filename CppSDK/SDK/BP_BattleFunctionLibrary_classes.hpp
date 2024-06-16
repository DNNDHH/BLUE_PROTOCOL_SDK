#pragma once

 

// Package: BP_BattleFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "E_DamageReaction_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BattleFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetDamageReactionByStunLevel(const struct FDataTableRowHandle& DataTableRowHandle, const struct FSBStunInfo& StunInfo, class UObject* __WorldContext, E_DamageReaction* DamageReaction);

	static void GetDamageReactionByLevelDiff(E_DamageReaction DamageRaction, const struct FSBStunInfo& StunInfo, class UObject* __WorldContext, E_DamageReaction* DamageReaction);
	static void ApplyLv1PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext);
	static void ApplyLv2PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext);
	static void ApplyLv3PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext);
	static void ApplyLv4PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleFunctionLibrary_C">();
	}
	static class UBP_BattleFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_BattleFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_BattleFunctionLibrary_C");
static_assert(sizeof(UBP_BattleFunctionLibrary_C) == 0x000028, "Wrong size on UBP_BattleFunctionLibrary_C");

}

