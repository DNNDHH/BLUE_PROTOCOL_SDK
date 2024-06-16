#pragma once

 

// Package: AppearanceWeaponStickerWeaponSelectMenuWindow

#include "Basic.hpp"

#include "AppearanceWeaponStickerWeaponSelectMenuWindow_classes.hpp"
#include "AppearanceWeaponStickerWeaponSelectMenuWindow_parameters.hpp"


namespace SDK
{

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnDecide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InSelectedWeaponUniqueItemId                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnDecide__DelegateSignature(const class FString& InSelectedWeaponUniqueItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "OnDecide__DelegateSignature");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature Parms{};

	Parms.InSelectedWeaponUniqueItemId = std::move(InSelectedWeaponUniqueItemId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnHideWindowEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsHideWindowCalledByDecide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnHideWindowEnd__DelegateSignature(bool InIsHideWindowCalledByDecide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "OnHideWindowEnd__DelegateSignature");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature Parms{};

	Parms.InIsHideWindowCalledByDecide = InIsHideWindowCalledByDecide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnWeaponIconSelected_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   InSelectedItemIconBtn                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnWeaponIconSelected_____(class UItemIconBtn_C* InSelectedItemIconBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "OnWeaponIconSelected_����");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected_____ Parms{};

	Parms.InSelectedItemIconBtn = InSelectedItemIconBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.UiInputBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::UiInputBlock(bool InIsBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "UiInputBlock");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock Parms{};

	Parms.InIsBlock = InIsBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnSelect_ItemIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   InSelectedIcon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnSelect_ItemIcon(class UItemIconBtn_C* InSelectedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "OnSelect_ItemIcon");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon Parms{};

	Parms.InSelectedIcon = InSelectedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "OnAnimationFinished");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWeaponUnchangeableMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValuesInUnchangeableRetValue                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::ShowWeaponUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "ShowWeaponUnchangeableMessageDialog");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog Parms{};

	Parms.InUnchangeableRetValue = InUnchangeableRetValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponType                           InWeaponType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::ShowWindow(ESBWeaponType InWeaponType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "ShowWindow");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow Parms{};

	Parms.InWeaponType = InWeaponType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.CreateEmptySlotList
// (Public, BlueprintCallable, BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::CreateEmptySlotList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "CreateEmptySlotList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SelectAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SelectAll(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "SelectAll");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ChangeActiveWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActivateListWindow                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInUseAnimation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::ChangeActiveWindow(bool bInActivateListWindow, bool bInUseAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "ChangeActiveWindow");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow Parms{};

	Parms.bInActivateListWindow = bInActivateListWindow;
	Parms.bInUseAnimation = bInUseAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SortList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBOwnItemListContainer*          InOwnItemListContainer                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         InSortType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFilterGroup>             InSortFilterGroup                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBWeaponType                           InWeaponType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutCandidateItemCount                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SortList(class USBOwnItemListContainer* InOwnItemListContainer, ESBItemSortType InSortType, TArray<struct FFilterGroup>& InSortFilterGroup, ESBWeaponType InWeaponType, int32* OutCandidateItemCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "SortList");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList Parms{};

	Parms.InOwnItemListContainer = InOwnItemListContainer;
	Parms.InSortType = InSortType;
	Parms.InSortFilterGroup = std::move(InSortFilterGroup);
	Parms.InWeaponType = InWeaponType;

	UObject::ProcessEvent(Func, &Parms);

	InSortFilterGroup = std::move(Parms.InSortFilterGroup);

	if (OutCandidateItemCount != nullptr)
		*OutCandidateItemCount = Parms.OutCandidateItemCount;
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideAllSlotListItem
// (Public, BlueprintCallable, BlueprintEvent)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::HideAllSlotListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "HideAllSlotListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SetWndPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        WndPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SetWndPos(const struct FVector2D& WndPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerWeaponSelectMenuWindow_C", "SetWndPos");

	Params::AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos Parms{};

	Parms.WndPos = std::move(WndPos);

	UObject::ProcessEvent(Func, &Parms);
}

}

