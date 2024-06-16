#pragma once

 

// Package: WBP_CharacterSelectListItem

#include "Basic.hpp"

#include "WBP_CharacterSelectListItem_classes.hpp"
#include "WBP_CharacterSelectListItem_parameters.hpp"


namespace SDK
{

// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.EndAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CharacterSelectListItem_C::EndAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "EndAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.EndDelAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CharacterSelectListItem_C::EndDelAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "EndDelAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.ExecuteUbergraph_WBP_CharacterSelectListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelectListItem_C::ExecuteUbergraph_WBP_CharacterSelectListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "ExecuteUbergraph_WBP_CharacterSelectListItem");

	Params::WBP_CharacterSelectListItem_C_ExecuteUbergraph_WBP_CharacterSelectListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelectListItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "Tick");

	Params::WBP_CharacterSelectListItem_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.SetCharacterImageData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CharacterSelectCaptureOne_C*  Param_CharacterSelectCaptureOne                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelectListItem_C::SetCharacterImageData(class ABP_CharacterSelectCaptureOne_C* Param_CharacterSelectCaptureOne)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "SetCharacterImageData");

	Params::WBP_CharacterSelectListItem_C_SetCharacterImageData Parms{};

	Parms.Param_CharacterSelectCaptureOne = Param_CharacterSelectCaptureOne;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharacterSelectListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.DebugUpdeta
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharacterSelectListItem_C::DebugUpdeta()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "DebugUpdeta");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelectListItem_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "OnAnimationFinished");

	Params::WBP_CharacterSelectListItem_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.DownLoadCharacterImage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CharaIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelectListItem_C::DownLoadCharacterImage_Event(int32 CharaIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "DownLoadCharacterImage_Event");

	Params::WBP_CharacterSelectListItem_C_DownLoadCharacterImage_Event Parms{};

	Parms.CharaIndex = CharaIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.SetMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InDir                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelectListItem_C::SetMove(int32 InDir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "SetMove");

	Params::WBP_CharacterSelectListItem_C_SetMove Parms{};

	Parms.InDir = InDir;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Move
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CharacterSelectListItem_C::Move()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "Move");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Download Chara Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CharaIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelectListItem_C::Download_Chara_Image(int32 CharaIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "Download Chara Image");

	Params::WBP_CharacterSelectListItem_C_Download_Chara_Image Parms{};

	Parms.CharaIndex = CharaIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Set Chara Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                InTex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelectListItem_C::Set_Chara_Image(class UTexture2DDynamic* InTex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "Set Chara Image");

	Params::WBP_CharacterSelectListItem_C_Set_Chara_Image Parms{};

	Parms.InTex = InTex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Reset Move
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CharacterSelectListItem_C::Reset_Move()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "Reset Move");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.PlayDelAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CharacterSelectListItem_C::PlayDelAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "PlayDelAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.ResetMaskCanvas
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CharacterSelectListItem_C::ResetMaskCanvas()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "ResetMaskCanvas");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Set Delete Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDeleteMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CharacterSelectListItem_C::Set_Delete_Mode(bool bDeleteMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelectListItem_C", "Set Delete Mode");

	Params::WBP_CharacterSelectListItem_C_Set_Delete_Mode Parms{};

	Parms.bDeleteMode = bDeleteMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

