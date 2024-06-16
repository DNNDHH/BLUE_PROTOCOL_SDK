#pragma once

 

// Package: MyCharaMenu_Costume

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "CharaParts_structs.hpp"
#include "UMG_structs.hpp"
#include "E_MyCharaMenu_CostumeCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_Costume.MyCharaMenu_Costume_C
// 0x0CA8 (0x0F58 - 0x02B0)
class UMyCharaMenu_Costume_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PreviewOut;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PreviewIn;                                         // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ArrowImage;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnCostumeChange;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnCostumeRemove;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CandidateListCanvas;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CostumeBG;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CostumeChangeBtnCanvas;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_CostumeChangeMenu_C*       CostumeChangeMenu;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreate_DressVisibilityOnOffSwitch_C* CostumeVisibilityOnOffSwitch;                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_EquippedCostumeInfoColumn_C* EquippedCostumeInfoColumn;                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_EquipRingHandSelectDialog_C* EquipRingHandSelectDialog;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Chara;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreate_PosingSwitch_C*            PosingSwitch;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewBG;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PreviewBgGrp;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewLine;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 SelectedCosUniqueId;                               // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeCostumeProc;                               // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBCharaEquipType                             SelectedCostumeEquipType;                          // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75A5[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    NewCosEquipItemInfo;                               // 0x0388(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOwnItemInfo                           NewCosOwnItemInfo;                                 // 0x03B0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsDetach;                                          // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75A6[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlayerAvatarRotateActive;                        // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          TickCheck;                                         // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UpdateStopFlag;                                    // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSwitchPosingToPrev;                              // 0x04E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75A7[0x5];                                     // 0x04E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlayerAvatarSwitchPosing;                        // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         AvatarPoseStateNames;                              // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCharaEquipItemInfo>            NewCostumeEquipItemInfos;                          // 0x0508(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCharaEquipItemCharaCreateInfo> NewCostumeEquipItemCharaCreateInfos;               // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<ESBCharaEquipType>                     CostumeEquipTypes;                                 // 0x0528(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharaEquipItemCharaCreateInfo         NewCostumeEquipItemCharaCreateInfo;                // 0x0538(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBCharacterGender                            CurrentPlayerCharacterGender;                      // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMultipleCostumeEquipsSaveRequested;              // 0x0561(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75A8[0x6];                                     // 0x0562(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlayerAvatarSwitchCostumeOnOff;                  // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDetachingCompositeWear;                          // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           TempPartsLocation;                                 // 0x0579(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             TempEquipType;                                     // 0x057A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75A9[0x5];                                     // 0x057B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempRingUniqueId;                                  // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 TempPartsName;                                     // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<ECharaPartsLocation>                   TempLeftFingerPartsLocations;                      // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBExpiredEquipmentData                TempExpiredEquipmentData;                          // 0x05B0(0x0130)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          TempIsEquipmentExpired;                            // 0x06E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75AA[0x7];                                     // 0x06E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                TempCharaCreateComp;                               // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBDeletedCostumeData>          TempDeletedCostumes;                               // 0x06F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InIsAvatarCostumePartsLoading;                     // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75AB[0x7];                                     // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCharaEquipType>                     DefaultCostumeEquipTypes;                          // 0x0708(0x0010)(Edit, BlueprintVisible)
	TArray<struct FCharaEquipItemInfo>            DefaultEquipItemInfo;                              // 0x0718(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCharaEquipItemInfo>            PreviewCostumeItemInfos;                           // 0x0728(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<ESBCharaEquipType>                     PreviewCostumeEquipTypes;                          // 0x0738(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<ESBCharaEquipType>                     PreviewDetachEquipTypes;                           // 0x0748(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCharaEquipItemCharaCreateInfo> PreviewCostumeCharaCreateInfos;                    // 0x0758(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         TempPreviewUniqueIds;                              // 0x0768(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBMasterCostume>               TempPreviewCostumeDatas;                           // 0x0778(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          PreviewChangeRequest;                              // 0x0788(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75AC[0x7];                                     // 0x0789(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateParameter                PreviewCharaCreateParameter;                       // 0x0790(0x03C0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSetCostumePreviewParameter;                      // 0x0B50(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBCharaCreateParameter                DefaultCharaCreateParameter;                       // 0x0B60(0x03C0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSetAvatarImageReuploadFlag;                      // 0x0F20(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRefreshPreviewCostume;                           // 0x0F30(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCharaEquipInfo                        TempPreviewEquipInfo;                              // 0x0F40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bExistPriorityCapture;                             // 0x0F50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InventoryUpdateRequest;                            // 0x0F51(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShouldUploadCharaCreateParameter;                 // 0x0F52(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnChangeCostumeProc__DelegateSignature(bool ProcStart);
	void OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive);
	void OnPlayerAvatarSwitchPosing__DelegateSignature(class FName OnPosingCommandName, bool Param_IsSwitchPosingToPrev);
	void OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature(bool InIsCostumeOn);
	void OnSetCostumePreviewParameter__DelegateSignature(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start);
	void OnSetAvatarImageReuploadFlag__DelegateSignature();
	void OnRefreshPreviewCostume__DelegateSignature(const struct FSBCharaCreateParameter& Parameter);
	void ExecuteUbergraph_MyCharaMenu_Costume(int32 EntryPoint);
	void OnOpenMenu();
	void OnPartsTimeEventStart();
	void OnShowExpiredItemMessage();
	void ResetPreviewAvaterCostume(bool ForceReset);
	void OnPreviewCostumeChange(bool Start);
	void OnCostumeChange();
	void BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void RequestSaveCharaCostumeMultipleEquips();
	void OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc();
	void OnTimerEndForSaveCostumeEquipInfoRequestFailureProc();
	void ExpiredItemNoticeSystemMessageEnd();
	void UpdateCharaImageVisibility_Internal();
	void ExpiredItemNoticeSystemMessageTimerEnd();
	void ConstructCharaImageGraph();
	void DestructCharaImageGraph();
	void OnExistHigherPriorityCapture(class UObject* Sender, class UObject* Param);
	void OnUnexistHigherPriorityCapture(class UObject* Sender, class UObject* Param);
	void BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature(bool InIsDressVisibilitySwitchOn);
	void BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature();
	void BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature();
	void Construct();
	void Init();
	void Destruct();
	void ChangeCostume();
	void OnSaveEquipInfo_Costume(int32 RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void UpdatePlayerCharacterCostume();
	void OnIconSelected_CostumeCandidateList_____(const class FString& InItemUniqueId);
	void OnDetach_CostumeCandidateList_____();
	void DetachCostume();
	void OnOtherCostumeCandidateSelected(bool Param_IsDetach);
	void UpdateCostumeIconTable();
	void OnSaveCostumeEquipDelegate(int32 RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void OnSaveCostumeMultipleEquipsDelegate(int32 RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature();
	void BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(const class FString& InItemUniqueId);
	void BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(bool InIsLeftHand);
	void BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature();
	void BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature(const class FString& InRingUniqueId);
	void Close();
	void GetEquipItemCharaCreateInfoFromEquipItemInfo(const struct FCharaEquipItemInfo& InEquipItemInfo, int32 InMaterialId, ESBCharaEquipType InEquipType, bool IsDetachEquip, bool* IsValid, struct FCharaEquipItemCharaCreateInfo* OutEquipItemCharaCreateInfo);
	void ChangeCostumeProcStart();
	void ChangeCostumeProcTerm();
	void SetAvatarCostumePartsLoadingFlag(bool InIsLoading);
	void GetAvatarCostumePartsLoadingFlag(bool* OutIsAvatarCostumePartsLoading);
	void SetUIBlockerVisibility(bool InIsVisible);
	void ChangeCostumeFunc();
	void ClearNewEquipInfo();
	void AddNewEquipInfo(const struct FCharaEquipItemInfo& NewCostumeEquipItemInfo, const struct FCharaEquipItemCharaCreateInfo& NewCostumeEquipCharaCreateInfo, const ESBCharaEquipType& CostumeEquipType);
	void InitDefaultCostumeData();
	void AddPreviewCostumeItemMulti();
	void AddPreviewCostumeItem(struct FCharaEquipItemInfo& NewCostumeEquipItemInfo, ESBCharaEquipType& CostumeEquipType, struct FCharaEquipItemCharaCreateInfo& NewCostumeEquipCharaCreateInfo);
	void MakeSaveRequestItemData();
	void CheckPreviewUnusedItem(bool* Unused);
	void ChangeDecideButtonVisibility(bool Animation);
	void SetCharaCreateParameter(const struct FCharaEquipItemCharaCreateInfo& CreateInfo);
	void CheckCostumeEquipment(ESBCharaEquipType EquipType, bool* EquipFlag);
	void GetPreviewCostumeUniqueId(ESBCharaEquipType EquipmentType, class FString* UniqueId);
	void IsPreviewMode(bool* Preview);
	void UpdateCostumePreview();
	void OutputEquipmentCostumeLog();
	void UpdateEquippedCostumeInfo();
	void CheckCostumeRingEquipment(const class FString& UniqueId, bool* Equipment, bool* Preview, ESBCharaEquipType* EquipType);
	void UpdatePlayerCharacter_Func();
	void FindConflictingCompositeWearbyEquipInfo(ESBCharaEquipType EquipType, ESBCharacterGender Gender, bool* IsConflict, ESBCharaEquipType* ConflictEquipType);
	void SetDressOnOffButton(bool InIsDressOn);
	void ClearPreviewDatas();
	void LocationToEquipType(ECharaPartsLocation CharaPartsLocation, ESBCharaEquipType* CharaEquipType);
	void OpenExpiredMessageWindow(int32 CostumeId, bool* IsOpen);
	void OnItemListUpdate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_Costume_C">();
	}
	static class UMyCharaMenu_Costume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_Costume_C>();
	}
};
static_assert(alignof(UMyCharaMenu_Costume_C) == 0x000008, "Wrong alignment on UMyCharaMenu_Costume_C");
static_assert(sizeof(UMyCharaMenu_Costume_C) == 0x000F58, "Wrong size on UMyCharaMenu_Costume_C");
static_assert(offsetof(UMyCharaMenu_Costume_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_Costume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewOut) == 0x0002B8, "Member 'UMyCharaMenu_Costume_C::PreviewOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewIn) == 0x0002C0, "Member 'UMyCharaMenu_Costume_C::PreviewIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, AnimIn) == 0x0002C8, "Member 'UMyCharaMenu_Costume_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, ArrowImage) == 0x0002D0, "Member 'UMyCharaMenu_Costume_C::ArrowImage' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, BtnCostumeChange) == 0x0002D8, "Member 'UMyCharaMenu_Costume_C::BtnCostumeChange' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, BtnCostumeRemove) == 0x0002E0, "Member 'UMyCharaMenu_Costume_C::BtnCostumeRemove' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, CandidateListCanvas) == 0x0002E8, "Member 'UMyCharaMenu_Costume_C::CandidateListCanvas' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, CmnOperationRotate) == 0x0002F0, "Member 'UMyCharaMenu_Costume_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, CostumeBG) == 0x0002F8, "Member 'UMyCharaMenu_Costume_C::CostumeBG' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, CostumeChangeBtnCanvas) == 0x000300, "Member 'UMyCharaMenu_Costume_C::CostumeChangeBtnCanvas' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, CostumeChangeMenu) == 0x000308, "Member 'UMyCharaMenu_Costume_C::CostumeChangeMenu' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, CostumeVisibilityOnOffSwitch) == 0x000310, "Member 'UMyCharaMenu_Costume_C::CostumeVisibilityOnOffSwitch' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, EquippedCostumeInfoColumn) == 0x000318, "Member 'UMyCharaMenu_Costume_C::EquippedCostumeInfoColumn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, EquipRingHandSelectDialog) == 0x000320, "Member 'UMyCharaMenu_Costume_C::EquipRingHandSelectDialog' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, Image_Chara) == 0x000328, "Member 'UMyCharaMenu_Costume_C::Image_Chara' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, MoveAnim) == 0x000330, "Member 'UMyCharaMenu_Costume_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PosingSwitch) == 0x000338, "Member 'UMyCharaMenu_Costume_C::PosingSwitch' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewBG) == 0x000340, "Member 'UMyCharaMenu_Costume_C::PreviewBG' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewBgGrp) == 0x000348, "Member 'UMyCharaMenu_Costume_C::PreviewBgGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewLine) == 0x000350, "Member 'UMyCharaMenu_Costume_C::PreviewLine' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, UIBlocker) == 0x000358, "Member 'UMyCharaMenu_Costume_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, SelectedCosUniqueId) == 0x000360, "Member 'UMyCharaMenu_Costume_C::SelectedCosUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, OnChangeCostumeProc) == 0x000370, "Member 'UMyCharaMenu_Costume_C::OnChangeCostumeProc' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, SelectedCostumeEquipType) == 0x000380, "Member 'UMyCharaMenu_Costume_C::SelectedCostumeEquipType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, NewCosEquipItemInfo) == 0x000388, "Member 'UMyCharaMenu_Costume_C::NewCosEquipItemInfo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, NewCosOwnItemInfo) == 0x0003B0, "Member 'UMyCharaMenu_Costume_C::NewCosOwnItemInfo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, IsDetach) == 0x0004C8, "Member 'UMyCharaMenu_Costume_C::IsDetach' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, OnPlayerAvatarRotateActive) == 0x0004D0, "Member 'UMyCharaMenu_Costume_C::OnPlayerAvatarRotateActive' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TickCheck) == 0x0004E0, "Member 'UMyCharaMenu_Costume_C::TickCheck' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, UpdateStopFlag) == 0x0004E1, "Member 'UMyCharaMenu_Costume_C::UpdateStopFlag' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, IsSwitchPosingToPrev) == 0x0004E2, "Member 'UMyCharaMenu_Costume_C::IsSwitchPosingToPrev' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, OnPlayerAvatarSwitchPosing) == 0x0004E8, "Member 'UMyCharaMenu_Costume_C::OnPlayerAvatarSwitchPosing' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, AvatarPoseStateNames) == 0x0004F8, "Member 'UMyCharaMenu_Costume_C::AvatarPoseStateNames' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, NewCostumeEquipItemInfos) == 0x000508, "Member 'UMyCharaMenu_Costume_C::NewCostumeEquipItemInfos' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, NewCostumeEquipItemCharaCreateInfos) == 0x000518, "Member 'UMyCharaMenu_Costume_C::NewCostumeEquipItemCharaCreateInfos' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, CostumeEquipTypes) == 0x000528, "Member 'UMyCharaMenu_Costume_C::CostumeEquipTypes' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, NewCostumeEquipItemCharaCreateInfo) == 0x000538, "Member 'UMyCharaMenu_Costume_C::NewCostumeEquipItemCharaCreateInfo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, CurrentPlayerCharacterGender) == 0x000560, "Member 'UMyCharaMenu_Costume_C::CurrentPlayerCharacterGender' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, IsMultipleCostumeEquipsSaveRequested) == 0x000561, "Member 'UMyCharaMenu_Costume_C::IsMultipleCostumeEquipsSaveRequested' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, OnPlayerAvatarSwitchCostumeOnOff) == 0x000568, "Member 'UMyCharaMenu_Costume_C::OnPlayerAvatarSwitchCostumeOnOff' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, IsDetachingCompositeWear) == 0x000578, "Member 'UMyCharaMenu_Costume_C::IsDetachingCompositeWear' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempPartsLocation) == 0x000579, "Member 'UMyCharaMenu_Costume_C::TempPartsLocation' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempEquipType) == 0x00057A, "Member 'UMyCharaMenu_Costume_C::TempEquipType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempRingUniqueId) == 0x000580, "Member 'UMyCharaMenu_Costume_C::TempRingUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempPartsName) == 0x000590, "Member 'UMyCharaMenu_Costume_C::TempPartsName' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempLeftFingerPartsLocations) == 0x0005A0, "Member 'UMyCharaMenu_Costume_C::TempLeftFingerPartsLocations' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempExpiredEquipmentData) == 0x0005B0, "Member 'UMyCharaMenu_Costume_C::TempExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempIsEquipmentExpired) == 0x0006E0, "Member 'UMyCharaMenu_Costume_C::TempIsEquipmentExpired' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempCharaCreateComp) == 0x0006E8, "Member 'UMyCharaMenu_Costume_C::TempCharaCreateComp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempDeletedCostumes) == 0x0006F0, "Member 'UMyCharaMenu_Costume_C::TempDeletedCostumes' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, InIsAvatarCostumePartsLoading) == 0x000700, "Member 'UMyCharaMenu_Costume_C::InIsAvatarCostumePartsLoading' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, DefaultCostumeEquipTypes) == 0x000708, "Member 'UMyCharaMenu_Costume_C::DefaultCostumeEquipTypes' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, DefaultEquipItemInfo) == 0x000718, "Member 'UMyCharaMenu_Costume_C::DefaultEquipItemInfo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewCostumeItemInfos) == 0x000728, "Member 'UMyCharaMenu_Costume_C::PreviewCostumeItemInfos' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewCostumeEquipTypes) == 0x000738, "Member 'UMyCharaMenu_Costume_C::PreviewCostumeEquipTypes' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewDetachEquipTypes) == 0x000748, "Member 'UMyCharaMenu_Costume_C::PreviewDetachEquipTypes' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewCostumeCharaCreateInfos) == 0x000758, "Member 'UMyCharaMenu_Costume_C::PreviewCostumeCharaCreateInfos' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempPreviewUniqueIds) == 0x000768, "Member 'UMyCharaMenu_Costume_C::TempPreviewUniqueIds' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempPreviewCostumeDatas) == 0x000778, "Member 'UMyCharaMenu_Costume_C::TempPreviewCostumeDatas' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewChangeRequest) == 0x000788, "Member 'UMyCharaMenu_Costume_C::PreviewChangeRequest' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, PreviewCharaCreateParameter) == 0x000790, "Member 'UMyCharaMenu_Costume_C::PreviewCharaCreateParameter' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, OnSetCostumePreviewParameter) == 0x000B50, "Member 'UMyCharaMenu_Costume_C::OnSetCostumePreviewParameter' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, DefaultCharaCreateParameter) == 0x000B60, "Member 'UMyCharaMenu_Costume_C::DefaultCharaCreateParameter' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, OnSetAvatarImageReuploadFlag) == 0x000F20, "Member 'UMyCharaMenu_Costume_C::OnSetAvatarImageReuploadFlag' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, OnRefreshPreviewCostume) == 0x000F30, "Member 'UMyCharaMenu_Costume_C::OnRefreshPreviewCostume' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, TempPreviewEquipInfo) == 0x000F40, "Member 'UMyCharaMenu_Costume_C::TempPreviewEquipInfo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, bExistPriorityCapture) == 0x000F50, "Member 'UMyCharaMenu_Costume_C::bExistPriorityCapture' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, InventoryUpdateRequest) == 0x000F51, "Member 'UMyCharaMenu_Costume_C::InventoryUpdateRequest' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Costume_C, bShouldUploadCharaCreateParameter) == 0x000F52, "Member 'UMyCharaMenu_Costume_C::bShouldUploadCharaCreateParameter' has a wrong offset!");

}

