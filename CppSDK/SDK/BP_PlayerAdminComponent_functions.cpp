#pragma once

 

// Package: BP_PlayerAdminComponent

#include "Basic.hpp"

#include "BP_PlayerAdminComponent_classes.hpp"
#include "BP_PlayerAdminComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteUbergraph_BP_PlayerAdminComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::ExecuteUbergraph_BP_PlayerAdminComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "ExecuteUbergraph_BP_PlayerAdminComponent");

	Params::BP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnCanfirmGotoBookmarkMapJamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::OnCanfirmGotoBookmarkMapJamp(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "OnCanfirmGotoBookmarkMapJamp");

	Params::BP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteGotoBookmarkSub
// (Event, Public, BlueprintEvent)
// Parameters:
// class USBAdminGotoBookmarkItem*         BookmarkData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::ExecuteGotoBookmarkSub(class USBAdminGotoBookmarkItem* BookmarkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "ExecuteGotoBookmarkSub");

	Params::BP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub Parms{};

	Parms.BookmarkData = BookmarkData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.SearchPlayerProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::SearchPlayerProfile(const class FString& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "SearchPlayerProfile");

	Params::BP_PlayerAdminComponent_C_SearchPlayerProfile Parms{};

	Parms.CharacterId = std::move(CharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.TravelMapToCharacter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::TravelMapToCharacter(const class FString& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "TravelMapToCharacter");

	Params::BP_PlayerAdminComponent_C_TravelMapToCharacter Parms{};

	Parms.CharacterId = std::move(CharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfo
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                          WorldLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::OutputFoundPlayerInfo(const class FString& CharacterId, const struct FVector& WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "OutputFoundPlayerInfo");

	Params::BP_PlayerAdminComponent_C_OutputFoundPlayerInfo Parms{};

	Parms.CharacterId = std::move(CharacterId);
	Parms.WorldLocation = std::move(WorldLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfoByScreenClick
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerAdminComponent_C::OutputFoundPlayerInfoByScreenClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "OutputFoundPlayerInfoByScreenClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::OnIsGetPlayerProfileDetailMenuDataDelegate_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "OnIsGetPlayerProfileDetailMenuDataDelegate_Event");

	Params::BP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnConfirmAdminWarp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::OnConfirmAdminWarp(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "OnConfirmAdminWarp");

	Params::BP_PlayerAdminComponent_C_OnConfirmAdminWarp Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.WarpPlayerByMapClick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        WorldLocation2d                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAdminComponent_C::WarpPlayerByMapClick(const struct FVector2D& WorldLocation2d)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAdminComponent_C", "WarpPlayerByMapClick");

	Params::BP_PlayerAdminComponent_C_WarpPlayerByMapClick Parms{};

	Parms.WorldLocation2d = std::move(WorldLocation2d);

	UObject::ProcessEvent(Func, &Parms);
}

}

