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
	 * WidgetBlueprintGeneratedClass BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C
	 * Size -> 0x0080 (FullSize[0x02F8] - InheritedSize[0x0278])
	 */
	class UBattleSetTopInfoForCommandMenuMode_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBattleScoreInfoSwitcher_C*                          BattleScoreInfoSwitcher;                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClassAbilityInfoForBattleSetTop_C*                  ClassAbilityInfo;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPassiveImagineInfoForBattleSetTop_C*                InnerImagineInfo;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoForBattleSetTop_C*                         SkillInfo;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponInfoForBattleSetTop_C*                        WeaponInfo;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTopInfoWeaponIconClicked;                              // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTopInfoTacticalSkillIconPressed;                       // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTopInfoBattleImagineIconPressed;                       // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTopInfoClassAbilityIconPressed;                        // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTopInfoInnerImagineIconPressed;                        // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** NewParam);
		void ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased);
		void SetupInnerImagineInfo();
		void SetupClassAbilityInfo();
		void SetupTacticalSkillInfo();
		void SetupBattleImagineInfo();
		void SetupAllSkillInfo();
		void SetupWeaponInfo();
		void BndEvt__BattleSetTopInfoBase_WeaponInfoForBattleSetTop_K2Node_ComponentBoundEvent_5_OnWeaponIconClicked__DelegateSignature();
		void BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel);
		void BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
		void BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature(int32_t InSkillSlotId, int32_t InSkillId);
		void BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId);
		void ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode(int32_t EntryPoint);
		void OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId);
		void OnTopInfoClassAbilityIconPressed__DelegateSignature(int32_t InSkillSlotId, int32_t InSkillId);
		void OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
		void OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel);
		void OnTopInfoWeaponIconClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
