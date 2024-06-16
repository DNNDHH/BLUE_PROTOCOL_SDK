#pragma once

 

// Package: LibraryMenu_AchievementListItem

#include "Basic.hpp"

#include "LibraryMenu_AchievementListItem_classes.hpp"
#include "LibraryMenu_AchievementListItem_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ListIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementListItem_C::OnClick__DelegateSignature(int32 Param_ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "OnClick__DelegateSignature");

	Params::LibraryMenu_AchievementListItem_C_OnClick__DelegateSignature Parms{};

	Parms.Param_ListIndex = Param_ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.EventCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_ListIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementListItem_C::EventCheckStateChanged__DelegateSignature(bool IsChecked, int32 Param_ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "EventCheckStateChanged__DelegateSignature");

	Params::LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Param_ListIndex = Param_ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.ExecuteUbergraph_LibraryMenu_AchievementListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementListItem_C::ExecuteUbergraph_LibraryMenu_AchievementListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "ExecuteUbergraph_LibraryMenu_AchievementListItem");

	Params::LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_AchievementListItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_AchievementListItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_AchievementListItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_AchievementListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_AchievementListItem_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetBtnSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementListItem_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "SetBtnSelected");

	Params::LibraryMenu_AchievementListItem_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetExcramationIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementListItem_C::SetExcramationIconVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "SetExcramationIconVisible");

	Params::LibraryMenu_AchievementListItem_C_SetExcramationIconVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InObjectNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InObejectKind                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementListItem_C::SetProgress(int32 InObjectNum, int32 InProgress, int32 InObejectKind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "SetProgress");

	Params::LibraryMenu_AchievementListItem_C_SetProgress Parms{};

	Parms.InObjectNum = InObjectNum;
	Parms.InProgress = InProgress;
	Parms.InObejectKind = InObejectKind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetRewardIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   RewardIdList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsClear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsRecievedReward                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsTermEnd                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementListItem_C::SetRewardIcon(TArray<class FString>& RewardIdList, bool IsClear, bool IsRecievedReward, bool IsTermEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "SetRewardIcon");

	Params::LibraryMenu_AchievementListItem_C_SetRewardIcon Parms{};

	Parms.RewardIdList = std::move(RewardIdList);
	Parms.IsClear = IsClear;
	Parms.IsRecievedReward = IsRecievedReward;
	Parms.IsTermEnd = IsTermEnd;

	UObject::ProcessEvent(Func, &Parms);

	RewardIdList = std::move(Parms.RewardIdList);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementTitleIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementListItem_C::SetVisibilityAchievementTitleIcon(bool IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "SetVisibilityAchievementTitleIcon");

	Params::LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementEventTermIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementListItem_C::SetVisibilityAchievementEventTermIcon(bool IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "SetVisibilityAchievementEventTermIcon");

	Params::LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetFontColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Specified_Color                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementListItem_C::SetFontColor(const struct FLinearColor& Specified_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementListItem_C", "SetFontColor");

	Params::LibraryMenu_AchievementListItem_C_SetFontColor Parms{};

	Parms.Specified_Color = std::move(Specified_Color);

	UObject::ProcessEvent(Func, &Parms);
}

}

