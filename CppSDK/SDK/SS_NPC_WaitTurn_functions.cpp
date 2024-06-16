#pragma once

 

// Package: SS_NPC_WaitTurn

#include "Basic.hpp"

#include "SS_NPC_WaitTurn_classes.hpp"
#include "SS_NPC_WaitTurn_parameters.hpp"


namespace SDK
{

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ExecuteUbergraph_SS_NPC_WaitTurn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::ExecuteUbergraph_SS_NPC_WaitTurn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "ExecuteUbergraph_SS_NPC_WaitTurn");

	Params::SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  InMobCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::TickDelegate(class ASBMobCharacter* InMobCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "TickDelegate");

	Params::SS_NPC_WaitTurn_C_TickDelegate Parms{};

	Parms.InMobCharacter = InMobCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.BeginProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  MobCharacer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::BeginProcess(class ASBMobCharacter* MobCharacer, class USBNpcCharacterAnimInstance* AnimInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "BeginProcess");

	Params::SS_NPC_WaitTurn_C_BeginProcess Parms{};

	Parms.MobCharacer = MobCharacer;
	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::TickProcess(class USBNpcCharacterAnimInstance* AnimInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "TickProcess");

	Params::SS_NPC_WaitTurn_C_TickProcess Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegateProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::TickDelegateProcess(class AActor* Actor, class USBNpcCharacterAnimInstance* AnimInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "TickDelegateProcess");

	Params::SS_NPC_WaitTurn_C_TickDelegateProcess Parms{};

	Parms.Actor = Actor;
	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.EndProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  MobCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::EndProcess(class ASBMobCharacter* MobCharacter, class USBNpcCharacterAnimInstance* AnimInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "EndProcess");

	Params::SS_NPC_WaitTurn_C_EndProcess Parms{};

	Parms.MobCharacter = MobCharacter;
	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetStartTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      Anim_Instance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::SetStartTime(class USBNpcCharacterAnimInstance* Anim_Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "SetStartTime");

	Params::SS_NPC_WaitTurn_C_SetStartTime Parms{};

	Parms.Anim_Instance = Anim_Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetStartTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      Anim_Instance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        StartTime                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::GetStartTime(class USBNpcCharacterAnimInstance* Anim_Instance, struct FDateTime* StartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "GetStartTime");

	Params::SS_NPC_WaitTurn_C_GetStartTime Parms{};

	Parms.Anim_Instance = Anim_Instance;

	UObject::ProcessEvent(Func, &Parms);

	if (StartTime != nullptr)
		*StartTime = std::move(Parms.StartTime);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.Set Temp Anim Time Ratio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AnimTimeRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::Set_Temp_Anim_Time_Ratio(class USBNpcCharacterAnimInstance* AnimInstance, float AnimTimeRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "Set Temp Anim Time Ratio");

	Params::SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimTimeRatio = AnimTimeRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetTempAnimTimeLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AnimTimeLength                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::SetTempAnimTimeLength(class USBNpcCharacterAnimInstance* AnimInstance, float AnimTimeLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "SetTempAnimTimeLength");

	Params::SS_NPC_WaitTurn_C_SetTempAnimTimeLength Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimTimeLength = AnimTimeLength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AnimTimeRatio                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::GetTempAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, float* AnimTimeRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "GetTempAnimTimeRatio");

	Params::SS_NPC_WaitTurn_C_GetTempAnimTimeRatio Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimTimeRatio != nullptr)
		*AnimTimeRatio = Parms.AnimTimeRatio;
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AnimTimeLength                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::GetTempAnimTimeLength(class USBNpcCharacterAnimInstance* AnimInstance, float* AnimTimeLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "GetTempAnimTimeLength");

	Params::SS_NPC_WaitTurn_C_GetTempAnimTimeLength Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimTimeLength != nullptr)
		*AnimTimeLength = Parms.AnimTimeLength;
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetCompleteAnimTimeRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCompleted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USS_NPC_WaitTurn_C::SetCompleteAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, bool IsCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "SetCompleteAnimTimeRatio");

	Params::SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.IsCompleted = IsCompleted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.IsCompleteAnimTimeRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBNpcCharacterAnimInstance*      AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCompleted                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USS_NPC_WaitTurn_C::IsCompleteAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, bool* IsCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "IsCompleteAnimTimeRatio");

	Params::SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCompleted != nullptr)
		*IsCompleted = Parms.IsCompleted;
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "ReceiveTick");

	Params::SS_NPC_WaitTurn_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "ReceiveBeginPlay");

	Params::SS_NPC_WaitTurn_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WaitTurn_C::ReceiveEndPlay(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WaitTurn_C", "ReceiveEndPlay");

	Params::SS_NPC_WaitTurn_C_ReceiveEndPlay Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}

