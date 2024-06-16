#pragma once

 

// Package: SkillInfoGaugeActive

#include "Basic.hpp"

#include "SkillInfoGaugeActive_classes.hpp"
#include "SkillInfoGaugeActive_parameters.hpp"


namespace SDK
{

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.ExecuteUbergraph_SkillInfoGaugeActive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeActive_C::ExecuteUbergraph_SkillInfoGaugeActive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "ExecuteUbergraph_SkillInfoGaugeActive");

	Params::SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnIconDisableChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::OnIconDisableChange(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "OnIconDisableChange");

	Params::SkillInfoGaugeActive_C_OnIconDisableChange Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnStopBerserkMode
// (Event, Public, BlueprintEvent)

void USkillInfoGaugeActive_C::OnStopBerserkMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "OnStopBerserkMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnStartBerserkMode
// (Event, Public, BlueprintEvent)

void USkillInfoGaugeActive_C::OnStartBerserkMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "OnStartBerserkMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnAttackUpChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InAttackUp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USBPlayerSkillActionComponent*    Param_SkillActionComp                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeActive_C::OnAttackUpChange(bool InAttackUp, class USBPlayerSkillActionComponent* Param_SkillActionComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "OnAttackUpChange");

	Params::SkillInfoGaugeActive_C_OnAttackUpChange Parms{};

	Parms.InAttackUp = InAttackUp;
	Parms.Param_SkillActionComp = Param_SkillActionComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnSetKeyGuideVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::OnSetKeyGuideVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "OnSetKeyGuideVisible");

	Params::SkillInfoGaugeActive_C_OnSetKeyGuideVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnUpdateIconTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*                       SkillIconSmall                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeActive_C::OnUpdateIconTexture(class UTexture2D* SkillIconSmall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "OnUpdateIconTexture");

	Params::SkillInfoGaugeActive_C_OnUpdateIconTexture Parms{};

	Parms.SkillIconSmall = SkillIconSmall;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoGaugeActive_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetGaugeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRecastTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeActive_C::SetGaugeValue(float InValue, float InRecastTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SetGaugeValue");

	Params::SkillInfoGaugeActive_C_SetGaugeValue Parms{};

	Parms.InValue = InValue;
	Parms.InRecastTime = InRecastTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillInfoGaugeActive_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SetText");

	Params::SkillInfoGaugeActive_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::PlayAnimUse(bool bInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "PlayAnimUse");

	Params::SkillInfoGaugeActive_C_PlayAnimUse Parms{};

	Parms.bInit = bInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeActive_C::PlayAnimChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "PlayAnimChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SetEnabled");

	Params::SkillInfoGaugeActive_C_SetEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForceUpdate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IgnoreEquipActiveAbilityCheckForIconBgType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::UpdateIconTexture(class UTexture2D* Texture, int32 SkillId, bool ForceUpdate, bool IgnoreEquipActiveAbilityCheckForIconBgType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "UpdateIconTexture");

	Params::SkillInfoGaugeActive_C_UpdateIconTexture Parms{};

	Parms.Texture = Texture;
	Parms.SkillId = SkillId;
	Parms.ForceUpdate = ForceUpdate;
	Parms.IgnoreEquipActiveAbilityCheckForIconBgType = IgnoreEquipActiveAbilityCheckForIconBgType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeStart
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeActive_C::PlayAnimChargeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "PlayAnimChargeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyGuideVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::SetKeyGuideVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SetKeyGuideVisible");

	Params::SkillInfoGaugeActive_C_SetKeyGuideVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIconOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEquipped                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::SetIconOpacity(bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SetIconOpacity");

	Params::SkillInfoGaugeActive_C_SetIconOpacity Parms{};

	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconBgType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBPlayerCharacter*               InPlayerCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIgnoreEquipActiveAbilityCheck                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBSkillIconBgType                      BgType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeActive_C::GetIconBgType(int32 InSkillId, class ASBPlayerCharacter* InPlayerCharacter, bool bInIgnoreEquipActiveAbilityCheck, ESBSkillIconBgType* BgType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "GetIconBgType");

	Params::SkillInfoGaugeActive_C_GetIconBgType Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InPlayerCharacter = InPlayerCharacter;
	Parms.bInIgnoreEquipActiveAbilityCheck = bInIgnoreEquipActiveAbilityCheck;

	UObject::ProcessEvent(Func, &Parms);

	if (BgType != nullptr)
		*BgType = Parms.BgType;
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateAttackUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InAttackUp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USBPlayerSkillActionComponent*    Param_SkillActionComp                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeActive_C::UpdateAttackUp(bool InAttackUp, class USBPlayerSkillActionComponent* Param_SkillActionComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "UpdateAttackUp");

	Params::SkillInfoGaugeActive_C_UpdateAttackUp Parms{};

	Parms.InAttackUp = InAttackUp;
	Parms.Param_SkillActionComp = Param_SkillActionComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconElementType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBPlayerCharacter*               InPlayerCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBSkillElementIconType                 ElementType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeActive_C::GetIconElementType(int32 InSkillId, class ASBPlayerCharacter* InPlayerCharacter, ESBSkillElementIconType* ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "GetIconElementType");

	Params::SkillInfoGaugeActive_C_GetIconElementType Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InPlayerCharacter = InPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (ElementType != nullptr)
		*ElementType = Parms.ElementType;
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.CheckBerserkModeSkill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::CheckBerserkModeSkill(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "CheckBerserkModeSkill");

	Params::SkillInfoGaugeActive_C_CheckBerserkModeSkill Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIsEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::SetIsEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SetIsEmpty");

	Params::SkillInfoGaugeActive_C_SetIsEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEmptyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeActive_C::SetEmptyColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SetEmptyColor");

	Params::SkillInfoGaugeActive_C_SetEmptyColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyVisibilityPermanent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisibilityPermanent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::SetKeyVisibilityPermanent(bool InIsVisibilityPermanent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SetKeyVisibilityPermanent");

	Params::SkillInfoGaugeActive_C_SetKeyVisibilityPermanent Parms{};

	Parms.InIsVisibilityPermanent = InIsVisibilityPermanent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SwitchSkillBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHud                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bBehind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAnim                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeActive_C::SwitchSkillBg(bool bHud, bool bBehind, bool bAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeActive_C", "SwitchSkillBg");

	Params::SkillInfoGaugeActive_C_SwitchSkillBg Parms{};

	Parms.bHud = bHud;
	Parms.bBehind = bBehind;
	Parms.bAnim = bAnim;

	UObject::ProcessEvent(Func, &Parms);
}

}

