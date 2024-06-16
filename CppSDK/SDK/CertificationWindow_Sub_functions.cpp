#pragma once

 

// Package: CertificationWindow_Sub

#include "Basic.hpp"

#include "CertificationWindow_Sub_classes.hpp"
#include "CertificationWindow_Sub_parameters.hpp"


namespace SDK
{

// Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCertificationWindow_Sub_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_Sub_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Year                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Month                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_Sub_C::OnRequest__DelegateSignature(int32 Year, int32 Month)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_Sub_C", "OnRequest__DelegateSignature");

	Params::CertificationWindow_Sub_C_OnRequest__DelegateSignature Parms{};

	Parms.Year = Year;
	Parms.Month = Month;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow_Sub.CertificationWindow_Sub_C.ExecuteUbergraph_CertificationWindow_Sub
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_Sub_C::ExecuteUbergraph_CertificationWindow_Sub(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_Sub_C", "ExecuteUbergraph_CertificationWindow_Sub");

	Params::CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow_Sub.CertificationWindow_Sub_C.SetText_MasterData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPaymentLimitMasterData        Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCertificationWindow_Sub_C::SetText_MasterData(const struct FSBPaymentLimitMasterData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_Sub_C", "SetText_MasterData");

	Params::CertificationWindow_Sub_C_SetText_MasterData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_AgeLimit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Lower                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Upper                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UCertificationWindow_Sub_C::GetTextId_AgeLimit(int32 Lower, int32 Upper, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_Sub_C", "GetTextId_AgeLimit");

	Params::CertificationWindow_Sub_C_GetTextId_AgeLimit Parms{};

	Parms.Lower = Lower;
	Parms.Upper = Upper;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_ValueLimit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Upper                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UCertificationWindow_Sub_C::GetTextId_ValueLimit(int32 Upper, int32 Value, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_Sub_C", "GetTextId_ValueLimit");

	Params::CertificationWindow_Sub_C_GetTextId_ValueLimit Parms{};

	Parms.Upper = Upper;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_Monthly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Upper                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UCertificationWindow_Sub_C::GetTextId_Monthly(int32 Upper, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_Sub_C", "GetTextId_Monthly");

	Params::CertificationWindow_Sub_C_GetTextId_Monthly Parms{};

	Parms.Upper = Upper;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}

}

