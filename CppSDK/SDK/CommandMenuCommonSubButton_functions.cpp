#pragma once

 

// Package: CommandMenuCommonSubButton

#include "Basic.hpp"

#include "CommandMenuCommonSubButton_classes.hpp"
#include "CommandMenuCommonSubButton_parameters.hpp"


namespace SDK
{

// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ButtonId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButton_C::OnClick__DelegateSignature(int32 Param_ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "OnClick__DelegateSignature");

	Params::CommandMenuCommonSubButton_C_OnClick__DelegateSignature Parms{};

	Parms.Param_ButtonId = Param_ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExecuteUbergraph_CommandMenuCommonSubButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButton_C::ExecuteUbergraph_CommandMenuCommonSubButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "ExecuteUbergraph_CommandMenuCommonSubButton");

	Params::CommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.AbortAnimAndCollapse
// (BlueprintCallable, BlueprintEvent)

void UCommandMenuCommonSubButton_C::AbortAnimAndCollapse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "AbortAnimAndCollapse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExcramationIconVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButton_C::ExcramationIconVisible(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "ExcramationIconVisible");

	Params::CommandMenuCommonSubButton_C_ExcramationIconVisible Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.EventInAnimation
// (BlueprintCallable, BlueprintEvent)

void UCommandMenuCommonSubButton_C::EventInAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "EventInAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenuCommonSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenuCommonSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenuCommonSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenuCommonSubButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "PreConstruct");

	Params::CommandMenuCommonSubButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Set Menu Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InFocus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButton_C::Set_Menu_Focus(bool InFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "Set Menu Focus");

	Params::CommandMenuCommonSubButton_C_Set_Menu_Focus Parms{};

	Parms.InFocus = InFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButton_C::SetEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "SetEnable");

	Params::CommandMenuCommonSubButton_C_SetEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           BtnType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuCommonSubButton_C::SetBtnImage(class UImage* BtnType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "SetBtnImage");

	Params::CommandMenuCommonSubButton_C_SetBtnImage Parms{};

	Parms.BtnType = BtnType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommandMenuCommonSubButton_C::SetBtnText(const class FText& Param_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "SetBtnText");

	Params::CommandMenuCommonSubButton_C_SetBtnText Parms{};

	Parms.Param_Text = std::move(Param_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBookmarkEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuCommonSubButton_C::SetBookmarkEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuCommonSubButton_C", "SetBookmarkEnable");

	Params::CommandMenuCommonSubButton_C_SetBookmarkEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

