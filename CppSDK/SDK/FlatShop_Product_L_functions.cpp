#pragma once

 

// Package: FlatShop_Product_L

#include "Basic.hpp"

#include "FlatShop_Product_L_classes.hpp"
#include "FlatShop_Product_L_parameters.hpp"


namespace SDK
{

// Function FlatShop_Product_L.FlatShop_Product_L_C.OnClickedIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::OnClickedIndex__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "OnClickedIndex__DelegateSignature");

	Params::FlatShop_Product_L_C_OnClickedIndex__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.ExecuteUbergraph_FlatShop_Product_L
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::ExecuteUbergraph_FlatShop_Product_L(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "ExecuteUbergraph_FlatShop_Product_L");

	Params::FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.LoadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UFlatShop_Product_L_C::LoadTexture(TSoftObjectPtr<class UTexture2D> Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "LoadTexture");

	Params::FlatShop_Product_L_C_LoadTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.DownLoadImage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::DownLoadImage_Event(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "DownLoadImage_Event");

	Params::FlatShop_Product_L_C_DownLoadImage_Event Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFlatShop_Product_L_C::BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductData_RoPS_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBRoseOrbShopItemMasterData     ProductData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::SetProductData_RoPS_Event(const struct FSBRoseOrbShopItemMasterData& ProductData, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "SetProductData_RoPS_Event");

	Params::FlatShop_Product_L_C_SetProductData_RoPS_Event Parms{};

	Parms.ProductData = std::move(ProductData);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.OnLoaded_C1943EA54AEEFAC24C82819C900D7109
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::OnLoaded_C1943EA54AEEFAC24C82819C900D7109(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "OnLoaded_C1943EA54AEEFAC24C82819C900D7109");

	Params::FlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.OnSuccess_0A62FBD840A02077625644ABD1C58C54
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::OnSuccess_0A62FBD840A02077625644ABD1C58C54(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "OnSuccess_0A62FBD840A02077625644ABD1C58C54");

	Params::FlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54 Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.OnFail_0A62FBD840A02077625644ABD1C58C54
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::OnFail_0A62FBD840A02077625644ABD1C58C54(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "OnFail_0A62FBD840A02077625644ABD1C58C54");

	Params::FlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54 Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.SetText_LimitDate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        LimitDate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::SetText_LimitDate(const struct FDateTime& LimitDate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "SetText_LimitDate");

	Params::FlatShop_Product_L_C_SetText_LimitDate Parms{};

	Parms.LimitDate = std::move(LimitDate);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.SetFlag_RoPS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Flags                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::SetFlag_RoPS(const class FString& Param_Flags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "SetFlag_RoPS");

	Params::FlatShop_Product_L_C_SetFlag_RoPS Parms{};

	Parms.Param_Flags = std::move(Param_Flags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductThumbnail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Path                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UFlatShop_Product_L_C::SetProductThumbnail(const class FString& URL, TSoftObjectPtr<class UTexture2D> Path)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "SetProductThumbnail");

	Params::FlatShop_Product_L_C_SetProductThumbnail Parms{};

	Parms.URL = std::move(URL);
	Parms.Path = Path;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.Get Thumbnail Texture
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)

void UFlatShop_Product_L_C::Get_Thumbnail_Texture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "Get Thumbnail Texture");

	Params::FlatShop_Product_L_C_Get_Thumbnail_Texture Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function FlatShop_Product_L.FlatShop_Product_L_C.SetRibbon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Flag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_Product_L_C::SetRibbon(int32 Param_Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_Product_L_C", "SetRibbon");

	Params::FlatShop_Product_L_C_SetRibbon Parms{};

	Parms.Param_Flag = Param_Flag;

	UObject::ProcessEvent(Func, &Parms);
}

}

