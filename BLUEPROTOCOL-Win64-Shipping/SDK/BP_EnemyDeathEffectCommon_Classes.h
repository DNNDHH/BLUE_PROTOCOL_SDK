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
	 * BlueprintGeneratedClass BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C
	 * Size -> 0x0038 (FullSize[0x0088] - InheritedSize[0x0050])
	 */
	class UBP_EnemyDeathEffectCommon_C : public USBEnemyDeathEffectBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UMaterialInstanceDynamic*>                    MaterialArray;                                           // 0x0058(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      Time;                                                    // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LPUP[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DeadCurve;                                               // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FadeOutCurve;                                            // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousAttributeTimeRatio;                              // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VanishWaitTime;                                          // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetEnemyMatrial(class ASBEnemyCharacter* Enemy);
		void SetWeaponMatrial(class ASBEnemyCharacter* Enemy);
		void ReceiveBegin(class ASBEnemyCharacter* OwnerEnemyCharacter);
		void ReceiveTick(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
		void ReceiveBeginFadeOut(class ASBEnemyCharacter* OwnerEnemyCharacter);
		void ReceiveTickFadeOut(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
		void ReceiveMaterialUpdated(EDeathEffectType DeathEffectType, class ASBEnemyCharacter* OwnerEnemyCharacter);
		void ReceiveBeginVanish(float WaitTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
		void ReceiveTickVanish(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
		void SetAttachedMeshMaterial(class ASBEnemyCharacter* Enemy);
		void SetFaceMaterial(class ASBEnemyCharacter* Enemy);
		void ExecuteUbergraph_BP_EnemyDeathEffectCommon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
