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
	 * BlueprintGeneratedClass CommonBattleHudComponent.CommonBattleHudComponent_C
	 * Size -> 0x0011 (FullSize[0x00C9] - InheritedSize[0x00B8])
	 */
	class UCommonBattleHudComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_Reticle_ChargeLevel_C*                           ChargeLevel;                                             // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSetup;                                                  // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsEnable();
		void ShowHUD(bool bShow);
		void UpdateHud();
		void OnTick();
		void DestroyHud();
		void SetupHUD();
		void SetRayHit(bool bRayHit);
		void AttackHit(bool IsCritical);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_CommonBattleHudComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
