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
	 * WidgetBlueprintGeneratedClass ClassAbilityInfoForBattleSetTop.ClassAbilityInfoForBattleSetTop_C
	 * Size -> 0x0070 (FullSize[0x02E8] - InheritedSize[0x0278])
	 */
	class UClassAbilityInfoForBattleSetTop_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bg01;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*      ClassCommonAbilityIcon1;                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*      ClassCommonAbilityIcon2;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*      ClassUniqueAbilityIcon1;                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*      ClassUniqueAbilityIcon2;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForClassCommonAbilityIcon;                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForClassUniqueAbilityIcon;                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HLine_ClassCommonbilityInfo;                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HLine_ClassUniqueAbilityInfo;                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*> ClassAbilityIconBtnArray;                                // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnClassAbilityIconClicked;                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetupClassAbilityInfo();
		void Dest();
		void Const();
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void BndEvt__MyCharaMenu_ClassAbilityInfoForBattleSet_ClassUniqueAbilityIcon1_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature(int32_t InClassAbilityId);
		void BndEvt__MyCharaMenu_ClassAbilityInfoForBattleSet_ClassUniqueAbilityIcon2_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature(int32_t InClassAbilityId);
		void BndEvt__MyCharaMenu_ClassAbilityInfoForBattleSet_ClassCommonAbilityIcon1_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature(int32_t InClassAbilityId);
		void BndEvt__MyCharaMenu_ClassAbilityInfoForBattleSet_ClassCommonAbilityIcon2_K2Node_ComponentBoundEvent_4_OnIconClicked__DelegateSignature(int32_t InClassAbilityId);
		void ExecuteUbergraph_ClassAbilityInfoForBattleSetTop(int32_t EntryPoint);
		void OnClassAbilityIconClicked__DelegateSignature(int32_t InSkillSlotId, int32_t InSkillId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
