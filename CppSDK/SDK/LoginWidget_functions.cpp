#pragma once

 

// Package: LoginWidget

#include "Basic.hpp"

#include "LoginWidget_classes.hpp"
#include "LoginWidget_parameters.hpp"


namespace SDK
{

// Function LoginWidget.LoginWidget_C.OnLoginCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULoginWidget_C::OnLoginCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "OnLoginCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.ExecuteUbergraph_LoginWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginWidget_C::ExecuteUbergraph_LoginWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "ExecuteUbergraph_LoginWidget");

	Params::LoginWidget_C_ExecuteUbergraph_LoginWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature
// (BlueprintEvent)

void ULoginWidget_C::BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature
// (BlueprintEvent)

void ULoginWidget_C::BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature
// (BlueprintEvent)

void ULoginWidget_C::BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.OnLoginFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginWidget_C::OnLoginFailure(const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "OnLoginFailure");

	Params::LoginWidget_C_OnLoginFailure Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginWidget.LoginWidget_C.OnLoginSuccess
// (Event, Public, BlueprintEvent)

void ULoginWidget_C::OnLoginSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "OnLoginSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.StartBNIDLogin
// (BlueprintCallable, BlueprintEvent)

void ULoginWidget_C::StartBNIDLogin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "StartBNIDLogin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.OnLoginCompleted_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ApiToken                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULoginWidget_C::OnLoginCompleted_Event_0(const class FString& ApiToken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "OnLoginCompleted_Event_0");

	Params::LoginWidget_C_OnLoginCompleted_Event_0 Parms{};

	Parms.ApiToken = std::move(ApiToken);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginWidget.LoginWidget_C.BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           EMail                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Password                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULoginWidget_C::BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature(const class FString& EMail, const class FString& Password)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature");

	Params::LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature Parms{};

	Parms.EMail = std::move(EMail);
	Parms.Password = std::move(Password);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginWidget.LoginWidget_C.OnCheckMaintenanceComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bCheckSucess                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsMaintenance                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginWidget_C::OnCheckMaintenanceComplete(const bool bCheckSucess, const bool bIsMaintenance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "OnCheckMaintenanceComplete");

	Params::LoginWidget_C_OnCheckMaintenanceComplete Parms{};

	Parms.bCheckSucess = bCheckSucess;
	Parms.bIsMaintenance = bIsMaintenance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginWidget.LoginWidget_C.StartBNOLauncherLogin
// (BlueprintCallable, BlueprintEvent)

void ULoginWidget_C::StartBNOLauncherLogin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "StartBNOLauncherLogin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InAuthToken                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULoginWidget_C::BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature(const class FString& InAuthToken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature");

	Params::LoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature Parms{};

	Parms.InAuthToken = std::move(InAuthToken);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginWidget.LoginWidget_C.Try Get Auth Token from Command Line
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginWidget_C::Try_Get_Auth_Token_from_Command_Line()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "Try Get Auth Token from Command Line");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginWidget.LoginWidget_C.OptionServerSavedataLoadRequest
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginWidget_C::OptionServerSavedataLoadRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginWidget_C", "OptionServerSavedataLoadRequest");

	UObject::ProcessEvent(Func, nullptr);
}

}

