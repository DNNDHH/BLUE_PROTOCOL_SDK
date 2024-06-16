#pragma once

 

// Package: UMG_PhotoModeControll_UploadListSlot

#include "Basic.hpp"

#include "UMG_PhotoModeControll_UploadListSlot_classes.hpp"
#include "UMG_PhotoModeControll_UploadListSlot_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControll_UploadListSlot_C::ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadListSlot_C", "ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot");

	Params::UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControll_UploadListSlot_C::SetTexture(class UTexture2DDynamic* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadListSlot_C", "SetTexture");

	Params::UMG_PhotoModeControll_UploadListSlot_C_SetTexture Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetTexture_Bp
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControll_UploadListSlot_C::SetTexture_Bp(class UTexture2DDynamic* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadListSlot_C", "SetTexture_Bp");

	Params::UMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetSlateBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          In_Brush_Image                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControll_UploadListSlot_C::SetSlateBrush(class UObject* In_Brush_Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadListSlot_C", "SetSlateBrush");

	Params::UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush Parms{};

	Parms.In_Brush_Image = In_Brush_Image;

	UObject::ProcessEvent(Func, &Parms);
}

}

