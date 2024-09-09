/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AsyncActionRunAutoPlayTask.RunAutoPlayTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAutoPlayTask*                               Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAsyncActionRunAutoPlayTask* UAsyncActionRunAutoPlayTask::RunAutoPlayTask(class UObject* WorldContextObject, class UAutoPlayTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AsyncActionRunAutoPlayTask.RunAutoPlayTask");
		
		UAsyncActionRunAutoPlayTask_RunAutoPlayTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction AutoPlay.AsyncActionRunAutoPlayTask.OnEnded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAutoPlayTaskState                                 State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAsyncActionRunAutoPlayTask::OnEnded__DelegateSignature(EAutoPlayTaskState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AutoPlay.AsyncActionRunAutoPlayTask.OnEnded__DelegateSignature");
		
		UAsyncActionRunAutoPlayTask_OnEnded__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAsyncActionRunAutoPlayTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncActionRunAutoPlayTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AsyncActionRunAutoPlayTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayAgent.GetTaskSystem
	 * 		Flags  -> ()
	 */
	class UAutoPlayTaskSystem* UAutoPlayAgent::GetTaskSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayAgent.GetTaskSystem");
		
		UAutoPlayAgent_GetTaskSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayAgent.GetPlayerController
	 * 		Flags  -> ()
	 */
	class APlayerController* UAutoPlayAgent::GetPlayerController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayAgent.GetPlayerController");
		
		UAutoPlayAgent_GetPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayAgent.GetPawn
	 * 		Flags  -> ()
	 */
	class APawn* UAutoPlayAgent::GetPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayAgent.GetPawn");
		
		UAutoPlayAgent_GetPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayAgent.GetInput
	 * 		Flags  -> ()
	 */
	class UAutoPlayInput* UAutoPlayAgent::GetInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayAgent.GetInput");
		
		UAutoPlayAgent_GetInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayAgent.FindSensorByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SensorClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAutoPlaySensor* UAutoPlayAgent::FindSensorByClass(class UClass* SensorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayAgent.FindSensorByClass");
		
		UAutoPlayAgent_FindSensorByClass_Params params {};
		params.SensorClass = SensorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayAgent.FindMapByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      MapClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAutoPlayMap* UAutoPlayAgent::FindMapByClass(class UClass* MapClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayAgent.FindMapByClass");
		
		UAutoPlayAgent_FindMapByClass_Params params {};
		params.MapClass = MapClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayAgent.AddSensor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SensorClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAutoPlaySensor* UAutoPlayAgent::AddSensor(class UClass* SensorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayAgent.AddSensor");
		
		UAutoPlayAgent_AddSensor_Params params {};
		params.SensorClass = SensorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlayAgent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlayAgent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlayAgent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayInput.InputKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoPlayInput::InputKey(const struct FKey& Key, float Value, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayInput.InputKey");
		
		UAutoPlayInput_InputKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlayInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlayInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlayInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlaySubsystem.StopMacro
	 * 		Flags  -> ()
	 */
	void UAutoPlaySubsystem::StopMacro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlaySubsystem.StopMacro");
		
		UAutoPlaySubsystem_StopMacro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlaySubsystem.RunTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoPlaySubsystem::RunTask(const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlaySubsystem.RunTask");
		
		UAutoPlaySubsystem_RunTask_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlaySubsystem.RunMacro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoPlaySubsystem::RunMacro(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlaySubsystem.RunMacro");
		
		UAutoPlaySubsystem_RunMacro_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlaySubsystem.RecordMacro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoPlaySubsystem::RecordMacro(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlaySubsystem.RecordMacro");
		
		UAutoPlaySubsystem_RecordMacro_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlaySubsystem.GetAgent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAutoPlayAgent* UAutoPlaySubsystem::GetAgent(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlaySubsystem.GetAgent");
		
		UAutoPlaySubsystem_GetAgent_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlaySubsystem.EnableAutoPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAutoPlayAgent* UAutoPlaySubsystem::EnableAutoPlay(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlaySubsystem.EnableAutoPlay");
		
		UAutoPlaySubsystem_EnableAutoPlay_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlaySubsystem.DisableAutoPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoPlaySubsystem::DisableAutoPlay(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlaySubsystem.DisableAutoPlay");
		
		UAutoPlaySubsystem_DisableAutoPlay_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlaySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlaySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlaySubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayMacroSystem.GetValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayEventArgs                          Args                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAutoPlayMacroSystem::GetValueAsObject(const struct FAutoPlayEventArgs& Args, const class FName& Name, class UObject** OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayMacroSystem.GetValueAsObject");
		
		UAutoPlayMacroSystem_GetValueAsObject_Params params {};
		params.Args = Args;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayMacroSystem.GetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayEventArgs                          Args                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAutoPlayMacroSystem::GetValueAsFloat(const struct FAutoPlayEventArgs& Args, const class FName& Name, float* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayMacroSystem.GetValueAsFloat");
		
		UAutoPlayMacroSystem_GetValueAsFloat_Params params {};
		params.Args = Args;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlayMacroSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlayMacroSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlayMacroSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlayMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlayMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlayMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlaySensor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlaySensor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlaySensor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayService.GetOwnerTask
	 * 		Flags  -> ()
	 */
	class UAutoPlayTask* UAutoPlayService::GetOwnerTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayService.GetOwnerTask");
		
		UAutoPlayService_GetOwnerTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlayService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlayService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlayService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlaySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlaySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlaySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTask.ReceiveInitByEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAutoPlayEventArgs                          Args                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAutoPlayTask::ReceiveInitByEvent(const class FName& Event, const struct FAutoPlayEventArgs& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTask.ReceiveInitByEvent");
		
		UAutoPlayTask_ReceiveInitByEvent_Params params {};
		params.Event = Event;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTask.NotifyResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoPlayTask::NotifyResult(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTask.NotifyResult");
		
		UAutoPlayTask_NotifyResult_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTask.GetOwnerAgent
	 * 		Flags  -> ()
	 */
	class UAutoPlayAgent* UAutoPlayTask::GetOwnerAgent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTask.GetOwnerAgent");
		
		UAutoPlayTask_GetOwnerAgent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTask.CreateChildTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      TaskClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAutoPlayTask* UAutoPlayTask::CreateChildTask(class UClass* TaskClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTask.CreateChildTask");
		
		UAutoPlayTask_CreateChildTask_Params params {};
		params.TaskClass = TaskClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlayTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlayTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlayTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoPlayTask_BlueprintBase::ReceiveTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveTick");
		
		UAutoPlayTask_BlueprintBase_ReceiveTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveStop
	 * 		Flags  -> ()
	 */
	void UAutoPlayTask_BlueprintBase::ReceiveStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveStop");
		
		UAutoPlayTask_BlueprintBase_ReceiveStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveStart
	 * 		Flags  -> ()
	 */
	void UAutoPlayTask_BlueprintBase::ReceiveStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveStart");
		
		UAutoPlayTask_BlueprintBase_ReceiveStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTask_BlueprintBase.K2_NotifyResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoPlayTask_BlueprintBase::K2_NotifyResult(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTask_BlueprintBase.K2_NotifyResult");
		
		UAutoPlayTask_BlueprintBase_K2_NotifyResult_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlayTask_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlayTask_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlayTask_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoPlay.AutoPlayTaskSystem.CreateTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      TaskClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     TaskOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAutoPlayTask* UAutoPlayTaskSystem::CreateTask(class UClass* TaskClass, class UObject* TaskOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoPlay.AutoPlayTaskSystem.CreateTask");
		
		UAutoPlayTaskSystem_CreateTask_Params params {};
		params.TaskClass = TaskClass;
		params.TaskOwner = TaskOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoPlayTaskSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPlayTaskSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoPlay.AutoPlayTaskSystem");
		return ptr;
	}

}


