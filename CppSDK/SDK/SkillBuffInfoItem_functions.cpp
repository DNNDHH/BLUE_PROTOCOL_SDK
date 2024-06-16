#pragma once

 

// Package: SkillBuffInfoItem

#include "Basic.hpp"

#include "SkillBuffInfoItem_classes.hpp"
#include "SkillBuffInfoItem_parameters.hpp"


namespace SDK
{

// Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetSkillBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBuffIconAssetData               InSkillBuffData                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillBuffInfoItem_C::SetSkillBuff(const struct FBuffIconAssetData& InSkillBuffData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillBuffInfoItem_C", "SetSkillBuff");

	Params::SkillBuffInfoItem_C_SetSkillBuff Parms{};

	Parms.InSkillBuffData = std::move(InSkillBuffData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetOverlineVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillBuffInfoItem_C::SetOverlineVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillBuffInfoItem_C", "SetOverlineVisibility");

	Params::SkillBuffInfoItem_C_SetOverlineVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

