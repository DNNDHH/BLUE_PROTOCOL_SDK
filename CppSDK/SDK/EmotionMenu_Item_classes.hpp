#pragma once

 

// Package: EmotionMenu_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmotionMenu_Item.EmotionMenu_Item_C
// 0x0060 (0x02D8 - 0x0278)
class UEmotionMenu_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BgEmpty;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonCmnIcon01Frame_C*              Button;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 Emotion;                                           // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CBC[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectRight;                                     // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDragable;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar_0;                                          // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CheckValidEmote;                                   // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelect__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem);
	void OnSelectRight__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem);
	void ExecuteUbergraph_EmotionMenu_Item(int32 EntryPoint);
	void Construct();
	void Destruct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
	void OnValidEmoteDelegate_Event_0(bool bValid, int32 EmoteId);
	void OnChangeCoolTimeEmotion(bool IsCoolTime);
	void SetEmotion(const class FString& InEmotion);
	void SetEmpty();
	void GetEmotion(class FString* OutEmotion);
	void SetIconSelected(bool Param_IsSelected);
	void IsSelected(bool* Param_bSelected);
	void SetTooptipEnable(bool bEnable);
	void SetEmptyBgColor(int32 ColorType);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void SetDragable(bool InDragable);
	void GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmotionMenu_Item_C">();
	}
	static class UEmotionMenu_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmotionMenu_Item_C>();
	}
};
static_assert(alignof(UEmotionMenu_Item_C) == 0x000008, "Wrong alignment on UEmotionMenu_Item_C");
static_assert(sizeof(UEmotionMenu_Item_C) == 0x0002D8, "Wrong size on UEmotionMenu_Item_C");
static_assert(offsetof(UEmotionMenu_Item_C, UberGraphFrame) == 0x000278, "Member 'UEmotionMenu_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, BgEmpty) == 0x000280, "Member 'UEmotionMenu_Item_C::BgEmpty' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, Button) == 0x000288, "Member 'UEmotionMenu_Item_C::Button' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, CommonIcon) == 0x000290, "Member 'UEmotionMenu_Item_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, OnSelect) == 0x000298, "Member 'UEmotionMenu_Item_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, Emotion) == 0x0002A8, "Member 'UEmotionMenu_Item_C::Emotion' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, bSelected) == 0x0002B8, "Member 'UEmotionMenu_Item_C::bSelected' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, OnSelectRight) == 0x0002C0, "Member 'UEmotionMenu_Item_C::OnSelectRight' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, IsDragable) == 0x0002D0, "Member 'UEmotionMenu_Item_C::IsDragable' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, NewVar_0) == 0x0002D1, "Member 'UEmotionMenu_Item_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_Item_C, CheckValidEmote) == 0x0002D2, "Member 'UEmotionMenu_Item_C::CheckValidEmote' has a wrong offset!");

}

