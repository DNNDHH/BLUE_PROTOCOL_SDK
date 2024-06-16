#pragma once

 

// Package: MyCharaMenu_AchievementList_Item_Tooltip

#include "Basic.hpp"

#include "MyCharaMenu_AchievementList_Item_Tooltip_classes.hpp"
#include "MyCharaMenu_AchievementList_Item_Tooltip_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_AchievementList_Item_Tooltip_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_Tooltip_C", "SetText");

	Params::MyCharaMenu_AchievementList_Item_Tooltip_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             OutText                                                (Parm, OutParm)

void UMyCharaMenu_AchievementList_Item_Tooltip_C::GetText(class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_Tooltip_C", "GetText");

	Params::MyCharaMenu_AchievementList_Item_Tooltip_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}

}

