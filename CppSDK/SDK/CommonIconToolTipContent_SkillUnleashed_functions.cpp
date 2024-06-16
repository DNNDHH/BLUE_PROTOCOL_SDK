#pragma once

 

// Package: CommonIconToolTipContent_SkillUnleashed

#include "Basic.hpp"

#include "CommonIconToolTipContent_SkillUnleashed_classes.hpp"
#include "CommonIconToolTipContent_SkillUnleashed_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_SkillUnleashed.CommonIconToolTipContent_SkillUnleashed_C.SetInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ClassLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Conditions01                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Conditions02                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContent_SkillUnleashed_C::SetInfo(const class FText& ClassLevel, const class FText& Conditions01, const class FText& Conditions02)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_SkillUnleashed_C", "SetInfo");

	Params::CommonIconToolTipContent_SkillUnleashed_C_SetInfo Parms{};

	Parms.ClassLevel = std::move(ClassLevel);
	Parms.Conditions01 = std::move(Conditions01);
	Parms.Conditions02 = std::move(Conditions02);

	UObject::ProcessEvent(Func, &Parms);
}

}

