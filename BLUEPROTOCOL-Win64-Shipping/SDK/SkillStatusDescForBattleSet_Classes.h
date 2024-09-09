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
	 * WidgetBlueprintGeneratedClass SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C
	 * Size -> 0x0108 (FullSize[0x0380] - InheritedSize[0x0278])
	 */
	class USkillStatusDescForBattleSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkillBuffInfoList_C*                                AdditionalEffectInfoList;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonSkillStatusDescBase_C*                        Base;                                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyChara_AbilityLargeIcon_C*                         ClassAbilityIcon;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         ClassAbilityRemoveBtn;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DefaultMessageText;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 ExplanationMessageTxt;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_SkillDescriptionBasics_C*                       SkillDesc;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherForSkillIcon;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherForStatusType;                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTacticalSkillInfoForBattleSet_C*                    TacticalSkillInfo;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBoxForClassAbilityRemoveBtnGrp;                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcherForDesc;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_BattleSetInfoType                                        InfoType;                                                // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBSkillType                                               SkillType;                                               // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsBaseBgNormalType;                                     // 0x02E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_89H4[0x1];                                   // 0x02E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StatusTypeId;                                            // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTacticalSkillTypeSelected;                             // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClassAbilityRemoveBtnPressed;                          // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SkillId;                                                 // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkillLevel;                                              // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsSkillTypeSelectMode;                                  // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_OTVX[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBSkillDataMasterData                              SkillMasterData;                                         // 0x0318(0x0058) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           WindowSize;                                              // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    SelectedSkillTypeId;                                     // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EquippedSkillTypeId;                                     // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckIsSkillTypeSelectable(int32_t InSkillId, int32_t InSkillLevel, bool* OutIsSkillTypeSelectable);
		void GetTacticalSkillBaseInfo(const struct FSBSkillDataMasterData& InSkillMasterData, bool* IsTacticalSkill, int32_t* OutBaseSkillId, int32_t* OutBaseSkillLevel);
		void CheckIfTacticalSkillIsEquppedAndItsSkillType(int32_t InSkillId, bool* OutIsEquipped, int32_t* OutSkillType);
		void SetWindowSize(const struct FVector2D& InWindowSize);
		void SwitchStatusType(int32_t InStatusTypeId);
		void SetClassAbilityRemoveBtnVisibility(bool InIsVisible);
		void SwitchBaseBgType(bool InIsNormalType);
		void SetDescBlank(bool InIsDescBlank);
		void SetDefaultDescType(E_BattleSetInfoType InInfoType, bool InIsSharedAbility);
		void SetInfoType(E_BattleSetInfoType InInfoType);
		void SwitchDescType(bool InIsDescDefault);
		void SetSkill(int32_t InSkillId);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature(int32_t InSelectedSkillTypeId, int32_t InSelectedSkillId);
		void ExecuteUbergraph_SkillStatusDescForBattleSet(int32_t EntryPoint);
		void OnTacticalSkillTypeSelected__DelegateSignature(int32_t InSelectedSkillTypeId, int32_t InSelectedSkillId);
		void OnClassAbilityRemoveBtnPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
