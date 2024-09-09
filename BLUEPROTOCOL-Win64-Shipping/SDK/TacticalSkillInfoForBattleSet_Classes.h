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
	 * WidgetBlueprintGeneratedClass TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C
	 * Size -> 0x0070 (FullSize[0x02E8] - InheritedSize[0x0278])
	 */
	class UTacticalSkillInfoForBattleSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bg01;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForSkillTypeRadionBtn;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_TacticalSkillLargeIcon_C*               SkillIcon;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SkillTypeGrp;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTacticalSkillTypeRadioBtn_C*                        SkillTypeRadioBtnA;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTacticalSkillTypeRadioBtn_C*                        SkillTypeRadioBtnB;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTacticalSkillTypeRadioBtn_C*                        SkillTypeRadioBtnN;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SkillTypeSelectMessageTxt;                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SkillId;                                                 // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkillLevel;                                              // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedSkillTypeId;                                     // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkillProficiencyLevelForTypeSelect;                      // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSkillTypeRadioBtnSelected;                             // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    AbilityAlphaSkillId;                                     // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AbilityBetaSkillId;                                      // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetSkillTypeRadioBtnEnable(class UTacticalSkillTypeRadioBtn_C* InSkillTypeRadioBtn, bool InIsEnabled);
		void CheckAbilityMastery(int32_t InAbilitySkillId, bool* OutIsMastery);
		void GetAbilitySkillId(int32_t InBaseSkillId, int32_t* OutAbilityAlphaSkillId, int32_t* OutAbilityBetaSkillId);
		void SetSkillTypeSelectMode(bool InIsSelectMode, int32_t InEquippedSkillTypeId);
		void UpdateSkillTypeRadioBtn(int32_t InSkillTypeId);
		void SetInfoType(bool InIsSkillTypeSelectableLevel, bool InIsSkillTypeSelectMode, int32_t InEquippedSkillTypeId);
		void SetSkill(int32_t InSkillId, int32_t InSkillLevel, bool InIsSkillTypeSelectableLevel, bool InIsSkillTypeSelectMode, int32_t InEquippedSkillTypeId, int32_t InSelectedSkillTypeId);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void OnRadioBtnSelected(int32_t InSkillTypeId);
		void ExecuteUbergraph_TacticalSkillInfoForBattleSet(int32_t EntryPoint);
		void OnSkillTypeRadioBtnSelected__DelegateSignature(int32_t InSelectedSkillTypeId, int32_t InSelectedSkillId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
