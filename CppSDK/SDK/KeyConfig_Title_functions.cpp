#pragma once

 

// Package: KeyConfig_Title

#include "Basic.hpp"

#include "KeyConfig_Title_classes.hpp"
#include "KeyConfig_Title_parameters.hpp"


namespace SDK
{

// Function KeyConfig_Title.KeyConfig_Title_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Title_C::SetTitle(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Title_C", "SetTitle");

	Params::KeyConfig_Title_C_SetTitle Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}

}

