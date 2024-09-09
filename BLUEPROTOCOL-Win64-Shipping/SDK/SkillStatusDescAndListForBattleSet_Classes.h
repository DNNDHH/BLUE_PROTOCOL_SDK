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
	 * WidgetBlueprintGeneratedClass SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C
	 * Size -> 0x01A0 (FullSize[0x0450] - InheritedSize[0x02B0])
	 */
	class USkillStatusDescAndListForBattleSet_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBack01_C*                                        BackToBattleSetTopLevelBtn;                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Bg01;                                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BlackFilter;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnFullScreenForCharaDetailedStatus;                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreen;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_DetailedStatus_C*                       CharaDetailedStatus;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EquippedEquipmentStatusDescHeadingIcon;                  // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillStatusDescForBattleSet_C*                      EquippedSkillStatusDesc;                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 EquippedSkillStatusDescHeadingTxt;                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULeftSideParametersForBattleSetSecondLevel_C*        LeftSideParametersForSecondLevel;                        // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillStatusDescForBattleSet_C*                      SelectedSkillStatusDesc;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillListForBattleSet_C*                            SkillList;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStatusTypeSwitchBtnForBattleSet_C*                  StatusTypeSwitchBtn;                                     // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerFrontRow;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_BattleSetInfoType                                        BattleSetInfoType;                                       // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBClassType                                               EquipClassType;                                          // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6DHC[0x2];                                   // 0x0342(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SkillSlotId;                                             // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ClassAbilityTypeId;                                      // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBItemSortType                                            SortType;                                                // 0x034C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A9ZD[0x3];                                   // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedStatusTypeId;                                    // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZQ57[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemIconBtn_C*                                      SelectedItemBtn;                                         // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHideWindowFinished;                                    // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrEquippedSkillId;                                     // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrSelectedSkillId;                                     // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues    EquipOrSkillChangeableRetValue;                          // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsSkillInfoItemSelected;                                // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSkillChangeRequested;                                 // 0x037A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFilterSelectorOpen;                                   // 0x037B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_371V[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                SortFilter;                                              // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ASBPlayerController*                                 TempSBPlayerController;                                  // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSkillInfoItemSelected;                                 // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSkillChangeBtnPressed;                                 // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                TempUnchangableMessageDialogTargetText;                  // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TempRetCode;                                             // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M4LE[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLeftSideParameterStatusUpdated;                        // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnResetLeftSideParameterDiffMark;                        // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquippedTacticalSkillChanged;                          // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquippedClassAbilityChanged;                           // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bTempIsSkillDisarm;                                      // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_32HS[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkillInfoItemForBattleSet_C*                        SelectedSkillInfoItem;                                   // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPlayerArtsComponent*                              PlayerArtsComp;                                          // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPCClassComponentBase*                             PlayerCharacterClassComp;                                // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedTacticalSkillTypeId;                             // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedTacticalSkillId;                                 // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTermEnd;                                               // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsHideWindowAnimePlaying(bool* OutIsPlaying);
		void IsCharaDetailedStatusOpen(bool* OutIsOpen);
		void GetBattleSetInfoType(E_BattleSetInfoType* OutBattleSetInfoType);
		void UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate);
		void SwitchStatusType(int32_t InStatusTypeId);
		void UpdateSelectedSkillDesc(int32_t InSkillId, bool InForceUpdate, const class FString& InEquipmentUniqueId);
		void UpdateEquippedSkillDesc(int32_t InEquippedSkillId, bool InForceUpdate);
		void HideWindow();
		void ShowWindow(E_BattleSetInfoType InInfoType, ESBClassType InEquipClassType, int32_t InSkillSlotId, int32_t InClassAbilityTypeId);
		void ClassAbilityChangeProc(int32_t InSkillId, bool InDisarm);
		void OnClassAbilityChangeCompleted(int32_t RetCode);
		void TacticalSkillChangeProc(int32_t InSkillId, bool InDisarm);
		void OnTacticalSkillChangeCompleted(int32_t RetCode, bool IsArtsAssetLoadRequested);
		void BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature(int32_t InSelectedSkillTypeId, int32_t InSelectedSkillId);
		void ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, E_BattleSetInfoType InBattleSetInfoType);
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnPress_Cancel();
		void UiInputBlock(bool InIsBlock);
		void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
		void UIInputBlockForSkillChange(bool InIsBlock);
		void Destruct();
		void BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature(int32_t InPressedSwitchBtnId);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
		void CloseDetailedStatus();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void ChangeSkillResultProc(int32_t InNewEquippedSkillId, bool InIsDisarm);
		void BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature();
		void BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature(class USkillInfoItemForBattleSet_C* InSelectedInfoItem);
		void BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, int32_t InSkillId);
		void BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature();
		void ExecuteUbergraph_SkillStatusDescAndListForBattleSet(int32_t EntryPoint);
		void OnTermEnd__DelegateSignature();
		void OnEquippedClassAbilityChanged__DelegateSignature();
		void OnEquippedTacticalSkillChanged__DelegateSignature();
		void OnResetLeftSideParameterDiffMark__DelegateSignature();
		void OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate);
		void OnSkillChangeBtnPressed__DelegateSignature();
		void OnSkillInfoItemSelected__DelegateSignature(int32_t InEquippedSkillId, int32_t InSelectedSkillId);
		void OnHideWindowFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
