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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_Costume.MyCharaMenu_Costume_C
	 * Size -> 0x0CDB (FullSize[0x0F8B] - InheritedSize[0x02B0])
	 */
	class UMyCharaMenu_Costume_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    PreviewOut;                                              // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PreviewIn;                                               // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              ArrowImage;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnCostumeChange;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnCostumeRemove;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CandidateListCanvas;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               CmnOperationRotate;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CostumeBG;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CostumeChangeBtnCanvas;                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_CostumeChangeMenu_C*                    CostumeChangeMenu;                                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharaCreate_DressVisibilityOnOffSwitch_C*           CostumeVisibilityOnOffSwitch;                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_EquippedCostumeInfoColumn_C*            EquippedCostumeInfoColumn;                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_EquipRingHandSelectDialog_C*            EquipRingHandSelectDialog;                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Chara;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim;                                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharaCreate_PosingSwitch_C*                         PosingSwitch;                                            // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PreviewBG;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PreviewBgGrp;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PreviewLine;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              SelectedCosUniqueId;                                     // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeCostumeProc;                                     // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESBCharaEquipType                                          SelectedCostumeEquipType;                                // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WL5Y[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharaEquipItemInfo                                 NewCosEquipItemInfo;                                     // 0x0388(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FOwnItemInfo                                        NewCosOwnItemInfo;                                       // 0x03B0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsDetach;                                                // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y3UX[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerAvatarRotateActive;                              // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       TickCheck;                                               // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UpdateStopFlag;                                          // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSwitchPosingToPrev;                                    // 0x051A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E66G[0x5];                                   // 0x051B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerAvatarSwitchPosing;                              // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      AvatarPoseStateNames;                                    // 0x0530(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCharaEquipItemInfo>                         NewCostumeEquipItemInfos;                                // 0x0540(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCharaEquipItemCharaCreateInfo>              NewCostumeEquipItemCharaCreateInfos;                     // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<ESBCharaEquipType>                                  CostumeEquipTypes;                                       // 0x0560(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCharaEquipItemCharaCreateInfo                      NewCostumeEquipItemCharaCreateInfo;                      // 0x0570(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		ESBCharacterGender                                         CurrentPlayerCharacterGender;                            // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMultipleCostumeEquipsSaveRequested;                    // 0x0599(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RF5K[0x6];                                   // 0x059A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerAvatarSwitchCostumeOnOff;                        // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsDetachingCompositeWear;                                // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECharaPartsLocation                                        TempPartsLocation;                                       // 0x05B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharaEquipType                                          TempEquipType;                                           // 0x05B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R43E[0x5];                                   // 0x05B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TempRingUniqueId;                                        // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              TempPartsName;                                           // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<ECharaPartsLocation>                                TempLeftFingerPartsLocations;                            // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBExpiredEquipmentData                             TempExpiredEquipmentData;                                // 0x05E8(0x0130) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       TempIsEquipmentExpired;                                  // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OLID[0x7];                                   // 0x0719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBCharaCreateComponent*                             TempCharaCreateComp;                                     // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSBDeletedCostumeData>                       TempDeletedCostumes;                                     // 0x0728(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       InIsAvatarCostumePartsLoading;                           // 0x0738(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QA11[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESBCharaEquipType>                                  DefaultCostumeEquipTypes;                                // 0x0740(0x0010) Edit, BlueprintVisible
		TArray<struct FCharaEquipItemInfo>                         DefaultEquipItemInfo;                                    // 0x0750(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCharaEquipItemInfo>                         PreviewCostumeItemInfos;                                 // 0x0760(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<ESBCharaEquipType>                                  PreviewCostumeEquipTypes;                                // 0x0770(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<ESBCharaEquipType>                                  PreviewDetachEquipTypes;                                 // 0x0780(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCharaEquipItemCharaCreateInfo>              PreviewCostumeCharaCreateInfos;                          // 0x0790(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      TempPreviewUniqueIds;                                    // 0x07A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBMasterCostume>                            TempPreviewCostumeDatas;                                 // 0x07B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       PreviewChangeRequest;                                    // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_23S0[0x7];                                   // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBCharaCreateParameter                             PreviewCharaCreateParameter;                             // 0x07C8(0x03C0) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSetCostumePreviewParameter;                            // 0x0B88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBCharaCreateParameter                             DefaultCharaCreateParameter;                             // 0x0B98(0x03C0) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSetAvatarImageReuploadFlag;                            // 0x0F58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRefreshPreviewCostume;                                 // 0x0F68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FCharaEquipInfo                                     TempPreviewEquipInfo;                                    // 0x0F78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bExistPriorityCapture;                                   // 0x0F88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InventoryUpdateRequest;                                  // 0x0F89(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShouldUploadCharaCreateParameter;                       // 0x0F8A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnItemListUpdate();
		void OpenExpiredMessageWindow(int32_t CostumeId, bool* IsOpen);
		void LocationToEquipType(ECharaPartsLocation CharaPartsLocation, ESBCharaEquipType* CharaEquipType);
		void ClearPreviewDatas();
		void SetDressOnOffButton(bool InIsDressOn);
		void FindConflictingCompositeWearbyEquipInfo(ESBCharaEquipType EquipType, ESBCharacterGender Gender, bool* IsConflict, ESBCharaEquipType* ConflictEquipType);
		void UpdatePlayerCharacter_Func();
		void CheckCostumeRingEquipment(const class FString& UniqueId, bool* Equipment, bool* Preview, ESBCharaEquipType* EquipType);
		void UpdateEquippedCostumeInfo();
		void OutputEquipmentCostumeLog();
		void UpdateCostumePreview();
		void IsPreviewMode(bool* Preview);
		void GetPreviewCostumeUniqueId(ESBCharaEquipType EquipmentType, class FString* UniqueId);
		void CheckCostumeEquipment(ESBCharaEquipType EquipType, bool* EquipFlag);
		void SetCharaCreateParameter(const struct FCharaEquipItemCharaCreateInfo& CreateInfo);
		void ChangeDecideButtonVisibility(bool Animation);
		void CheckPreviewUnusedItem(bool* Unused);
		void MakeSaveRequestItemData();
		void AddPreviewCostumeItem(struct FCharaEquipItemInfo* NewCostumeEquipItemInfo, ESBCharaEquipType* CostumeEquipType, struct FCharaEquipItemCharaCreateInfo* NewCostumeEquipCharaCreateInfo);
		void AddPreviewCostumeItemMulti();
		void InitDefaultCostumeData();
		void AddNewEquipInfo(const struct FCharaEquipItemInfo& NewCostumeEquipItemInfo, const struct FCharaEquipItemCharaCreateInfo& NewCostumeEquipCharaCreateInfo, ESBCharaEquipType CostumeEquipType);
		void ClearNewEquipInfo();
		void ChangeCostumeFunc();
		void SetUIBlockerVisibility(bool InIsVisible);
		void GetAvatarCostumePartsLoadingFlag(bool* OutIsAvatarCostumePartsLoading);
		void SetAvatarCostumePartsLoadingFlag(bool InIsLoading);
		void ChangeCostumeProcTerm();
		void ChangeCostumeProcStart();
		void GetEquipItemCharaCreateInfoFromEquipItemInfo(const struct FCharaEquipItemInfo& InEquipItemInfo, int32_t InMaterialId, ESBCharaEquipType InEquipType, bool IsDetachEquip, bool* IsValid, struct FCharaEquipItemCharaCreateInfo* OutEquipItemCharaCreateInfo);
		void Close();
		void BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature(const class FString& InRingUniqueId);
		void BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature();
		void BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(bool InIsLeftHand);
		void BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(const class FString& InItemUniqueId);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature();
		void BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature();
		void OnSaveCostumeMultipleEquipsDelegate(int32_t RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void OnSaveCostumeEquipDelegate(int32_t RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void UpdateCostumeIconTable();
		void OnOtherCostumeCandidateSelected(bool IsDetach);
		void DetachCostume();
		void OnDetach_CostumeCandidateList_();
		void OnIconSelected_CostumeCandidateList_(const class FString& InItemUniqueId);
		void UpdatePlayerCharacterCostume();
		void OnSaveEquipInfo_Costume(int32_t RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void ChangeCostume();
		void Destruct();
		void Init();
		void Construct();
		void BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature();
		void BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature();
		void BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature(bool InIsDressVisibilitySwitchOn);
		void OnUnexistHigherPriorityCapture(class UObject* Sender, class UObject* Param);
		void OnExistHigherPriorityCapture(class UObject* Sender, class UObject* Param);
		void DestructCharaImageGraph();
		void ConstructCharaImageGraph();
		void ExpiredItemNoticeSystemMessageTimerEnd();
		void UpdateCharaImageVisibility_Internal();
		void ExpiredItemNoticeSystemMessageEnd();
		void OnTimerEndForSaveCostumeEquipInfoRequestFailureProc();
		void OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc();
		void RequestSaveCharaCostumeMultipleEquips();
		void BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void OnCostumeChange();
		void OnPreviewCostumeChange(bool Start);
		void ResetPreviewAvaterCostume(bool ForceReset);
		void OnShowExpiredItemMessage();
		void OnPartsTimeEventStart();
		void OnOpenMenu();
		void ExecuteUbergraph_MyCharaMenu_Costume(int32_t EntryPoint);
		void OnRefreshPreviewCostume__DelegateSignature(const struct FSBCharaCreateParameter& Parameter);
		void OnSetAvatarImageReuploadFlag__DelegateSignature();
		void OnSetCostumePreviewParameter__DelegateSignature(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start);
		void OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature(bool InIsCostumeOn);
		void OnPlayerAvatarSwitchPosing__DelegateSignature(const class FName& OnPosingCommandName, bool IsSwitchPosingToPrev);
		void OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive);
		void OnChangeCostumeProc__DelegateSignature(bool ProcStart);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
