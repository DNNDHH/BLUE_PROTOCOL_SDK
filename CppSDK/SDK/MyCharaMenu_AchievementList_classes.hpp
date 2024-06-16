#pragma once

 

// Package: MyCharaMenu_AchievementList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C
// 0x00B8 (0x0368 - 0x02B0)
class UMyCharaMenu_AchievementList_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrLoopId;                                        // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F39[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       CurrUniformGridSlot;                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLoadAchievement;                                 // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClosingUI;                                       // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F3A[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AchievementList_Item_C*    CurrAchievementListItem;                           // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectAchievement;                               // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBindedToOnLoadAchievementDelgate;                // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F3B[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             LoadedAchievements;                                // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FAchievementMasterData>         AchievementMasterDatas;                            // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         AchievementSelected;                               // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindedToOnSaveAchievementSelectedDelgate;        // 0x0364(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void OnLoadAchievement__DelegateSignature(bool InResult);
	void OnSelectAchievement__DelegateSignature(int32 InAchievementId);
	void ExecuteUbergraph_MyCharaMenu_AchievementList(int32 EntryPoint);
	void BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnPress_Cancel();
	void OnLoadAchievementDelegate(const bool Result, const TArray<struct FSBAchievementInfo>& AchievementList);
	void OnSelected_Item(class UMyCharaMenu_AchievementList_Item_C* InSelectedItem);
	void Setup_AchievementList(const TArray<struct FSBAchievementInfo>& InAchievements);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void Close();
	void IsClosing(bool* OutIsClosing);
	void FindAchievementFromList(int32 InAchievementId, bool* IsExists, class UMyCharaMenu_AchievementList_Item_C** OutListItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_AchievementList_C">();
	}
	static class UMyCharaMenu_AchievementList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_AchievementList_C>();
	}
};
static_assert(alignof(UMyCharaMenu_AchievementList_C) == 0x000008, "Wrong alignment on UMyCharaMenu_AchievementList_C");
static_assert(sizeof(UMyCharaMenu_AchievementList_C) == 0x000368, "Wrong size on UMyCharaMenu_AchievementList_C");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_AchievementList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, AnimOut) == 0x0002B8, "Member 'UMyCharaMenu_AchievementList_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, AnimIn) == 0x0002C0, "Member 'UMyCharaMenu_AchievementList_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, BtnScreen) == 0x0002C8, "Member 'UMyCharaMenu_AchievementList_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, CmnClose02) == 0x0002D0, "Member 'UMyCharaMenu_AchievementList_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, ScrollBox_0) == 0x0002D8, "Member 'UMyCharaMenu_AchievementList_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, UIBlocker) == 0x0002E0, "Member 'UMyCharaMenu_AchievementList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, OnClose) == 0x0002E8, "Member 'UMyCharaMenu_AchievementList_C::OnClose' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, CurrLoopId) == 0x0002F8, "Member 'UMyCharaMenu_AchievementList_C::CurrLoopId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, CurrUniformGridSlot) == 0x000300, "Member 'UMyCharaMenu_AchievementList_C::CurrUniformGridSlot' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, OnLoadAchievement) == 0x000308, "Member 'UMyCharaMenu_AchievementList_C::OnLoadAchievement' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, IsClosingUI) == 0x000318, "Member 'UMyCharaMenu_AchievementList_C::IsClosingUI' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, CurrAchievementListItem) == 0x000320, "Member 'UMyCharaMenu_AchievementList_C::CurrAchievementListItem' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, OnSelectAchievement) == 0x000328, "Member 'UMyCharaMenu_AchievementList_C::OnSelectAchievement' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, IsBindedToOnLoadAchievementDelgate) == 0x000338, "Member 'UMyCharaMenu_AchievementList_C::IsBindedToOnLoadAchievementDelgate' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, LoadedAchievements) == 0x000340, "Member 'UMyCharaMenu_AchievementList_C::LoadedAchievements' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, AchievementMasterDatas) == 0x000350, "Member 'UMyCharaMenu_AchievementList_C::AchievementMasterDatas' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, AchievementSelected) == 0x000360, "Member 'UMyCharaMenu_AchievementList_C::AchievementSelected' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_C, IsBindedToOnSaveAchievementSelectedDelgate) == 0x000364, "Member 'UMyCharaMenu_AchievementList_C::IsBindedToOnSaveAchievementSelectedDelgate' has a wrong offset!");

}

