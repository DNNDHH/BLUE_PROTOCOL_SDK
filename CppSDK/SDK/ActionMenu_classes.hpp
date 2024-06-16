#pragma once

 

// Package: ActionMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ActionMenu.ActionMenu_C
// 0x0040 (0x02B8 - 0x0278)
class UActionMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxGrp;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_68;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnItemSelected;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectItem;                                        // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAllowCencelButton;                                // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnItemSelected__DelegateSignature(int32 SelectItemIndex);
	void ExecuteUbergraph_ActionMenu(int32 EntryPoint);
	void CustomEvent_0();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnClicked_Event_0(class UActionMenuButton_C* Button);
	void AddItem(const class FText& Text);
	void Hide();
	void Destruct();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActionMenu_C">();
	}
	static class UActionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActionMenu_C>();
	}
};
static_assert(alignof(UActionMenu_C) == 0x000008, "Wrong alignment on UActionMenu_C");
static_assert(sizeof(UActionMenu_C) == 0x0002B8, "Wrong size on UActionMenu_C");
static_assert(offsetof(UActionMenu_C, UberGraphFrame) == 0x000278, "Member 'UActionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActionMenu_C, AnimOut) == 0x000280, "Member 'UActionMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UActionMenu_C, AnimIn) == 0x000288, "Member 'UActionMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UActionMenu_C, HBoxGrp) == 0x000290, "Member 'UActionMenu_C::HBoxGrp' has a wrong offset!");
static_assert(offsetof(UActionMenu_C, Image_68) == 0x000298, "Member 'UActionMenu_C::Image_68' has a wrong offset!");
static_assert(offsetof(UActionMenu_C, OnItemSelected) == 0x0002A0, "Member 'UActionMenu_C::OnItemSelected' has a wrong offset!");
static_assert(offsetof(UActionMenu_C, SelectItem) == 0x0002B0, "Member 'UActionMenu_C::SelectItem' has a wrong offset!");
static_assert(offsetof(UActionMenu_C, bAllowCencelButton) == 0x0002B4, "Member 'UActionMenu_C::bAllowCencelButton' has a wrong offset!");

}

