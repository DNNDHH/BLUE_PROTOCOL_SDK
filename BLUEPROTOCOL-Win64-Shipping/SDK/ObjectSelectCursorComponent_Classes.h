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
	 * BlueprintGeneratedClass ObjectSelectCursorComponent.ObjectSelectCursorComponent_C
	 * Size -> 0x0010 (FullSize[0x0410] - InheritedSize[0x0400])
	 */
	class UObjectSelectCursorComponent_C : public USBWidgetComponent2D
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UObject*                                             CurrentTarget;                                           // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeAtFirstLoadingComplete();
		void IsLocallyControlled(bool* bIsLocallyControlled);
		void UpdateDisplayLocation();
		void GetDisplayLocation(const struct FSBInteractionInfo& InteractionInfo, struct FVector* DisplayLocation);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_ObjectSelectCursorComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
