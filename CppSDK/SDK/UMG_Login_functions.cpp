#pragma once

 

// Package: UMG_Login

#include "Basic.hpp"

#include "UMG_Login_classes.hpp"
#include "UMG_Login_parameters.hpp"


namespace SDK
{

// Function UMG_Login.UMG_Login_C.SaveLoginCache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_Login_C::SaveLoginCache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "SaveLoginCache");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Login_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.ShowWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Login_C::ShowWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "ShowWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.LoadLoginCache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_Login_C::LoadLoginCache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "LoadLoginCache");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Login_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.SetSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EMail                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Password                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    RememberMe                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Login_C::SetSaveData(const class FString& EMail, const class FString& Password, bool RememberMe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "SetSaveData");

	Params::UMG_Login_C_SetSaveData Parms{};

	Parms.EMail = std::move(EMail);
	Parms.Password = std::move(Password);
	Parms.RememberMe = RememberMe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Login.UMG_Login_C.GetSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           EMail                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Password                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    RemenberMe                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Login_C::GetSaveData(class FString* EMail, class FString* Password, bool* RemenberMe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "GetSaveData");

	Params::UMG_Login_C_GetSaveData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EMail != nullptr)
		*EMail = std::move(Parms.EMail);

	if (Password != nullptr)
		*Password = std::move(Parms.Password);

	if (RemenberMe != nullptr)
		*RemenberMe = Parms.RemenberMe;
}


// Function UMG_Login.UMG_Login_C.ShowErrorDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ErrorText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Login_C::ShowErrorDialog(const class FText& ErrorText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "ShowErrorDialog");

	Params::UMG_Login_C_ShowErrorDialog Parms{};

	Parms.ErrorText = std::move(ErrorText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Login.UMG_Login_C.BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_Login_C::BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_Login_C::BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Login_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "OnAnimationFinished");

	Params::UMG_Login_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Login.UMG_Login_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_Login_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.ExecuteUbergraph_UMG_Login
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Login_C::ExecuteUbergraph_UMG_Login(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "ExecuteUbergraph_UMG_Login");

	Params::UMG_Login_C_ExecuteUbergraph_UMG_Login Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Login.UMG_Login_C.OnRegister__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_Login_C::OnRegister__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "OnRegister__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Login.UMG_Login_C.OnLogin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EMail                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Password                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_Login_C::OnLogin__DelegateSignature(const class FString& EMail, const class FString& Password)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Login_C", "OnLogin__DelegateSignature");

	Params::UMG_Login_C_OnLogin__DelegateSignature Parms{};

	Parms.EMail = std::move(EMail);
	Parms.Password = std::move(Password);

	UObject::ProcessEvent(Func, &Parms);
}

}

