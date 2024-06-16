#pragma once

 

// Package: PictureBook_CraftRecipe

#include "Basic.hpp"

#include "PictureBook_CraftRecipe_classes.hpp"
#include "PictureBook_CraftRecipe_parameters.hpp"


namespace SDK
{

// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.ExecuteUbergraph_PictureBook_CraftRecipe
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_CraftRecipe_C::ExecuteUbergraph_PictureBook_CraftRecipe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipe_C", "ExecuteUbergraph_PictureBook_CraftRecipe");

	Params::PictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPictureBook_CraftRecipe_C::BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipe_C", "BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateWeaponCraftList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WeaponID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_CraftRecipe_C::CreateWeaponCraftList(int32 WeaponID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipe_C", "CreateWeaponCraftList");

	Params::PictureBook_CraftRecipe_C_CreateWeaponCraftList Parms{};

	Parms.WeaponID = WeaponID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateImagineCraftList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ImagineId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ELibraryImagineType                     ImagineType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_CraftRecipe_C::CreateImagineCraftList(int32 ImagineId, ELibraryImagineType ImagineType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipe_C", "CreateImagineCraftList");

	Params::PictureBook_CraftRecipe_C_CreateImagineCraftList Parms{};

	Parms.ImagineId = ImagineId;
	Parms.ImagineType = ImagineType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.SetTermId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TermId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_CraftRecipe_C::SetTermId(const class FString& TermId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipe_C", "SetTermId");

	Params::PictureBook_CraftRecipe_C_SetTermId Parms{};

	Parms.TermId = std::move(TermId);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

