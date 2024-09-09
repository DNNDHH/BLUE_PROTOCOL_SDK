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
	 * WidgetBlueprintGeneratedClass SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C
	 * Size -> 0x00F9 (FullSize[0x0371] - InheritedSize[0x0278])
	 */
	class USkillInfoForBattleCordeEdit_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimSwitchSkillPalette;                                  // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USkillInfoIconForBattleImagine_C*                    BattleImagine1;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForBattleImagine_C*                    BattleImagine2;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Bg01;                                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBForBattleImagine;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBForRegularSkill;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBForSkillInfoGrp;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBForTacticalSkillGrp1;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBForTacticalSkillGrp2;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 InfoTitleTxt;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForMainSkill_C*                        MainSkill;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnSkillPaletteSwitchBtn_C*                         SkillPaletteGrpSwitchBtn;                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForSubSkill_C*                         SubSkill;                                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForTacticalSkill_C*                    TacticalSkill1;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForTacticalSkill_C*                    TacticalSkill2;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForTacticalSkill_C*                    TacticalSkill3;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForTacticalSkill_C*                    TacticalSkill4;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForTacticalSkill_C*                    TacticalSkill5;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForTacticalSkill_C*                    TacticalSkill6;                                          // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForTacticalSkill_C*                    TacticalSkill7;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconForTacticalSkill_C*                    TacticalSkill8;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerMostFront;                                      // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoIconULTSkill_C*                            ULTSkill;                                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsStorageMode;                                          // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsTopInfoMode;                                          // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O2TA[0x2];                                   // 0x033A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SkillPaletteFrontPosition;                               // 0x033C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           SkillPaletteBackPosition;                                // 0x0344(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_76C9[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkillInfoIconForTacticalSkill_C*>            TacticalSkillGrpArray1;                                  // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USkillInfoIconForTacticalSkill_C*>            TacticalSkillGrpArray2;                                  // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       bIsSubPaletteReleased;                                   // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher);
		void IsSubPaletteReleased(bool* OutIsReleased);
		void SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn);
		void SetupTacticalSkillPosition(bool isSkillPaletteGrp2AtFront);
		void SwitchTacticalSkillBg(bool isSkillPaletteGrp2AtFront, bool IsAnimation);
		void StartSkillPaletteGrpSwitchAnimation(bool InSwitchToSubSkillPalette, bool InIsAnimation);
		void SetSkillPaletteGrpSwtichEnable(bool InIsEnabled);
		void SetStorageMode(bool InIsStorageMode);
		void SetupBattleImagine(TArray<class FString>* InBattleImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType);
		void SetupRegularAndULTSkill(TArray<int32_t>* InRegularSkillIds, int32_t InULTSkillId, bool InSetupByCurrEquip);
		void SetupTacticalSkill(TArray<int32_t>* InTacticalSkillIds, bool InSetupByCurrEquip, bool InIsSubPaletteReleased);
		void Setup(TArray<int32_t>* InTacticalSkillIds, TArray<int32_t>* InRegularSkillIds, int32_t InULTSkillId, TArray<class FString>* InBattleImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__SkillInfoForBattleCordeEdit_SkillPaletteFrontBackSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette);
		void SetUIBlockerMostFrontEnable(bool InIsEnabled);
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void ExecuteUbergraph_SkillInfoForBattleCordeEdit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
