#pragma once

 

// Package: AestheShop_TicketDescWindow

#include "Basic.hpp"

#include "AestheShop_TicketDescWindow_classes.hpp"
#include "AestheShop_TicketDescWindow_parameters.hpp"


namespace SDK
{

// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.ExecuteUbergraph_AestheShop_TicketDescWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketDescWindow_C::ExecuteUbergraph_AestheShop_TicketDescWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "ExecuteUbergraph_AestheShop_TicketDescWindow");

	Params::AestheShop_TicketDescWindow_C_ExecuteUbergraph_AestheShop_TicketDescWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAestheShop_TicketDescWindow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "PreConstruct");

	Params::AestheShop_TicketDescWindow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCourseId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBCharacterToken>        InHoldTicketTokens                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAestheShop_TicketDescWindow_C::Setup(int32 InCourseId, TArray<struct FSBCharacterToken>& InHoldTicketTokens)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "Setup");

	Params::AestheShop_TicketDescWindow_C_Setup Parms{};

	Parms.InCourseId = InCourseId;
	Parms.InHoldTicketTokens = std::move(InHoldTicketTokens);

	UObject::ProcessEvent(Func, &Parms);

	InHoldTicketTokens = std::move(Parms.InHoldTicketTokens);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        InIconTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAestheShop_TicketDescWindow_C::SetCourseIconTexture(TSoftObjectPtr<class UTexture2D> InIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "SetCourseIconTexture");

	Params::AestheShop_TicketDescWindow_C_SetCourseIconTexture Parms{};

	Parms.InIconTexture = InIconTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InNameText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UAestheShop_TicketDescWindow_C::SetCourseName(const class FText& InNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "SetCourseName");

	Params::AestheShop_TicketDescWindow_C_SetCourseName Parms{};

	Parms.InNameText = std::move(InNameText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseDesc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InCourseDesc                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAestheShop_TicketDescWindow_C::SetCourseDesc(const class FText& InCourseDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "SetCourseDesc");

	Params::AestheShop_TicketDescWindow_C_SetCourseDesc Parms{};

	Parms.InCourseDesc = std::move(InCourseDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetTicketName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTicketName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAestheShop_TicketDescWindow_C::SetTicketName(const class FText& InTicketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "SetTicketName");

	Params::AestheShop_TicketDescWindow_C_SetTicketName Parms{};

	Parms.InTicketName = std::move(InTicketName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetUseTicketNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InUseTicketNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketDescWindow_C::SetUseTicketNum(int32 InUseTicketNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "SetUseTicketNum");

	Params::AestheShop_TicketDescWindow_C_SetUseTicketNum Parms{};

	Parms.InUseTicketNum = InUseTicketNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetHoldTicketNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InHoldTicketNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketDescWindow_C::SetHoldTicketNum(int32 InHoldTicketNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "SetHoldTicketNum");

	Params::AestheShop_TicketDescWindow_C_SetHoldTicketNum Parms{};

	Parms.InHoldTicketNum = InHoldTicketNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.UpdateAvailableCategoryIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBAestheShopCourseMasterData    InAestheCourseMaster                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAestheShop_TicketDescWindow_C::UpdateAvailableCategoryIcons(const struct FSBAestheShopCourseMasterData& InAestheCourseMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "UpdateAvailableCategoryIcons");

	Params::AestheShop_TicketDescWindow_C_UpdateAvailableCategoryIcons Parms{};

	Parms.InAestheCourseMaster = std::move(InAestheCourseMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetTicketTokenIconTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTokenId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketDescWindow_C::SetTicketTokenIconTexture(int32 InTokenId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketDescWindow_C", "SetTicketTokenIconTexture");

	Params::AestheShop_TicketDescWindow_C_SetTicketTokenIconTexture Parms{};

	Parms.InTokenId = InTokenId;

	UObject::ProcessEvent(Func, &Parms);
}

}

