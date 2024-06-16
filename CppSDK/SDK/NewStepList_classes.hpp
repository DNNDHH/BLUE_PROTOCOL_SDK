#pragma once

 

// Package: NewStepList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewStepList.NewStepList_C
// 0x0078 (0x0318 - 0x02A0)
class UNewStepList_C final : public USBStepList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOutTitle;                                        // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out3;                                              // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out2;                                              // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out1;                                              // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In3;                                               // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In2;                                               // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In1;                                               // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       TextKey;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       TextKeyBack;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTitle;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTitleBack;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           SetupListEventHandle;                              // 0x0308(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          OpenStorageShop;                                   // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StorageItemUpdate;                                 // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_NewStepList(int32 EntryPoint);
	void Construct();
	void CustomEvent();
	void RequestSetupList();
	void OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindUIVisible();
	void BindUIVisible();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void CustomEvent_3(class UObject* Sender, class UObject* Param);
	void CustomEvent_2(class UObject* Sender, class UObject* Param);
	void OnUpdateItems();
	void UnbindUpdateItems();
	void BindUpdateItems();
	void OnClearConditionComplete(const class FName& InDungeonName);
	void OnClearConditionChangeStep(const int32 InCurStep);
	void OnClearConditionUpdateProgress(const struct FDungeonClearConditionProgressItemInfo& InProgressItem, const int32 InStepNum, const int32 InProgressIndex);
	void OnClearConditionChange();
	void UnbindGameState();
	void BindGameState();
	void OnAdventurerRankChange(const int32 InRetCode);
	void UnbindAdventurerComponent();
	void BindAdventurerComponent();
	void OnLeaveInterruptQuest(const class FName& InQuestId);
	void OnRepInterruptQuest(const struct FSBInterruptQuestPlayInfo& InPlayInfo);
	void OnUpdateProgressInterruptQuest(class USBPlayerInterruptQuestComponent* InComponent);
	void OnFailedInterruptQuest(const class FName& InQuestId);
	void OnSuccessInterruptQuest(const class FName& InQuestId, bool InSuccess);
	void OnJoinInterruptQuest(class USBPlayerInterruptQuestComponent* InComponent, const bool bInFirst);
	void UnbindInterruptQuestComponent();
	void BindInterruptQuestComponent();
	void OnWarehouseAbilityUpdate(const TArray<struct FSBWarehouseAbilityNotifyUIInfo>& UIInfo);
	void UnbindWarehouseAbilityComponent();
	void BindWarehouseAbilityComponent();
	void OnSaveQuestCheckList(const bool bWasSuccessful);
	void UnbindCommonComponent();
	void BindCommonComponent();
	void OnAcceptedQuestList();
	void UnbindQuestComponent();
	void BindQuestComponent();
	void OnGetMyCharaInfo(bool Result);
	void UnbindGetMyCharaInfo();
	void BindGetMyCharaInfo();
	void UnbindPlayer();
	void BindPlayer();
	void CustomEvent_1(class UObject* Sender, class UObject* Param);
	void CustomEvent_0(class UObject* Sender, class UObject* Param);
	void OnLoadRouteGuideQuestId(class UObject* Sender, class UObject* Param);
	void OnUpdateRouteGuideSetting(class UObject* Sender, class UObject* Param);
	void QuestListDebug(class UObject* Sender, class UObject* Param);
	void OnCancelQuest(class UObject* Sender, class UObject* Param);
	void OnCompleteQuest(class UObject* Sender, class UObject* Param);
	void OnUpdateQuestProgress(class UObject* Sender, class UObject* Param);
	void OnAcceptQuest(class UObject* Sender, class UObject* Param);
	void RemoveReceiver();
	void AddReceiver();
	void OnUpdateWishlist();
	void UnbindWishlist();
	void BindWishlist();
	void OnChangeHUDDrawAdventureBoard(const struct FSBAdventureBoardParam& InBoardParam, int32 InRetCode);
	void OnGetRewardAdventureBoardAllPanel(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32 InRetCode);
	void OnGetRewardAdventureBoardPanel(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32 InRetCode);
	void OnChangeActiveAdventureBoard(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, int32 InRetCode);
	void OnComplateAdventureBoard(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32 InRetCode);
	void OnAchievementedAdventureBoardPanel(const TArray<struct FSBAdventureBoardPanelParam>& PanelList, int32 InPanelId, int32 RetCode);
	void OnLoadAdventureBoard(int32 RetCode);
	void OnUpdateAdventureBoard(int32 RetCode);
	void OnChangeFavoriteAdventureBoard(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, int32 InRetCode);
	void UnbindAdventureBoardComponent();
	void BindAdventureBoardComponent();
	void BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature();
	void BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature();
	void BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature();
	void PlayAnimationIn1();
	void PlayAnimationIn2();
	void PlayAnimationIn3();
	void PlayAnimationOut1();
	void PlayAnimationOut2();
	void PlayAnimationOut3();
	void Bind();
	void Unbind();
	void OnSetupTitle(class FName TitleTextId, class FName TitleBackTextID);
	void OnSetupKeyGuide();
	void PlayAnim();

	bool IsPlayAnimIn() const;
	bool IsPlayAnimationIn1() const;
	bool IsPlayAnimationIn2() const;
	bool IsPlayAnimationIn3() const;
	bool IsPlayAnimOut() const;
	bool IsPlayAnimationOut1() const;
	bool IsPlayAnimationOut2() const;
	bool IsPlayAnimationOut3() const;
	bool IsPlayAnim() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewStepList_C">();
	}
	static class UNewStepList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewStepList_C>();
	}
};
static_assert(alignof(UNewStepList_C) == 0x000008, "Wrong alignment on UNewStepList_C");
static_assert(sizeof(UNewStepList_C) == 0x000318, "Wrong size on UNewStepList_C");
static_assert(offsetof(UNewStepList_C, UberGraphFrame) == 0x0002A0, "Member 'UNewStepList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, InOutTitle) == 0x0002A8, "Member 'UNewStepList_C::InOutTitle' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, Out3) == 0x0002B0, "Member 'UNewStepList_C::Out3' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, Out2) == 0x0002B8, "Member 'UNewStepList_C::Out2' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, Out1) == 0x0002C0, "Member 'UNewStepList_C::Out1' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, In3) == 0x0002C8, "Member 'UNewStepList_C::In3' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, In2) == 0x0002D0, "Member 'UNewStepList_C::In2' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, In1) == 0x0002D8, "Member 'UNewStepList_C::In1' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, CPVisibleSetting) == 0x0002E0, "Member 'UNewStepList_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, TextKey) == 0x0002E8, "Member 'UNewStepList_C::TextKey' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, TextKeyBack) == 0x0002F0, "Member 'UNewStepList_C::TextKeyBack' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, TextTitle) == 0x0002F8, "Member 'UNewStepList_C::TextTitle' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, TextTitleBack) == 0x000300, "Member 'UNewStepList_C::TextTitleBack' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, SetupListEventHandle) == 0x000308, "Member 'UNewStepList_C::SetupListEventHandle' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, OpenStorageShop) == 0x000310, "Member 'UNewStepList_C::OpenStorageShop' has a wrong offset!");
static_assert(offsetof(UNewStepList_C, StorageItemUpdate) == 0x000311, "Member 'UNewStepList_C::StorageItemUpdate' has a wrong offset!");

}

