#pragma once

 

// Package: WBP_EmotionIconScroolBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_EmotionIconScroolBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEmotionMenu_Item_C*                    EmotionMenu_Item;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             Grid_Emotion;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectEmotionItem;                               // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         EmoteMaxLen;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem);
	void ExecuteUbergraph_WBP_EmotionIconScroolBox(int32 EntryPoint);
	void Event_OnSelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem);
	void Destruct_Emotion();
	void CreateEmotionIcon(TArray<class FString>& InEmotionList);
	void CreateEmotionEmptySlot(int32 InSlotCount);
	void RefreshEmotion(TArray<class FString>& InEmotionList);
	void ClearEmotionSlot();
	void UpdateEmoteIconEnable();
	void IsEnableEmoteIcon(class FName EmoteId, bool* bIsEnable);
	void SetSelectedIcon(class UObject* InSelectedItem);
	void SetDragableItem(bool InDragable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EmotionIconScroolBox_C">();
	}
	static class UWBP_EmotionIconScroolBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EmotionIconScroolBox_C>();
	}
};
static_assert(alignof(UWBP_EmotionIconScroolBox_C) == 0x000008, "Wrong alignment on UWBP_EmotionIconScroolBox_C");
static_assert(sizeof(UWBP_EmotionIconScroolBox_C) == 0x0002A8, "Wrong size on UWBP_EmotionIconScroolBox_C");
static_assert(offsetof(UWBP_EmotionIconScroolBox_C, UberGraphFrame) == 0x000278, "Member 'UWBP_EmotionIconScroolBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EmotionIconScroolBox_C, EmotionMenu_Item) == 0x000280, "Member 'UWBP_EmotionIconScroolBox_C::EmotionMenu_Item' has a wrong offset!");
static_assert(offsetof(UWBP_EmotionIconScroolBox_C, Grid_Emotion) == 0x000288, "Member 'UWBP_EmotionIconScroolBox_C::Grid_Emotion' has a wrong offset!");
static_assert(offsetof(UWBP_EmotionIconScroolBox_C, OnSelectEmotionItem) == 0x000290, "Member 'UWBP_EmotionIconScroolBox_C::OnSelectEmotionItem' has a wrong offset!");
static_assert(offsetof(UWBP_EmotionIconScroolBox_C, EmoteMaxLen) == 0x0002A0, "Member 'UWBP_EmotionIconScroolBox_C::EmoteMaxLen' has a wrong offset!");

}

