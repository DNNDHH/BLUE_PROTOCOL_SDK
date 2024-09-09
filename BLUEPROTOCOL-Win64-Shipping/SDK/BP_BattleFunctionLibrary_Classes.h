#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_BattleFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void ApplyLv4PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext);
		void ApplyLv3PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext);
		void ApplyLv2PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext);
		void ApplyLv1PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext);
		void GetDamageReactionByLevelDiff(E_DamageReaction DamageRaction, const struct FSBStunInfo& StunInfo, class UObject* __WorldContext, E_DamageReaction* DamageReaction);
		void GetDamageReactionByStunLevel(const struct FDataTableRowHandle& DataTableRowHandle, const struct FSBStunInfo& StunInfo, class UObject* __WorldContext, E_DamageReaction* DamageReaction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
