#pragma once

 

// Package: CommonIconToolTipContent_Single

#include "Basic.hpp"

#include "CommonIconToolTipContent_Single_classes.hpp"
#include "CommonIconToolTipContent_Single_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetBrokenData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonIconToolTipContent_Single_C::SetBrokenData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Single_C", "SetBrokenData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Single_C::SetAmount(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Single_C", "SetAmount");

	Params::CommonIconToolTipContent_Single_C_SetAmount Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetEmotion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Single_C::SetEmotion(class FName InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Single_C", "SetEmotion");

	Params::CommonIconToolTipContent_Single_C_SetEmotion Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetTypeOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Single_C::SetTypeOnly(ESBRewardItemType RewardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Single_C", "SetTypeOnly");

	Params::CommonIconToolTipContent_Single_C_SetTypeOnly Parms{};

	Parms.RewardType = RewardType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Single_C::SetText(const class FString& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Single_C", "SetText");

	Params::CommonIconToolTipContent_Single_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

