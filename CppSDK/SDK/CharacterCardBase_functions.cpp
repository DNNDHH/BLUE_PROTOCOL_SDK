#pragma once

 

// Package: CharacterCardBase

#include "Basic.hpp"

#include "CharacterCardBase_classes.hpp"
#include "CharacterCardBase_parameters.hpp"


namespace SDK
{

// Function CharacterCardBase.CharacterCardBase_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bInIsMe                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardBase_C::OnClicked__DelegateSignature(const class FString& InCharacterId, bool bInIsMe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "OnClicked__DelegateSignature");

	Params::CharacterCardBase_C_OnClicked__DelegateSignature Parms{};

	Parms.InCharacterId = std::move(InCharacterId);
	Parms.bInIsMe = bInIsMe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardBase.CharacterCardBase_C.OnSendLike__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCharacterCardBase_C::OnSendLike__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "OnSendLike__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardBase.CharacterCardBase_C.ExecuteUbergraph_CharacterCardBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCardBase_C::ExecuteUbergraph_CharacterCardBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "ExecuteUbergraph_CharacterCardBase");

	Params::CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardBase.CharacterCardBase_C.StartNewPartyMemberInAnimation
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardBase_C::StartNewPartyMemberInAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "StartNewPartyMemberInAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature
// (BlueprintEvent)

void UCharacterCardBase_C::BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
// (BlueprintEvent)

void UCharacterCardBase_C::BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterCardBase_C::BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardBase.CharacterCardBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCardBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature
// (BlueprintEvent)

void UCharacterCardBase_C::BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardBase.CharacterCardBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCardBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardBase.CharacterCardBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "PreConstruct");

	Params::CharacterCardBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterCardType                      InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsReceptingParticipants                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardBase_C::SetCharacterCardType(ECharacterCardType InType, bool bInIsReceptingParticipants)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "SetCharacterCardType");

	Params::CharacterCardBase_C_SetCharacterCardType Parms{};

	Parms.InType = InType;
	Parms.bInIsReceptingParticipants = bInIsReceptingParticipants;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerCharacterCardData       InCharacterCardData                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bInIsMe                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USBPartyMemberState*              InPartyMemberState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCardBase_C::SetCharacterCardData(const struct FSBPlayerCharacterCardData& InCharacterCardData, bool bInIsMe, class USBPartyMemberState* InPartyMemberState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "SetCharacterCardData");

	Params::CharacterCardBase_C_SetCharacterCardData Parms{};

	Parms.InCharacterCardData = std::move(InCharacterCardData);
	Parms.bInIsMe = bInIsMe;
	Parms.InPartyMemberState = InPartyMemberState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardBase.CharacterCardBase_C.SetIsBlankCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsBlank                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardBase_C::SetIsBlankCard(bool bInIsBlank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "SetIsBlankCard");

	Params::CharacterCardBase_C_SetIsBlankCard Parms{};

	Parms.bInIsBlank = bInIsBlank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardBase.CharacterCardBase_C.SetIsCardInfoHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsInfoHidden                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardBase_C::SetIsCardInfoHidden(bool bInIsInfoHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardBase_C", "SetIsCardInfoHidden");

	Params::CharacterCardBase_C_SetIsCardInfoHidden Parms{};

	Parms.bInIsInfoHidden = bInIsInfoHidden;

	UObject::ProcessEvent(Func, &Parms);
}

}

