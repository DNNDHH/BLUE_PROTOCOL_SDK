#pragma once

 

// Package: AdventurerRank_GuideMessage

#include "Basic.hpp"

#include "AdventurerRank_GuideMessage_classes.hpp"
#include "AdventurerRank_GuideMessage_parameters.hpp"


namespace SDK
{

// Function AdventurerRank_GuideMessage.AdventurerRank_GuideMessage_C.SetAdventureBoardName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             AdventureBoardName                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UAdventurerRank_GuideMessage_C::SetAdventureBoardName(const class FText& AdventureBoardName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_GuideMessage_C", "SetAdventureBoardName");

	Params::AdventurerRank_GuideMessage_C_SetAdventureBoardName Parms{};

	Parms.AdventureBoardName = std::move(AdventureBoardName);

	UObject::ProcessEvent(Func, &Parms);
}

}

