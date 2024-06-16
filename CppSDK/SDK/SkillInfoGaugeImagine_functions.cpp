#pragma once

 

// Package: SkillInfoGaugeImagine

#include "Basic.hpp"

#include "SkillInfoGaugeImagine_classes.hpp"
#include "SkillInfoGaugeImagine_parameters.hpp"


namespace SDK
{

// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.ExecuteUbergraph_SkillInfoGaugeImagine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeImagine_C::ExecuteUbergraph_SkillInfoGaugeImagine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "ExecuteUbergraph_SkillInfoGaugeImagine");

	Params::SkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnIconDisableChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::OnIconDisableChange(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "OnIconDisableChange");

	Params::SkillInfoGaugeImagine_C_OnIconDisableChange Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetSlotNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeImagine_C::SetSlotNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetSlotNum");

	Params::SkillInfoGaugeImagine_C_SetSlotNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnStopHyouiAnimation
// (Event, Public, BlueprintEvent)

void USkillInfoGaugeImagine_C::OnStopHyouiAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "OnStopHyouiAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnStartHyouiAnimation
// (Event, Public, BlueprintEvent)

void USkillInfoGaugeImagine_C::OnStartHyouiAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "OnStartHyouiAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnUpdateIconTexture
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FString                           InImagineUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             InImagineName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeImagine_C::OnUpdateIconTexture(const class FString& InImagineUniqueId, const class FName& InImagineName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "OnUpdateIconTexture");

	Params::SkillInfoGaugeImagine_C_OnUpdateIconTexture Parms{};

	Parms.InImagineUniqueId = std::move(InImagineUniqueId);
	Parms.InImagineName = InImagineName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoGaugeImagine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "PreConstruct");

	Params::SkillInfoGaugeImagine_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetGaugeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRecastTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeImagine_C::SetGaugeValue(float InValue, float InRecastTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetGaugeValue");

	Params::SkillInfoGaugeImagine_C_SetGaugeValue Parms{};

	Parms.InValue = InValue;
	Parms.InRecastTime = InRecastTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillInfoGaugeImagine_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetText");

	Params::SkillInfoGaugeImagine_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::PlayAnimUse(bool bInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "PlayAnimUse");

	Params::SkillInfoGaugeImagine_C_PlayAnimUse Parms{};

	Parms.bInit = bInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeImagine_C::PlayAnimChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "PlayAnimChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetEnabled");

	Params::SkillInfoGaugeImagine_C_SetEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargStart
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeImagine_C::PlayAnimChargStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "PlayAnimChargStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.UpdateIconTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InImagineUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             InImagineName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InUseImagineArtsName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InImagineArtsName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USkillInfoGaugeImagine_C::UpdateIconTexture(const class FString& InImagineUniqueId, class FName InImagineName, bool InUseImagineArtsName, const class FString& InImagineArtsName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "UpdateIconTexture");

	Params::SkillInfoGaugeImagine_C_UpdateIconTexture Parms{};

	Parms.InImagineUniqueId = std::move(InImagineUniqueId);
	Parms.InImagineName = InImagineName;
	Parms.InUseImagineArtsName = InUseImagineArtsName;
	Parms.InImagineArtsName = std::move(InImagineArtsName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyGuideVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::SetKeyGuideVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetKeyGuideVisible");

	Params::SkillInfoGaugeImagine_C_SetKeyGuideVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIconOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEquipped                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::SetIconOpacity(bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetIconOpacity");

	Params::SkillInfoGaugeImagine_C_SetIconOpacity Parms{};

	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIsEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::SetIsEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetIsEmpty");

	Params::SkillInfoGaugeImagine_C_SetIsEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEmptyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeImagine_C::SetEmptyColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetEmptyColor");

	Params::SkillInfoGaugeImagine_C_SetEmptyColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetLimitIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::SetLimitIconVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetLimitIconVisibility");

	Params::SkillInfoGaugeImagine_C_SetLimitIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyVisibilityPermanent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisibilityPermanent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeImagine_C::SetKeyVisibilityPermanent(bool InIsVisibilityPermanent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeImagine_C", "SetKeyVisibilityPermanent");

	Params::SkillInfoGaugeImagine_C_SetKeyVisibilityPermanent Parms{};

	Parms.InIsVisibilityPermanent = InIsVisibilityPermanent;

	UObject::ProcessEvent(Func, &Parms);
}

}

