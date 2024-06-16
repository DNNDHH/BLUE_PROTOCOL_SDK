#pragma once

 

// Package: CommandMenuCommonSubButtonList

#include "Basic.hpp"

#include "CommandMenuCommonSubButtonList_classes.hpp"
#include "CommandMenuCommonSubButtonList_parameters.hpp"


namespace SDK
{

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButtonList_C::OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "OnClick__DelegateSignature");

	Params::CommandMenuCommonSubButtonList_C_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExecuteUbergraph_CommandMenuCommonSubButtonList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButtonList_C::ExecuteUbergraph_CommandMenuCommonSubButtonList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "ExecuteUbergraph_CommandMenuCommonSubButtonList");

	Params::CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Alpha_Renew2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     Param_TextIdNameList                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommandMenuCommonSubButtonList_C::Alpha_Renew2(const TArray<class FName>& Param_TextIdNameList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "Alpha_Renew2");

	Params::CommandMenuCommonSubButtonList_C_Alpha_Renew2 Parms{};

	Parms.Param_TextIdNameList = std::move(Param_TextIdNameList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButtonList_C::OnClick_Event_0(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "OnClick_Event_0");

	Params::CommandMenuCommonSubButtonList_C_OnClick_Event_0 Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CommandMenuCommonSubButton_OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButtonList_C::CommandMenuCommonSubButton_OnClick(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "CommandMenuCommonSubButton_OnClick");

	Params::CommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButtonList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "Tick");

	Params::CommandMenuCommonSubButtonList_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenuCommonSubButtonList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButtonList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "PreConstruct");

	Params::CommandMenuCommonSubButtonList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ChangeFocusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InFocusButtonId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSyncCursorPosition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButtonList_C::ChangeFocusButton(int32 InFocusButtonId, bool bSyncCursorPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "ChangeFocusButton");

	Params::CommandMenuCommonSubButtonList_C_ChangeFocusButton Parms{};

	Parms.InFocusButtonId = InFocusButtonId;
	Parms.bSyncCursorPosition = bSyncCursorPosition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InButtonId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsButtonEnable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButtonList_C::SetButtonEnable(int32 InButtonId, bool IsButtonEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "SetButtonEnable");

	Params::CommandMenuCommonSubButtonList_C_SetButtonEnable Parms{};

	Parms.InButtonId = InButtonId;
	Parms.IsButtonEnable = IsButtonEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetUIBlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButtonList_C::SetUIBlock(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "SetUIBlock");

	Params::CommandMenuCommonSubButtonList_C_SetUIBlock Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PurgeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButtonList_C::PurgeButton(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "PurgeButton");

	Params::CommandMenuCommonSubButtonList_C_PurgeButton Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.InAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenuCommonSubButtonList_C::InAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "InAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExcramationIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButtonList_C::ExcramationIconVisible(int32 ButtonId, bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "ExcramationIconVisible");

	Params::CommandMenuCommonSubButtonList_C_ExcramationIconVisible Parms{};

	Parms.ButtonId = ButtonId;
	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButtonList_C::SetButtonText(int32 ListId, class FName Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "SetButtonText");

	Params::CommandMenuCommonSubButtonList_C_SetButtonText Parms{};

	Parms.ListId = ListId;
	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetBookmarkEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InButtonId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButtonList_C::SetBookmarkEnable(int32 InButtonId, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "SetBookmarkEnable");

	Params::CommandMenuCommonSubButtonList_C_SetBookmarkEnable Parms{};

	Parms.InButtonId = InButtonId;
	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Bookmark Array Enable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   BookmarkNameList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommandMenuCommonSubButtonList_C::Set_Bookmark_Array_Enable(TArray<class FString>& BookmarkNameList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "Set Bookmark Array Enable");

	Params::CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable Parms{};

	Parms.BookmarkNameList = std::move(BookmarkNameList);

	UObject::ProcessEvent(Func, &Parms);

	BookmarkNameList = std::move(Parms.BookmarkNameList);
}


// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Button Abort Anim and Collapse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InButtonId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButtonList_C::Set_Button_Abort_Anim_and_Collapse(int32 InButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButtonList_C", "Set Button Abort Anim and Collapse");

	Params::CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse Parms{};

	Parms.InButtonId = InButtonId;

	UObject::ProcessEvent(Func, &Parms);
}

}

