#pragma once

 

// Package: WBP_CharaSelect_BustUpImage

#include "Basic.hpp"

#include "WBP_CharaSelect_BustUpImage_classes.hpp"
#include "WBP_CharaSelect_BustUpImage_parameters.hpp"


namespace SDK
{

// Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.ExecuteUbergraph_WBP_CharaSelect_BustUpImage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaSelect_BustUpImage_C::ExecuteUbergraph_WBP_CharaSelect_BustUpImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaSelect_BustUpImage_C", "ExecuteUbergraph_WBP_CharaSelect_BustUpImage");

	Params::WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.PlayFxAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharaSelect_BustUpImage_C::PlayFxAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaSelect_BustUpImage_C", "PlayFxAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetImage
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharaSelect_BustUpImage_C::SetImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaSelect_BustUpImage_C", "SetImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaSelect_BustUpImage_C::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaSelect_BustUpImage_C", "Update");

	Params::WBP_CharaSelect_BustUpImage_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CharacterSelectCaptureBustUp_C*CharacterSelectCaptureBustUp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaSelect_BustUpImage_C::SetTarget(class ABP_CharacterSelectCaptureBustUp_C* CharacterSelectCaptureBustUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaSelect_BustUpImage_C", "SetTarget");

	Params::WBP_CharaSelect_BustUpImage_C_SetTarget Parms{};

	Parms.CharacterSelectCaptureBustUp = CharacterSelectCaptureBustUp;

	UObject::ProcessEvent(Func, &Parms);
}

}

