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
	 * BlueprintGeneratedClass BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C
	 * Size -> 0x0010 (FullSize[0x0170] - InheritedSize[0x0160])
	 */
	class UBP_PlayerEngramCannonComponent_C : public USBPlayerEngramCannonComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0160(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUserWidget*                                         HUD;                                                     // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PostAkEvent_RideOff();
		void PostAkEvent_RideOn();
		void ResetUI();
		void SetUI();
		void InitGetOff_BP();
		void InitOnBoard_BP();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_PlayerEngramCannonComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
