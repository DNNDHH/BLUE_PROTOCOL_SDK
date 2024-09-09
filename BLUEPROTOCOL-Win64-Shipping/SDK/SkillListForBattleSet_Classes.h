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
	 * WidgetBlueprintGeneratedClass SkillListForBattleSet.SkillListForBattleSet_C
	 * Size -> 0x00C1 (FullSize[0x0339] - InheritedSize[0x0278])
	 */
	class USkillListForBattleSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimListIn;                                              // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBtn16_C*                                         CancelBtn;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         EquipChangeBtn;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridForSkillInfoItem;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HeadingTxt;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ListBodyGrp;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 NoSkillMsgTxt;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherForSkillIcons;                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_BattleSetInfoType                                        BattleSetInfoType;                                       // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBClassType                                               SkillClassType;                                          // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HRGW[0x2];                                   // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SkillSlotId;                                             // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ClassAbilityTypeId;                                      // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBSkillType                                               SkillType;                                               // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBPlayerActiveArtsSlotType                                TacticalSkillSlotType;                                   // 0x02CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_36S8[0x2];                                   // 0x02CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInfoItemSelected;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancelBtnPressed;                                      // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSkillChangeBtnPressed;                                 // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SelectedSkillId;                                         // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WMJN[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkillInfoItemForBattleSet_C*                        SelectedInfoItem;                                        // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempSkillId;                                             // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempSlotEquippedSkillId;                                 // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSBPlayerSkillData>                          SelectableTacticalSkillDatas;                            // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBPlayerPassiveSkillData>                   SelectableClassAbilityDatas;                             // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBPlayerArtsType                                          ArtsType;                                                // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UISupportRefresh();
		void GetClassAbilityDatas(ESBClassType InClassType, ESBPlayerArtsType InArtsType, TArray<struct FSBPlayerPassiveSkillData>* OutDataArray);
		void GetTacticalSkillDatas(ESBClassType InClassType, TArray<struct FSBPlayerSkillData>* OutDataArray);
		void SetTacticalSkillSlotType(ESBPlayerActiveArtsSlotType InSlotType);
		void SetSkillListItemSelectedBySkillId(int32_t InSkillId);
		void SwitchEquipmentIconListBody(bool InIsEquipmentIconListBodyEmpty);
		void SetInfoType(E_BattleSetInfoType InInfoType);
		void SetListVisibility(ESlateVisibility InVisibility);
		void SetIsEquipChangeBtnEnabled(bool InIsEnabled);
		void ResetSelectedInfoItemAll();
		void HideInfoItemAll();
		void PlayListInAnimReverse();
		void PlayListInAnimForward();
		void UpdateList();
		void InitList(E_BattleSetInfoType InBattleSetInfoType, ESBClassType InSkillClassType, int32_t InSkillSlotId, int32_t InClassAbilityTypeId);
		void Destruct();
		void BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
		void OnSkillInfoItemPressed(class USkillInfoItemForBattleSet_C* InInfoItem);
		void Construct();
		void ExecuteUbergraph_SkillListForBattleSet(int32_t EntryPoint);
		void OnCancelBtnPressed__DelegateSignature();
		void OnSkillChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, int32_t InSkillId);
		void OnInfoItemSelected__DelegateSignature(class USkillInfoItemForBattleSet_C* InSelectedInfoItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
