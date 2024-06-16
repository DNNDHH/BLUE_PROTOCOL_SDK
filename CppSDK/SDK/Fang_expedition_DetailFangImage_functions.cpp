#pragma once

 

// Package: Fang_expedition_DetailFangImage

#include "Basic.hpp"

#include "Fang_expedition_DetailFangImage_classes.hpp"
#include "Fang_expedition_DetailFangImage_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnFinishAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailFangImage_C::OnFinishAnimation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "OnFinishAnimation__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ExecuteUbergraph_Fang_expedition_DetailFangImage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailFangImage_C::ExecuteUbergraph_Fang_expedition_DetailFangImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "ExecuteUbergraph_Fang_expedition_DetailFangImage");

	Params::Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.FoceRemoveAnim
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailFangImage_C::FoceRemoveAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "FoceRemoveAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailFangImage_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "OnAnimationFinished");

	Params::Fang_expedition_DetailFangImage_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.PlayMoveAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailFangImage_C::PlayMoveAnim(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "PlayMoveAnim");

	Params::Fang_expedition_DetailFangImage_C_PlayMoveAnim Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.LoadImage
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailFangImage_C::LoadImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "LoadImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnLoaded_B65A1B5649E5906D193D59B0005B2979
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailFangImage_C::OnLoaded_B65A1B5649E5906D193D59B0005B2979(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "OnLoaded_B65A1B5649E5906D193D59B0005B2979");

	Params::Fang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailFangImage_C::SetTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "SetTexture");

	Params::Fang_expedition_DetailFangImage_C_SetTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTextureRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UFang_expedition_DetailFangImage_C::SetTextureRef(TSoftObjectPtr<class UTexture2D> Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "SetTextureRef");

	Params::Fang_expedition_DetailFangImage_C_SetTextureRef Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ResetAnimState
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailFangImage_C::ResetAnimState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailFangImage_C", "ResetAnimState");

	UObject::ProcessEvent(Func, nullptr);
}

}

