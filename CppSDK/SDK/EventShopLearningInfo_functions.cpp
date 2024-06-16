#pragma once

 

// Package: EventShopLearningInfo

#include "Basic.hpp"

#include "EventShopLearningInfo_classes.hpp"
#include "EventShopLearningInfo_parameters.hpp"


namespace SDK
{

// Function EventShopLearningInfo.EventShopLearningInfo_C.ExecuteUbergraph_EventShopLearningInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopLearningInfo_C::ExecuteUbergraph_EventShopLearningInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopLearningInfo_C", "ExecuteUbergraph_EventShopLearningInfo");

	Params::EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopLearningInfo.EventShopLearningInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventShopLearningInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopLearningInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEventShopLearningInfo_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopLearningInfo_C", "OnMouseLeave");

	Params::EventShopLearningInfo_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEventShopLearningInfo_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopLearningInfo_C", "OnMouseEnter");

	Params::EventShopLearningInfo_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopLearningInfo.EventShopLearningInfo_C.SetSkillId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_SkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Exchangeable                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopLearningInfo_C::SetSkillId(int32 Param_SkillId, bool* Exchangeable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopLearningInfo_C", "SetSkillId");

	Params::EventShopLearningInfo_C_SetSkillId Parms{};

	Parms.Param_SkillId = Param_SkillId;

	UObject::ProcessEvent(Func, &Parms);

	if (Exchangeable != nullptr)
		*Exchangeable = Parms.Exchangeable;
}


// Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextSkillConditions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ConditionSkillId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ConditionSkillLv                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Skill                                                  (Parm, OutParm)

void UEventShopLearningInfo_C::GetTextSkillConditions(int32 ConditionSkillId, int32 ConditionSkillLv, class FText* Skill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopLearningInfo_C", "GetTextSkillConditions");

	Params::EventShopLearningInfo_C_GetTextSkillConditions Parms{};

	Parms.ConditionSkillId = ConditionSkillId;
	Parms.ConditionSkillLv = ConditionSkillLv;

	UObject::ProcessEvent(Func, &Parms);

	if (Skill != nullptr)
		*Skill = std::move(Parms.Skill);
}


// Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextClassLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            Param_ClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClassLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Param_ClassText                                        (Parm, OutParm)

void UEventShopLearningInfo_C::GetTextClassLevel(ESBClassType Param_ClassType, int32 ClassLevel, class FText* Param_ClassText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopLearningInfo_C", "GetTextClassLevel");

	Params::EventShopLearningInfo_C_GetTextClassLevel Parms{};

	Parms.Param_ClassType = Param_ClassType;
	Parms.ClassLevel = ClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ClassText != nullptr)
		*Param_ClassText = std::move(Parms.Param_ClassText);
}

}

