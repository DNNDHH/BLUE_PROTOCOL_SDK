#pragma once

 

// Package: SkillInfoItem

#include "Basic.hpp"

#include "SkillInfoItem_classes.hpp"
#include "SkillInfoItem_parameters.hpp"


namespace SDK
{

// Function SkillInfoItem.SkillInfoItem_C.ExecuteUbergraph_SkillInfoItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::ExecuteUbergraph_SkillInfoItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "ExecuteUbergraph_SkillInfoItem");

	Params::SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.InitKeyTextAndGauge
// (BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::InitKeyTextAndGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "InitKeyTextAndGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.OnPadSkinChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPadKeySkinType                       SkinType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::OnPadSkinChange(const ESBPadKeySkinType SkinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "OnPadSkinChange");

	Params::SkillInfoItem_C_OnPadSkinChange Parms{};

	Parms.SkinType = SkinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::CustomEvent_1(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "CustomEvent_1");

	Params::SkillInfoItem_C_CustomEvent_1 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimUse
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Init                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::OnPlayAnimUse(bool Init)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "OnPlayAnimUse");

	Params::SkillInfoItem_C_OnPlayAnimUse Parms{};

	Parms.Init = Init;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.OnUpdatePercent
// (Event, Public, BlueprintEvent)

void USkillInfoItem_C::OnUpdatePercent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "OnUpdatePercent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimChargeEnd
// (Event, Public, BlueprintEvent)

void USkillInfoItem_C::OnPlayAnimChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "OnPlayAnimChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimChargeStart
// (Event, Public, BlueprintEvent)

void USkillInfoItem_C::OnPlayAnimChargeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "OnPlayAnimChargeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "PreConstruct");

	Params::SkillInfoItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.UnbindSkillAnimationStartDelegate
// (BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::UnbindSkillAnimationStartDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "UnbindSkillAnimationStartDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.UpdateDelegate
// (BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::UpdateDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "UpdateDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.OnSkillAnimationStartDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    SkillPosition                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::OnSkillAnimationStartDelegate_Event_0(const ESkillActionPosition SkillPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "OnSkillAnimationStartDelegate_Event_0");

	Params::SkillInfoItem_C_OnSkillAnimationStartDelegate_Event_0 Parms{};

	Parms.SkillPosition = SkillPosition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.UpdateKeyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::UpdateKeyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "UpdateKeyText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.InitKeyText
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::InitKeyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "InitKeyText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.UpdatePercent
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::UpdatePercent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "UpdatePercent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.ReplaceFunctionText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InBaseString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Result                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void USkillInfoItem_C::ReplaceFunctionText(const class FString& InBaseString, class FString* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "ReplaceFunctionText");

	Params::SkillInfoItem_C_ReplaceFunctionText Parms{};

	Parms.InBaseString = std::move(InBaseString);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function SkillInfoItem.SkillInfoItem_C.PlayAnimUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::PlayAnimUse(bool bInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "PlayAnimUse");

	Params::SkillInfoItem_C_PlayAnimUse Parms{};

	Parms.bInit = bInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::PlayAnimChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "PlayAnimChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.SetSwitchGauge
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::SetSwitchGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "SetSwitchGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::SetEnable(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "SetEnable");

	Params::SkillInfoItem_C_SetEnable Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.CheckShieldBreak
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bCheck                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::CheckShieldBreak(bool* bCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "CheckShieldBreak");

	Params::SkillInfoItem_C_CheckShieldBreak Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCheck != nullptr)
		*bCheck = Parms.bCheck;
}


// Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeStart
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoItem_C::PlayAnimChargeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "PlayAnimChargeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItem.SkillInfoItem_C.GetGaugeImagine
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESkillActionPosition                    InGaugeImagineSAP                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsVaild                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkillInfoGaugeImagine_C*         OutGaugeImagine                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::GetGaugeImagine(ESkillActionPosition InGaugeImagineSAP, bool* OutIsVaild, class USkillInfoGaugeImagine_C** OutGaugeImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "GetGaugeImagine");

	Params::SkillInfoItem_C_GetGaugeImagine Parms{};

	Parms.InGaugeImagineSAP = InGaugeImagineSAP;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsVaild != nullptr)
		*OutIsVaild = Parms.OutIsVaild;

	if (OutGaugeImagine != nullptr)
		*OutGaugeImagine = Parms.OutGaugeImagine;
}


// Function SkillInfoItem.SkillInfoItem_C.GetGaugeActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESkillActionPosition                    InGaugeActiveSAP                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkillInfoGaugeActive_C*          OutGaugeActive                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::GetGaugeActive(ESkillActionPosition InGaugeActiveSAP, bool* OutIsValid, class USkillInfoGaugeActive_C** OutGaugeActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "GetGaugeActive");

	Params::SkillInfoItem_C_GetGaugeActive Parms{};

	Parms.InGaugeActiveSAP = InGaugeActiveSAP;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutGaugeActive != nullptr)
		*OutGaugeActive = Parms.OutGaugeActive;
}


// Function SkillInfoItem.SkillInfoItem_C.GetGaugeMain
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkillInfoGaugeMainDefHeal_C*     OutGaugeMain                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::GetGaugeMain(bool* OutIsValid, class USkillInfoGaugeMainDefHeal_C** OutGaugeMain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "GetGaugeMain");

	Params::SkillInfoItem_C_GetGaugeMain Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutGaugeMain != nullptr)
		*OutGaugeMain = Parms.OutGaugeMain;
}


// Function SkillInfoItem.SkillInfoItem_C.GetGaugeDef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkillInfoGaugeMainDefHeal_C*     OutGaugeDef                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::GetGaugeDef(bool* OutIsValid, class USkillInfoGaugeMainDefHeal_C** OutGaugeDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "GetGaugeDef");

	Params::SkillInfoItem_C_GetGaugeDef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutGaugeDef != nullptr)
		*OutGaugeDef = Parms.OutGaugeDef;
}


// Function SkillInfoItem.SkillInfoItem_C.GetGaugeSpecial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkillInfoGaugeSpecial_C*         OutGaugeSpecial                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::GetGaugeSpecial(bool* OutIsValid, class USkillInfoGaugeSpecial_C** OutGaugeSpecial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "GetGaugeSpecial");

	Params::SkillInfoItem_C_GetGaugeSpecial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutGaugeSpecial != nullptr)
		*OutGaugeSpecial = Parms.OutGaugeSpecial;
}


// Function SkillInfoItem.SkillInfoItem_C.SetKeyVisibilityPermanent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisibilityPermanent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::SetKeyVisibilityPermanent(bool InIsVisibilityPermanent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "SetKeyVisibilityPermanent");

	Params::SkillInfoItem_C_SetKeyVisibilityPermanent Parms{};

	Parms.InIsVisibilityPermanent = InIsVisibilityPermanent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.SwitchSkillBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHud                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bBehind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAnim                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::SwitchSkillBg(bool bHud, bool bBehind, bool bAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "SwitchSkillBg");

	Params::SkillInfoItem_C_SwitchSkillBg Parms{};

	Parms.bHud = bHud;
	Parms.bBehind = bBehind;
	Parms.bAnim = bAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItem.SkillInfoItem_C.GetSkillInfoItemSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSAP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                        OutSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::GetSkillInfoItemSize(ESkillActionPosition InSAP, bool* OutIsValid, struct FVector2D* OutSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "GetSkillInfoItemSize");

	Params::SkillInfoItem_C_GetSkillInfoItemSize Parms{};

	Parms.InSAP = InSAP;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutSize != nullptr)
		*OutSize = std::move(Parms.OutSize);
}


// Function SkillInfoItem.SkillInfoItem_C.GetRecastTimeBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   MaxRecastTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RecastTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowInfo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItem_C::GetRecastTimeBP(float* MaxRecastTime, float* RecastTime, bool* bShowInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "GetRecastTimeBP");

	Params::SkillInfoItem_C_GetRecastTimeBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxRecastTime != nullptr)
		*MaxRecastTime = Parms.MaxRecastTime;

	if (RecastTime != nullptr)
		*RecastTime = Parms.RecastTime;

	if (bShowInfo != nullptr)
		*bShowInfo = Parms.bShowInfo;
}


// Function SkillInfoItem.SkillInfoItem_C.GetSpecialSkillRecastTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   MaxTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItem_C::GetSpecialSkillRecastTime(float* MaxTime, float* CurTime) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItem_C", "GetSpecialSkillRecastTime");

	Params::SkillInfoItem_C_GetSpecialSkillRecastTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxTime != nullptr)
		*MaxTime = Parms.MaxTime;

	if (CurTime != nullptr)
		*CurTime = Parms.CurTime;
}

}

