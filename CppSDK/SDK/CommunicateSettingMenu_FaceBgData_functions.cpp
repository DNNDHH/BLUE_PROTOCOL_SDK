#pragma once

 

// Package: CommunicateSettingMenu_FaceBgData

#include "Basic.hpp"

#include "CommunicateSettingMenu_FaceBgData_classes.hpp"
#include "CommunicateSettingMenu_FaceBgData_parameters.hpp"


namespace SDK
{

// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.ClickedBtnAwardItemIconList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AwardId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBgData_C::ClickedBtnAwardItemIconList__DelegateSignature(int32 AwardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "ClickedBtnAwardItemIconList__DelegateSignature");

	Params::CommunicateSettingMenu_FaceBgData_C_ClickedBtnAwardItemIconList__DelegateSignature Parms{};

	Parms.AwardId = AwardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.OnClickEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::OnClickEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "OnClickEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::OnHover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "OnHover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "OnUnhover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.ExecuteUbergraph_CommunicateSettingMenu_FaceBgData
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBgData_C::ExecuteUbergraph_CommunicateSettingMenu_FaceBgData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "ExecuteUbergraph_CommunicateSettingMenu_FaceBgData");

	Params::CommunicateSettingMenu_FaceBgData_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBgData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetAwardId
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InAwardIdList                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommunicateSettingMenu_FaceBgData_C::SetAwardId(const TArray<int32>& InAwardIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetAwardId");

	Params::CommunicateSettingMenu_FaceBgData_C_SetAwardId Parms{};

	Parms.InAwardIdList = std::move(InAwardIdList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.EditFrame_AwardIconDisable
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::EditFrame_AwardIconDisable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "EditFrame_AwardIconDisable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicateSettingMenu_FaceBgData_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "PreConstruct");

	Params::CommunicateSettingMenu_FaceBgData_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   AwardId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBgData_C::BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature(int32 AwardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature");

	Params::CommunicateSettingMenu_FaceBgData_C_BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature Parms{};

	Parms.AwardId = AwardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCharacterCardFrameId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBgData_C::SetFrame(int32 InCharacterCardFrameId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetFrame");

	Params::CommunicateSettingMenu_FaceBgData_C_SetFrame Parms{};

	Parms.InCharacterCardFrameId = InCharacterCardFrameId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.ErrorDataSet
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::ErrorDataSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "ErrorDataSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetAdventureRankText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBgData_C::SetAdventureRankText(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetAdventureRankText");

	Params::CommunicateSettingMenu_FaceBgData_C_SetAdventureRankText Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetClassType
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           InAwardIdList                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommunicateSettingMenu_FaceBgData_C::SetClassType(ESBClassType InClassType, const TArray<int32>& InAwardIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetClassType");

	Params::CommunicateSettingMenu_FaceBgData_C_SetClassType Parms{};

	Parms.InClassType = InClassType;
	Parms.InAwardIdList = std::move(InAwardIdList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetTotalPowerText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBgData_C::SetTotalPowerText(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetTotalPowerText");

	Params::CommunicateSettingMenu_FaceBgData_C_SetTotalPowerText Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetAdventureData
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::SetAdventureData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetAdventureData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetClassData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InCurrentClassType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           InAwardIdList                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommunicateSettingMenu_FaceBgData_C::SetClassData(ESBClassType InCurrentClassType, int32 InClassLevel, const TArray<int32>& InAwardIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetClassData");

	Params::CommunicateSettingMenu_FaceBgData_C_SetClassData Parms{};

	Parms.InCurrentClassType = InCurrentClassType;
	Parms.InClassLevel = InClassLevel;
	Parms.InAwardIdList = std::move(InAwardIdList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetTotalPower
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::SetTotalPower()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetTotalPower");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetAdventureRank
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::SetAdventureRank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetAdventureRank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.ResetFaceBG
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::ResetFaceBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "ResetFaceBG");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetFaceBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBgData_C::SetFaceBG(float InScale, const struct FVector2D& InPosition, const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetFaceBG");

	Params::CommunicateSettingMenu_FaceBgData_C_SetFaceBG Parms{};

	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_6_OnUnhver__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_6_OnUnhver__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_6_OnUnhver__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_5_OnHover__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_5_OnHover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_5_OnHover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetCharacterCardData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerCharacterCardData       InPlayerCharacterCardData                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bIsUGC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicateSettingMenu_FaceBgData_C::SetCharacterCardData(const struct FSBPlayerCharacterCardData& InPlayerCharacterCardData, bool bIsUGC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetCharacterCardData");

	Params::CommunicateSettingMenu_FaceBgData_C_SetCharacterCardData Parms{};

	Parms.InPlayerCharacterCardData = std::move(InPlayerCharacterCardData);
	Parms.bIsUGC = bIsUGC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_2_OnClickEvent__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_FaceBgData_C::BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_2_OnClickEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_2_OnClickEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBgData_C::OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7");

	Params::CommunicateSettingMenu_FaceBgData_C_OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C.SetAdventurerRankAndTotalPowerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicateSettingMenu_FaceBgData_C::SetAdventurerRankAndTotalPowerVisibility(bool bInIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBgData_C", "SetAdventurerRankAndTotalPowerVisibility");

	Params::CommunicateSettingMenu_FaceBgData_C_SetAdventurerRankAndTotalPowerVisibility Parms{};

	Parms.bInIsVisible = bInIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

