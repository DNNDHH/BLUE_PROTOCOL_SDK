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
	 * BlueprintGeneratedClass BP_Magician.BP_Magician_C
	 * Size -> 0x0028 (FullSize[0x42B8] - InheritedSize[0x4290])
	 */
	class ABP_Magician_C : public ABP_PlayerCharacter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x4290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBPCMagicianComponent*                              SBPCMagician;                                            // 0x4298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_P011HUDComponent_C*                              BP_WizardHUDComponent;                                   // 0x42A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerAimHUDComponent_C*                         BP_PlayerAimHUDComponent;                                // 0x42A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCommonBattleHudComponent_C*                         CommonBattleHudComponent;                                // 0x42B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateHUD();
		void OnRayHitForPlayerReticle(bool bHit, bool bProperDistance);
		void UnSheathe(ESBWeaponEquipType EquipType);
		void Sheathe();
		void OnHitForPlayerReticle(float Damage, bool bWeakHit);
		void CreateClassHUD();
		void OnSetAimUIVisibility(bool IsVisible);
		void ExecuteUbergraph_BP_Magician(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
