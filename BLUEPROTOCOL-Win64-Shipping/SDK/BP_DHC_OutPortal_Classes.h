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
	 * BlueprintGeneratedClass BP_DHC_OutPortal.BP_DHC_OutPortal_C
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class ABP_DHC_OutPortal_C : public ABP_PartyPortal_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class APlayerController*>                           PlayerMembers;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void ReceiveBeginPlay();
		void Interacted(class AActor* OtherActor, const struct FRotator& ViewRotation);
		void TeleportOut(TArray<class APlayerController*> PlayerMembers);
		void CustomEvent();
		void ExecuteUbergraph_BP_DHC_OutPortal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
