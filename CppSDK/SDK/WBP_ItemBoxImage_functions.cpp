#pragma once

 

// Package: WBP_ItemBoxImage

#include "Basic.hpp"

#include "WBP_ItemBoxImage_classes.hpp"
#include "WBP_ItemBoxImage_parameters.hpp"


namespace SDK
{

// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.ExecuteUbergraph_WBP_ItemBoxImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxImage_C::ExecuteUbergraph_WBP_ItemBoxImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxImage_C", "ExecuteUbergraph_WBP_ItemBoxImage");

	Params::WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.InitIconImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxImage_C::InitIconImage(int32 InItemID, EItemType InItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxImage_C", "InitIconImage");

	Params::WBP_ItemBoxImage_C_InitIconImage Parms{};

	Parms.InItemID = InItemID;
	Parms.InItemType = InItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        NowLoadTexture                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_ItemBoxImage_C::IconLoadStart(TSoftObjectPtr<class UTexture2D> NowLoadTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxImage_C", "IconLoadStart");

	Params::WBP_ItemBoxImage_C_IconLoadStart Parms{};

	Parms.NowLoadTexture = NowLoadTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadRequest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        TextureReference                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_ItemBoxImage_C::IconLoadRequest(const TSoftObjectPtr<class UTexture2D>& TextureReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxImage_C", "IconLoadRequest");

	Params::WBP_ItemBoxImage_C_IconLoadRequest Parms{};

	Parms.TextureReference = TextureReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.OnLoaded_753F2A8F4CEFA9688FDB97A44A552509
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxImage_C::OnLoaded_753F2A8F4CEFA9688FDB97A44A552509(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxImage_C", "OnLoaded_753F2A8F4CEFA9688FDB97A44A552509");

	Params::WBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

