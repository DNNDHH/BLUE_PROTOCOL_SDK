#pragma once

 

// Package: FixedPhrase_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FixedPhrase_Item.FixedPhrase_Item_C
// 0x0040 (0x02B8 - 0x0278)
class UFixedPhrase_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn24_C*                            CmnBtn24;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSelected;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D3[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectRight;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDragable;                                        // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D4[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnSelect__DelegateSignature(int32 RetFixedPhraseIndex, class UFixedPhrase_Item_C* InSelectedItem);
	void OnSelectRight__DelegateSignature(int32 RetFixedPhraseIndex, class UFixedPhrase_Item_C* InSelectedItem);
	void ExecuteUbergraph_FixedPhrase_Item(int32 EntryPoint);
	void BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void IsSelected(bool* Param_bSelected);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void SetDragable(bool InDragable);
	void GetFixedPhrase(class FString* FixedPhrase);
	void GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FixedPhrase_Item_C">();
	}
	static class UFixedPhrase_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFixedPhrase_Item_C>();
	}
};
static_assert(alignof(UFixedPhrase_Item_C) == 0x000008, "Wrong alignment on UFixedPhrase_Item_C");
static_assert(sizeof(UFixedPhrase_Item_C) == 0x0002B8, "Wrong size on UFixedPhrase_Item_C");
static_assert(offsetof(UFixedPhrase_Item_C, UberGraphFrame) == 0x000278, "Member 'UFixedPhrase_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Item_C, CmnBtn24) == 0x000280, "Member 'UFixedPhrase_Item_C::CmnBtn24' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Item_C, OnSelect) == 0x000288, "Member 'UFixedPhrase_Item_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Item_C, bSelected) == 0x000298, "Member 'UFixedPhrase_Item_C::bSelected' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Item_C, OnSelectRight) == 0x0002A0, "Member 'UFixedPhrase_Item_C::OnSelectRight' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Item_C, IsDragable) == 0x0002B0, "Member 'UFixedPhrase_Item_C::IsDragable' has a wrong offset!");
static_assert(offsetof(UFixedPhrase_Item_C, TextId) == 0x0002B4, "Member 'UFixedPhrase_Item_C::TextId' has a wrong offset!");

}

