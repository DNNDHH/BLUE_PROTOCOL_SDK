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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C
	 * Size -> 0x0158 (FullSize[0x03D0] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_BattleSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBattleCordeSetHeadingForBattleSet_C*                BattleCordeSetHeading;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnFullScreenForDetailedStatus;                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               CmnOperationRotate;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_DetailedStatus_C*                       DetailedStatus;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_LeftSideParameters_C*                   LeftSideParameters;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlayerAvatarImage;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PlayerAvatarImageGrp;                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RightSideParameters;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBattleSetTopInfoBase_C*                             TopInfoBase;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerForDetailedStatus;                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerFrontRow;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Close_Detail;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSetPlayerCaptureStudioHidden;                          // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSetPlayerAvatarRotateActive;                           // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              EquippedEquipmentUniqueId;                               // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SelectedEquipmentUniqueId;                               // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnResetPlayerAvatarRotate;                               // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerCharacterEquippedCostumeChanged;                 // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnIsCmnBackBtnVisible;                                   // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquippedWeaponSpawned;                                 // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    TempSkillSlotId;                                         // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EquippedSkillId;                                         // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedSkillId;                                         // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsStorageMode;                                          // 0x038C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_CLWO[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnIsChildWidgetOpened;                                   // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bPlayerAvatarImageVisibility;                            // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bExistPriorityCapture;                                   // 0x03A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HA4M[0x6];                                   // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEquipmentStatusDescAndListForBattleSet_C*           EquipmentChangeUI;                                       // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_BattleSetInfoType                                        EquipmentChangeUIInfoType;                               // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharaEquipType                                          EquipmentChangeUIEquipType;                              // 0x03B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HRU5[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkillStatusDescAndListForBattleSet_C*               SkillOrAbilityChangeUI;                                  // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_BattleSetInfoType                                        SkillOrAbilityChangeUIInfoType;                          // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4MGN[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempAbilityTypeId;                                       // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBattleCordeEditForBattleSet_C*                      BattleCordeEditUI;                                       // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UnbindEventsOfBattleCordeEditUI(bool InUnbindTermEnd);
		void BindEventsOfBattleCordeEditUI();
		void UnbindEventsOfSkillOrAbilityChangeUI(bool InUnbindTermEnd);
		void BindEventsOfSkillOrAbilityChangeUI();
		void UnbindEventsOfEquipmentChangeUI(bool InUnbindTermEnd);
		void BindEventsOfEquipmentChangeUI();
		void SetUIBlockerFrontRowVisibility(bool InIsVisible);
		void SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop);
		void UpdateLeftSideParameters(bool InIncludeClassInfo);
		void SetStorageMode(bool InIsStorageMode);
		void GetPlayerCharacterEquipStatusDiffRequestRetCode(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, int32_t* OutRetCode);
		void SetTopInfoVisibility(bool InIsVisible, bool InIgnorePlayerCaptureStudio);
		void ImmediateCloseDetailedStatus();
		void SetBtnFullScreenForDetailedStatusVisibility(ESlateVisibility InVisibility);
		void InAnimation();
		void SetPlayerAvatarImageVisibility(bool bVisibility);
		void UpdatePlayerAvatarVisibility_Internal();
		void ConstructPlayerAvatarImageGraph();
		void DestructPlayerAvatarImageGraph();
		void OnExistHigherPriorityCapture(class UObject* Sender, class UObject* Param);
		void OnUnexistHigherPriorityCapture(class UObject* Sender, class UObject* Param);
		void OnSkillOrAbilityChangeUIHideFinished();
		void OnSkillOrAbilityChangeUIListItemSelected(int32_t InEquippedSkillId, int32_t InSelectedSkillId);
		void OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI(E_BattleSetInfoType InInfoType, bool InIncludesClassInfo);
		void OnEquippedTacticalSkillChanged();
		void OnEquippedClassAbilityChanged();
		void OnSkillOrAbilityChangeUITermEnd();
		void OnEquipmentChangeUIHideFinished();
		void OnEquipmentChangeUIListItemSelected(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId);
		void OnLeftSideParamStatUpdatedAtEquipmentChangeUI(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate);
		void OnEquippedWeaponSpawnedAtEquipmentChangeUI(E_BattleSetInfoType InBattleSetInfoType);
		void OnClassChangedAtEquipmentChangeUI();
		void OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI(bool InIsUpdateStop);
		void OnEquippedWeaponChangeRequestCompleted();
		void OnEquippedBattleImagineChangeRequestCompleted();
		void OnEquippedInnerImagineChangeRequestCompleted();
		void OnEquipmentChangeUITermEnd();
		void OnEquippedCostumeChanged();
		void OnBattleCordeDataReloadRequestedAtInit();
		void OnBattleCordeDataReloaded();
		void OnBattleCordeEditUITermEnd();
		void OnBattleCordeEditUIHideFinished();
		void OnEquippedWeaponSpawnedAtBattleCordeEditUI();
		void OnClassChangedAtBattleCordeEditUI();
		void OnLeftSideParamStatUpdatedAtBattleCordeEditUI(E_BattleSetInfoType InInfoType, bool InIcludesClassInfo);
		void OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI(bool InIsRotateActive);
		void OnEquippedCostumeChangedAtBattleCordeEditUI();
		void OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI(bool InIsUpdateStop);
		void OnBattleCordeSaveRequestCompleted();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void BndEvt__MyCharaMenu_BattleSet_SBButtonFullScreen_DetailedStatus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void CloseDetailedStatus();
		void OnPlayerCharaCaptureCompleted();
		void BndEvt__MyCharaMenu_BattleSet_LeftSideParameters_K2Node_ComponentBoundEvent_1_OnDetailedStatusClicked__DelegateSignature();
		void EscDetailedStatus();
		void StopListenInput();
		void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel);
		void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
		void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature(int32_t InSkillSlotId, int32_t InSkillId);
		void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId);
		void BndEvt__MyCharaMenu_BattleSet_BattleCordeSetHeadingForBattleSet_K2Node_ComponentBoundEvent_1_OnAdminOrEditBtnPressed__DelegateSignature();
		void OnOpenMenu();
		void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_0_OnTopInfoWeaponIconPressed__DelegateSignature();
		void ExecuteUbergraph_MyCharaMenu_BattleSet(int32_t EntryPoint);
		void OnIsChildWidgetOpened__DelegateSignature(bool InIsChildWidgetOpened);
		void OnResetPlayerAvatarRotate__DelegateSignature();
		void OnEquippedWeaponSpawned__DelegateSignature();
		void OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible);
		void OnPlayerCharacterEquippedCostumeChanged__DelegateSignature();
		void OnSetPlayerAvatarRotateActive__DelegateSignature(bool InIsRotateActive);
		void OnSetPlayerCaptureStudioHidden__DelegateSignature(bool InIsHidden);
		void Close_Detail__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
