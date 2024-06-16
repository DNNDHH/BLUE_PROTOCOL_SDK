#pragma once

 

// Package: MyCharaMenu_AchievementList

#include "Basic.hpp"

#include "MyCharaMenu_AchievementList_classes.hpp"
#include "MyCharaMenu_AchievementList_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_AchievementList_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_AchievementList_C::OnLoadAchievement__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "OnLoadAchievement__DelegateSignature");

	Params::MyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelectAchievement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_C::OnSelectAchievement__DelegateSignature(int32 InAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "OnSelectAchievement__DelegateSignature");

	Params::MyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.ExecuteUbergraph_MyCharaMenu_AchievementList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_C::ExecuteUbergraph_MyCharaMenu_AchievementList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "ExecuteUbergraph_MyCharaMenu_AchievementList");

	Params::MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_AchievementList_C::BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_AchievementList_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "OnAnimationFinished");

	Params::MyCharaMenu_AchievementList_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UMyCharaMenu_AchievementList_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievementDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBAchievementInfo>       AchievementList                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_AchievementList_C::OnLoadAchievementDelegate(const bool Result, const TArray<struct FSBAchievementInfo>& AchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "OnLoadAchievementDelegate");

	Params::MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate Parms{};

	Parms.Result = Result;
	Parms.AchievementList = std::move(AchievementList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelected_Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_Item_C*InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_C::OnSelected_Item(class UMyCharaMenu_AchievementList_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "OnSelected_Item");

	Params::MyCharaMenu_AchievementList_C_OnSelected_Item Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Setup_AchievementList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBAchievementInfo>       InAchievements                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_AchievementList_C::Setup_AchievementList(const TArray<struct FSBAchievementInfo>& InAchievements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "Setup_AchievementList");

	Params::MyCharaMenu_AchievementList_C_Setup_AchievementList Parms{};

	Parms.InAchievements = std::move(InAchievements);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_AchievementList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_AchievementList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "PreConstruct");

	Params::MyCharaMenu_AchievementList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_AchievementList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_AchievementList_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.IsClosing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsClosing                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_AchievementList_C::IsClosing(bool* OutIsClosing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "IsClosing");

	Params::MyCharaMenu_AchievementList_C_IsClosing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsClosing != nullptr)
		*OutIsClosing = Parms.OutIsClosing;
}


// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.FindAchievementFromList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExists                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMyCharaMenu_AchievementList_Item_C*OutListItem                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_C::FindAchievementFromList(int32 InAchievementId, bool* IsExists, class UMyCharaMenu_AchievementList_Item_C** OutListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_C", "FindAchievementFromList");

	Params::MyCharaMenu_AchievementList_C_FindAchievementFromList Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsExists != nullptr)
		*IsExists = Parms.IsExists;

	if (OutListItem != nullptr)
		*OutListItem = Parms.OutListItem;
}

}

