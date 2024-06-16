#pragma once

 

// Package: TitleMenu

#include "Basic.hpp"

#include "TitleMenu_classes.hpp"
#include "TitleMenu_parameters.hpp"


namespace SDK
{

// Function TitleMenu.TitleMenu_C.ExecuteUbergraph_TitleMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMenu_C::ExecuteUbergraph_TitleMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "ExecuteUbergraph_TitleMenu");

	Params::TitleMenu_C_ExecuteUbergraph_TitleMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.SetupCharaLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           InSBTitleMenuCharaLayer                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMenu_C::SetupCharaLayer(class UClass* InSBTitleMenuCharaLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "SetupCharaLayer");

	Params::TitleMenu_C_SetupCharaLayer Parms{};

	Parms.InSBTitleMenuCharaLayer = InSBTitleMenuCharaLayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.LoadCharaLayer
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::LoadCharaLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "LoadCharaLayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.LoadEffectActor
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::LoadEffectActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "LoadEffectActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.Init
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UTitleMenu_C::WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTitleMenu_C::BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.OperationPossible
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::OperationPossible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "OperationPossible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.OnFinishedDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMenu_C::OnFinishedDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "OnFinishedDialog");

	Params::TitleMenu_C_OnFinishedDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UTitleMenu_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.OnComebackCharaCreate
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::OnComebackCharaCreate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "OnComebackCharaCreate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.OnFailedConnectServer
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMenu_C::OnFailedConnectServer(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "OnFailedConnectServer");

	Params::TitleMenu_C_OnFailedConnectServer Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.ResetGameLoadStatus
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::ResetGameLoadStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "ResetGameLoadStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.InitCharaSelect
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::InitCharaSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "InitCharaSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.OnLoginFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMenu_C::OnLoginFailure(const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "OnLoginFailure");

	Params::TitleMenu_C_OnLoginFailure Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           FriendCharacterId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTitleMenu_C::BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature(const class FString& CharacterId, int32 ListIndex, const class FString& FriendCharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature");

	Params::TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature Parms{};

	Parms.CharacterId = std::move(CharacterId);
	Parms.ListIndex = ListIndex;
	Parms.FriendCharacterId = std::move(FriendCharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_bReturnDisconnect                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleMenu_C::BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature(const class FString& CharacterId, int32 ListIndex, bool Param_bReturnDisconnect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature");

	Params::TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature Parms{};

	Parms.CharacterId = std::move(CharacterId);
	Parms.ListIndex = ListIndex;
	Parms.Param_bReturnDisconnect = Param_bReturnDisconnect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature
// (BlueprintEvent)

void UTitleMenu_C::BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature
// (BlueprintEvent)

void UTitleMenu_C::BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTitleMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTitleMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.SetButtonFocus
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::SetButtonFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "SetButtonFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature
// (BlueprintEvent)

void UTitleMenu_C::BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature
// (BlueprintEvent)

void UTitleMenu_C::BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.InitConfig
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::InitConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "InitConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature
// (BlueprintEvent)

void UTitleMenu_C::BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.InitStartMenu
// (BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::InitStartMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "InitStartMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UTitleMenu_C::OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72");

	Params::TitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.OnLoaded_E8315409430BF09E1DB899BAE01D7ABD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UTitleMenu_C::OnLoaded_E8315409430BF09E1DB899BAE01D7ABD(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "OnLoaded_E8315409430BF09E1DB899BAE01D7ABD");

	Params::TitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.OnLoaded_136303394FB780B732D94AA171FCCCE2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UTitleMenu_C::OnLoaded_136303394FB780B732D94AA171FCCCE2(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "OnLoaded_136303394FB780B732D94AA171FCCCE2");

	Params::TitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.HasFromOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           CheckString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleMenu_C::HasFromOption(const class FString& CheckString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "HasFromOption");

	Params::TitleMenu_C_HasFromOption Parms{};

	Parms.CheckString = std::move(CheckString);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TitleMenu.TitleMenu_C.GetNewCharacterId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UTitleMenu_C::GetNewCharacterId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "GetNewCharacterId");

	Params::TitleMenu_C_GetNewCharacterId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TitleMenu.TitleMenu_C.ClearCache
// (Public, BlueprintCallable, BlueprintEvent)

void UTitleMenu_C::ClearCache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "ClearCache");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TitleMenu.TitleMenu_C.IsCharaSelectStart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_CharaSelect                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleMenu_C::IsCharaSelectStart(bool* Param_CharaSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "IsCharaSelectStart");

	Params::TitleMenu_C_IsCharaSelectStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CharaSelect != nullptr)
		*Param_CharaSelect = Parms.Param_CharaSelect;
}


// Function TitleMenu.TitleMenu_C.SetEffectEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleMenu_C::SetEffectEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "SetEffectEnable");

	Params::TitleMenu_C_SetEffectEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TitleMenu.TitleMenu_C.GetBanFinishedAt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Result                                                 (Parm, OutParm)

void UTitleMenu_C::GetBanFinishedAt(class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TitleMenu_C", "GetBanFinishedAt");

	Params::TitleMenu_C_GetBanFinishedAt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

}

