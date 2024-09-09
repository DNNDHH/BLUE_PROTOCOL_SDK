#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AutoPlay.AsyncActionRunAutoPlayTask.RunAutoPlayTask
	 */
	struct UAsyncActionRunAutoPlayTask_RunAutoPlayTask_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAutoPlayTask*                                       Task;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAsyncActionRunAutoPlayTask*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction AutoPlay.AsyncActionRunAutoPlayTask.OnEnded__DelegateSignature
	 */
	struct UAsyncActionRunAutoPlayTask_OnEnded__DelegateSignature_Params
	{
	public:
		EAutoPlayTaskState                                         State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayAgent.GetTaskSystem
	 */
	struct UAutoPlayAgent_GetTaskSystem_Params
	{
	public:
		class UAutoPlayTaskSystem*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayAgent.GetPlayerController
	 */
	struct UAutoPlayAgent_GetPlayerController_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayAgent.GetPawn
	 */
	struct UAutoPlayAgent_GetPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayAgent.GetInput
	 */
	struct UAutoPlayAgent_GetInput_Params
	{
	public:
		class UAutoPlayInput*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayAgent.FindSensorByClass
	 */
	struct UAutoPlayAgent_FindSensorByClass_Params
	{
	public:
		class UClass*                                              SensorClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAutoPlaySensor*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayAgent.FindMapByClass
	 */
	struct UAutoPlayAgent_FindMapByClass_Params
	{
	public:
		class UClass*                                              MapClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAutoPlayMap*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayAgent.AddSensor
	 */
	struct UAutoPlayAgent_AddSensor_Params
	{
	public:
		class UClass*                                              SensorClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAutoPlaySensor*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayInput.InputKey
	 */
	struct UAutoPlayInput_InputKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlaySubsystem.StopMacro
	 */
	struct UAutoPlaySubsystem_StopMacro_Params
	{	};

	/**
	 * Function AutoPlay.AutoPlaySubsystem.RunTask
	 */
	struct UAutoPlaySubsystem_RunTask_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlaySubsystem.RunMacro
	 */
	struct UAutoPlaySubsystem_RunMacro_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlaySubsystem.RecordMacro
	 */
	struct UAutoPlaySubsystem_RecordMacro_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlaySubsystem.GetAgent
	 */
	struct UAutoPlaySubsystem_GetAgent_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAutoPlayAgent*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlaySubsystem.EnableAutoPlay
	 */
	struct UAutoPlaySubsystem_EnableAutoPlay_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAutoPlayAgent*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlaySubsystem.DisableAutoPlay
	 */
	struct UAutoPlaySubsystem_DisableAutoPlay_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayMacroSystem.GetValueAsObject
	 */
	struct UAutoPlayMacroSystem_GetValueAsObject_Params
	{
	public:
		struct FAutoPlayEventArgs                                  Args;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             OutValue;                                                // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayMacroSystem.GetValueAsFloat
	 */
	struct UAutoPlayMacroSystem_GetValueAsFloat_Params
	{
	public:
		struct FAutoPlayEventArgs                                  Args;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutValue;                                                // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x005C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayService.GetOwnerTask
	 */
	struct UAutoPlayService_GetOwnerTask_Params
	{
	public:
		class UAutoPlayTask*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayTask.ReceiveInitByEvent
	 */
	struct UAutoPlayTask_ReceiveInitByEvent_Params
	{
	public:
		class FName                                                Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAutoPlayEventArgs                                  Args;                                                    // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayTask.NotifyResult
	 */
	struct UAutoPlayTask_NotifyResult_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayTask.GetOwnerAgent
	 */
	struct UAutoPlayTask_GetOwnerAgent_Params
	{
	public:
		class UAutoPlayAgent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayTask.CreateChildTask
	 */
	struct UAutoPlayTask_CreateChildTask_Params
	{
	public:
		class UClass*                                              TaskClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAutoPlayTask*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveTick
	 */
	struct UAutoPlayTask_BlueprintBase_ReceiveTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveStop
	 */
	struct UAutoPlayTask_BlueprintBase_ReceiveStop_Params
	{	};

	/**
	 * Function AutoPlay.AutoPlayTask_BlueprintBase.ReceiveStart
	 */
	struct UAutoPlayTask_BlueprintBase_ReceiveStart_Params
	{	};

	/**
	 * Function AutoPlay.AutoPlayTask_BlueprintBase.K2_NotifyResult
	 */
	struct UAutoPlayTask_BlueprintBase_K2_NotifyResult_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AutoPlay.AutoPlayTaskSystem.CreateTask
	 */
	struct UAutoPlayTaskSystem_CreateTask_Params
	{
	public:
		class UClass*                                              TaskClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             TaskOwner;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAutoPlayTask*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
