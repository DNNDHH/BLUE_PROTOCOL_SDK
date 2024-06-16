#pragma once

 

// Package: UMG_BNIDLoginBrowser

#include "Basic.hpp"

#include "UMG_BNIDLoginBrowser_classes.hpp"
#include "UMG_BNIDLoginBrowser_parameters.hpp"


namespace SDK
{

// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_BNIDLoginBrowser_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_BNIDLoginBrowser_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_BNIDLoginBrowser_C::BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_BNIDLoginBrowser_C", "BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature");

	Params::UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.LoginCompleted
// (BlueprintCallable, BlueprintEvent)

void UUMG_BNIDLoginBrowser_C::LoginCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_BNIDLoginBrowser_C", "LoginCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_BNIDLoginBrowser_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_BNIDLoginBrowser_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Frame                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_BNIDLoginBrowser_C::BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_BNIDLoginBrowser_C", "BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature");

	Params::UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature Parms{};

	Parms.URL = std::move(URL);
	Parms.Frame = std::move(Frame);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.ExecuteUbergraph_UMG_BNIDLoginBrowser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BNIDLoginBrowser_C::ExecuteUbergraph_UMG_BNIDLoginBrowser(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_BNIDLoginBrowser_C", "ExecuteUbergraph_UMG_BNIDLoginBrowser");

	Params::UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.OnLoginCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ApiToken                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_BNIDLoginBrowser_C::OnLoginCompleted__DelegateSignature(const class FString& Param_ApiToken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_BNIDLoginBrowser_C", "OnLoginCompleted__DelegateSignature");

	Params::UMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature Parms{};

	Parms.Param_ApiToken = std::move(Param_ApiToken);

	UObject::ProcessEvent(Func, &Parms);
}

}

