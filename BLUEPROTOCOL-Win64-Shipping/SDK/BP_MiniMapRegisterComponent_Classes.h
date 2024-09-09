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
	 * BlueprintGeneratedClass BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UBP_MiniMapRegisterComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBMiniMapIconBase*                                  MiniMapIconWidget;                                       // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMiniMapIconRegisterType                                   RegisterIconType;                                        // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTick;                                                  // 0x00C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NX5Z[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBMapIcon*                                          WholeMapIconWidget;                                      // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        EventHandle;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void DeleteWholeMapIcon();
		void CreateWholeMapIcon(bool* Result);
		void DeleteMiniMapIcon();
		void CreateMiniMapIcon(bool* Result);
		void OnTick();
		void DeleteIcon();
		void CreateIcon(bool* Result);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void BindBuddy();
		void UnbindBuddy();
		void OnBuddyDelegate();
		void StartRequest();
		void OnRequest();
		void StopRequest();
		void ExecuteUbergraph_BP_MiniMapRegisterComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
