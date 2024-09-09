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
	 * BlueprintGeneratedClass BP_PlayerWarpComponent.BP_PlayerWarpComponent_C
	 * Size -> 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
	 */
	class UBP_PlayerWarpComponent_C : public USBPlayerWarpComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWarpCountDown_C*                                    CountDownWidget;                                         // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsCountDownUICancelPressed();
		void HideCountDownUI();
		void ShowCountDownUI();
		void TickComponentByActorEvent(float DeltaTime);
		void ExecuteUbergraph_BP_PlayerWarpComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
