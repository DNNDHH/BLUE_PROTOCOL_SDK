#pragma once

 

// Package: QuestIcon_Outside

#include "Basic.hpp"

#include "QuestIcon_Outside_classes.hpp"
#include "QuestIcon_Outside_parameters.hpp"


namespace SDK
{

// Function QuestIcon_Outside.QuestIcon_Outside_C.ExecuteUbergraph_QuestIcon_Outside
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIcon_Outside_C::ExecuteUbergraph_QuestIcon_Outside(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_Outside_C", "ExecuteUbergraph_QuestIcon_Outside");

	Params::QuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIcon_Outside.QuestIcon_Outside_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestIcon_Outside_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_Outside_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconZOrder
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EQuestStatus, ESBMiniMapIconType>  IconTypeList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EQuestStatus                            Status                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIcon_Outside_C::SetIconZOrder(const TMap<EQuestStatus, ESBMiniMapIconType>& IconTypeList, const EQuestStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_Outside_C", "SetIconZOrder");

	Params::QuestIcon_Outside_C_SetIconZOrder Parms{};

	Parms.IconTypeList = std::move(IconTypeList);
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconTexture
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EQuestStatus, class UTexture2D*>   TextureList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EQuestStatus                            Key                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIcon_Outside_C::SetIconTexture(const TMap<EQuestStatus, class UTexture2D*>& TextureList, const EQuestStatus& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_Outside_C", "SetIconTexture");

	Params::QuestIcon_Outside_C_SetIconTexture Parms{};

	Parms.TextureList = std::move(TextureList);
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIcon_Outside_C::SetQuestIcon(int32 QuestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_Outside_C", "SetQuestIcon");

	Params::QuestIcon_Outside_C_SetQuestIcon Parms{};

	Parms.QuestID = QuestID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIconClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestIcon_Outside_C::SetQuestIconClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_Outside_C", "SetQuestIconClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestIcon_Outside.QuestIcon_Outside_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   StartAtTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PlaybackSpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIcon_Outside_C::PlayAnim(float StartAtTime, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_Outside_C", "PlayAnim");

	Params::QuestIcon_Outside_C_PlayAnim Parms{};

	Parms.StartAtTime = StartAtTime;
	Parms.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIcon_Outside.QuestIcon_Outside_C.PauseAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestIcon_Outside_C::PauseAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_Outside_C", "PauseAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

