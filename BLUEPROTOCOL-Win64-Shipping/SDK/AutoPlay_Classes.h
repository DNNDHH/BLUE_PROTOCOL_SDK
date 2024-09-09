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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AutoPlay.AsyncActionRunAutoPlayTask
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAsyncActionRunAutoPlayTask : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Ended;                                                   // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PDDU[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAsyncActionRunAutoPlayTask* RunAutoPlayTask(class UObject* WorldContextObject, class UAutoPlayTask* Task);
		void OnEnded__DelegateSignature(EAutoPlayTaskState State);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlayAgent
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAutoPlayAgent : public UObject
	{
	public:
		unsigned char                                              UnknownData_AJUG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAutoPlaySensor*>                             Sensors;                                                 // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UAutoPlayMap*>                                Maps;                                                    // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UAutoPlayTaskSystem*                                 TaskSystem;                                              // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAutoPlayInput*                                      Input;                                                   // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULocalPlayer*                                        LocalPlayer;                                             // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerController*                                   PlayerController;                                        // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UAutoPlayTaskSystem* GetTaskSystem();
		class APlayerController* GetPlayerController();
		class APawn* GetPawn();
		class UAutoPlayInput* GetInput();
		class UAutoPlaySensor* FindSensorByClass(class UClass* SensorClass);
		class UAutoPlayMap* FindMapByClass(class UClass* MapClass);
		class UAutoPlaySensor* AddSensor(class UClass* SensorClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlayInput
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAutoPlayInput : public UObject
	{
	public:
		unsigned char                                              UnknownData_RN99[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void InputKey(const struct FKey& Key, float Value, float Time);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlaySubsystem
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UAutoPlaySubsystem : public UGameInstanceSubsystem
	{
	public:
		TMap<class ULocalPlayer*, class UAutoPlayAgent*>           AgentMap;                                                // 0x0030(0x0050) NativeAccessSpecifierPrivate
		class UAutoPlayMacroSystem*                                MacroSystem;                                             // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StopMacro();
		void RunTask(const class FName& EventName);
		void RunMacro(const class FString& Name);
		void RecordMacro(const class FString& Name);
		class UAutoPlayAgent* GetAgent(class APlayerController* PlayerController);
		class UAutoPlayAgent* EnableAutoPlay(class APlayerController* PlayerController);
		void DisableAutoPlay(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlayMacroSystem
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UAutoPlayMacroSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_201N[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UClass*>                           RegisteredTaskClass;                                     // 0x0030(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EIN4[0x80];                                  // 0x0080(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAutoPlayTask*                                       CurrentTask;                                             // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool GetValueAsObject(const struct FAutoPlayEventArgs& Args, const class FName& Name, class UObject** OutValue);
		bool GetValueAsFloat(const struct FAutoPlayEventArgs& Args, const class FName& Name, float* OutValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlayMap
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutoPlayMap : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlaySensor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutoPlaySensor : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlayService
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAutoPlayService : public UObject
	{
	public:
		class UAutoPlayTask*                                       OwnerTask;                                               // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TickInterval;                                            // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MAPM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		class UAutoPlayTask* GetOwnerTask();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlaySettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAutoPlaySettings : public UDeveloperSettings
	{
	public:
		ECollisionChannel                                          CollisionChannel;                                        // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOZU[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlayTask
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UAutoPlayTask : public UObject
	{
	public:
		TArray<class UClass*>                                      ServiceClasses;                                          // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UAutoPlayService*>                            Services;                                                // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UAutoPlayTaskSystem*                                 TaskSystem;                                              // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             TaskOwner;                                               // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7EZ2[0x1C];                                  // 0x0058(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Resource;                                                // 0x0074(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                EventName;                                               // 0x007C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROA4[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		void ReceiveInitByEvent(const class FName& Event, const struct FAutoPlayEventArgs& Args);
		void NotifyResult(bool bSuccess);
		class UAutoPlayAgent* GetOwnerAgent();
		class UAutoPlayTask* CreateChildTask(class UClass* TaskClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlayTask_BlueprintBase
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UAutoPlayTask_BlueprintBase : public UAutoPlayTask
	{
	public:
		void ReceiveTick(float DeltaTime);
		void ReceiveStop();
		void ReceiveStart();
		void K2_NotifyResult(bool bSuccess);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoPlay.AutoPlayTaskSystem
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAutoPlayTaskSystem : public UObject
	{
	public:
		TArray<class UAutoPlayTask*>                               Tasks;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UAutoPlayTask*>                               PausedTasks;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		class UAutoPlayTask* CreateTask(class UClass* TaskClass, class UObject* TaskOwner);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
