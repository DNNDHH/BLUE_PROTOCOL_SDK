#pragma once

 

// Package: Fang_expedition_DetailHeader

#include "Basic.hpp"

#include "Fang_expedition_DetailHeader_classes.hpp"
#include "Fang_expedition_DetailHeader_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnPressCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailHeader_C::OnPressCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "OnPressCloseButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ExecuteUbergraph_Fang_expedition_DetailHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailHeader_C::ExecuteUbergraph_Fang_expedition_DetailHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "ExecuteUbergraph_Fang_expedition_DetailHeader");

	Params::Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ImageAnimationFinish
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailHeader_C::ImageAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "ImageAnimationFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.FangImageLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailHeader_C::FangImageLoad(TSoftObjectPtr<class UTexture2D> Texture, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "FangImageLoad");

	Params::Fang_expedition_DetailHeader_C_FangImageLoad Parms{};

	Parms.Texture = Texture;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailHeader_C::BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnLoaded_9F74DC0840402151039A7F9243B7E826
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailHeader_C::OnLoaded_9F74DC0840402151039A7F9243B7E826(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "OnLoaded_9F74DC0840402151039A7F9243B7E826");

	Params::Fang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetStay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailHeader_C::SetStay(int32 Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "SetStay");

	Params::Fang_expedition_DetailHeader_C_SetStay Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetPlayData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_DetailHeader_C::SetPlayData(struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "SetPlayData");

	Params::Fang_expedition_DetailHeader_C_SetPlayData Parms{};

	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);

	PlayData = std::move(Parms.PlayData);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetFangData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   UniqueIds                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    UseAnimation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailHeader_C::SetFangData(TArray<class FString>& UniqueIds, bool UseAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "SetFangData");

	Params::Fang_expedition_DetailHeader_C_SetFangData Parms{};

	Parms.UniqueIds = std::move(UniqueIds);
	Parms.UseAnimation = UseAnimation;

	UObject::ProcessEvent(Func, &Parms);

	UniqueIds = std::move(Parms.UniqueIds);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailHeader_C::UpdateFangTexture(class UTexture2D* Texture, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "UpdateFangTexture");

	Params::Fang_expedition_DetailHeader_C_UpdateFangTexture Parms{};

	Parms.Texture = Texture;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.IconAnimationStop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailHeader_C::IconAnimationStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "IconAnimationStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailHeader_C::UpdateFangData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "UpdateFangData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetCloseBtnVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailHeader_C::SetCloseBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailHeader_C", "SetCloseBtnVisible");

	Params::Fang_expedition_DetailHeader_C_SetCloseBtnVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

