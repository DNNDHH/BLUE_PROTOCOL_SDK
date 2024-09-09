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
	 * BlueprintGeneratedClass BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UBP_EnemyExitEffectCommon_C : public USBEnemyExitEffectBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UMaterialInstanceDynamic*>                    MaterialArray;                                           // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      Time;                                                    // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TAE0[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FadeOutCurve;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBegin(class ASBEnemyCharacter* OwnerEnemyCharacter);
		void SetEnemyMaterial(class ASBEnemyCharacter* Enemy);
		void SetWeaponMatrial(class ASBEnemyCharacter* Enemy);
		void SetAttachedMeshMaterial(class ASBEnemyCharacter* Enemy);
		void ReceiveTick(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter);
		void SetFaceMaterial(class ASBEnemyCharacter* Enemy);
		void ExecuteUbergraph_BP_EnemyExitEffectCommon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
