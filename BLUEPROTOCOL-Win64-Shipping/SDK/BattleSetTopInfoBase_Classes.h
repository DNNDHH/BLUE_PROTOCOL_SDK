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
	 * WidgetBlueprintGeneratedClass BattleSetTopInfoBase.BattleSetTopInfoBase_C
	 * Size -> 0x0071 (FullSize[0x02E9] - InheritedSize[0x0278])
	 */
	class UBattleSetTopInfoBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTopInfoWeaponIconPressed;                              // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTopInfoTacticalSkillIconPressed;                       // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTopInfoBattleImagineIconPressed;                       // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTopInfoClassAbilityIconPressed;                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTopInfoInnerImagineIconPressed;                        // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBattleSetTopInfoForCommandMenuMode_C*               TopInfoForCommandMenuMode;                               // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBattleSetTopInfoForStorageMode_C*                   TopInfoForStorageMode;                                   // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsStorageMode;                                          // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased);
		void UnbindChildEvents();
		void GetIsWeaponLost(bool* OutIsWeaponLost);
		void SetupBattleCordeInfo(int32_t InCordeId, bool InSetupByCurrentEquip, bool InIsStorageMode);
		void SetupInnerImagineInfo();
		void SetupClassAbilityInfo();
		void SetupTacticalSkillInfo();
		void SetupBattleImagineInfo();
		void SetupAllSkillInfo();
		void SetupWeaponInfo();
		void SetupInfo(bool bIsStorageMode);
		void Construct();
		void OnWeaponIconPressed();
		void OnTacticalSkillIconPressed(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel);
		void OnBattleImagineIconPressed(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
		void OnClassAbilityIconPressed(int32_t InSkillSlotId, int32_t InSkillId);
		void OnInnerImagineIconPressed(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId);
		void Destruct();
		void ExecuteUbergraph_BattleSetTopInfoBase(int32_t EntryPoint);
		void OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId);
		void OnTopInfoClassAbilityIconPressed__DelegateSignature(int32_t InSkillSlotId, int32_t InSkillId);
		void OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
		void OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel);
		void OnTopInfoWeaponIconPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
